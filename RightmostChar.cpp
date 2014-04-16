#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void searchPosition(string line,string c)
{
  if (line.find_last_of(c) != string::npos)
    cout << line.find_last_of(c) << endl;
  else
	cout << -1 << endl;
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
	  while (getline(ss,token,','))
		v.push_back(token);
	  searchPosition(v[0], v[1]);
	}
  }
  system("pause");
  return 0;
}