#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;


void isSolution(vector<string> v)
{
  int num = stoi(v[0]);
  int result = 0;
  for (int i = 1; i <= num; ++i)
  {
	if (count(v.begin() + 2, v.end(), to_string(i)) == num)
	  ++result;
  }
  if (result == num &&v.size() == (num*num + 2))
	cout << "True" << endl;
  else
	cout << "False" << endl;
}


int main(int argc, char *argv[])
{
  ifstream ifs(argv[1]);
  if (ifs.is_open())
  {
	string token;
	while (getline(ifs, token))
	{
	  if (token.length() > 0)
	  {
		vector<string> vs;
		int count = 0;
		stringstream ss(token);
		while (getline(ss, token, ';'))
		  vs.push_back(token);
		stringstream ss1(vs[1]);
		while (getline(ss1, token, ','))
		  vs.push_back(token);
		isSolution(vs);
	  }
	  else
		cout << "False" << endl;
	}
  }
  system("pause");
  return 0;
}