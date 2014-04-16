#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void ToLower(vector<string> v)
{
  for (int i = 0; i < v.size(); ++i)
  {
	string temp;
	transform((v[i]).begin(), (v[i]).end(), back_inserter(temp), ::tolower);
	cout << temp << " ";
  }
  cout << endl;
}

int main(int argc,char *argv[]) 
{
  ifstream ifs(argv[1]);
  string token;
  if (ifs.is_open())
  {
	while (getline(ifs, token))
	{
	  string token1;
	  vector<string> vs;
	  stringstream ss(token);
	  while (getline(ss, token1, ' '))
		vs.push_back(token1);
	  ToLower(vs);
	}
  }
  system("pause");
  return 0;
}