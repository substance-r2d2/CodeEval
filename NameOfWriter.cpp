#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void printName(string jumble, vector<string> vs)
{
  for (int i = 0; i < vs.size(); ++i)
  {
	if (vs[i] != "")
	{
	  cout << jumble.at(stoi(vs[i])-1);
	}
  }
  cout << endl;
}


int main(int argc, char *argv[])
{
  ifstream ifs(argv[1]);
  if (ifs.is_open())
  {
	string token;
	while (getline(ifs, token))
	{
	  vector<string> v;
	  stringstream ss(token);
	  while (getline(ss, token, '|'))
		v.push_back(token);
	  if (v.size() > 1)
	  {
		stringstream ss1(v[1]);
		vector<string> vs;
		while (getline(ss1, token, ' '))
		  vs.push_back(token);
		if (vs.size() > 1)
		  printName(v[0], vs);
	  }
	}
  }
  system("pause");
  return 0;
}