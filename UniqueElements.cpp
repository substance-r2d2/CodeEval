#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

void searchPosition(string line, string c)
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
	  set<string> nums;
	  stringstream ss(token);
	  while (getline(ss, token, ','))
		nums.insert(token);
	  for (auto i = nums.begin(); i != nums.end(); ++i)
	  {
		if (i == --nums.end())
		  cout << *i << endl;
		else
		  cout << *i << ",";
	  }
	}
  }
  system("pause");
  return 0;
}