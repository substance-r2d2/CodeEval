#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

map<char, int> values;

void createMap()
{
  for (int i = 97; i < 107; ++i)
  {
	
	values[char(i)] = i - 97;
  }
  for (int i = 48; i < 58; ++i)
  {
	values[char(i)] = i - 48;
  }
}

void printHiddenDigits(string& str)
{
  int count = 0;
  for (int i = 0; i < str.length(); ++i)
  {
	if (islower(str[i]) || isdigit(str[i])){
	  auto it = values.find(str[i]);
	  if (it != values.end())
	  {
		cout << it->second;
		++count;
	  }
	}
  }
  if (count == 0)
	cout << "NONE" << endl;
  else
	cout << endl;
}

int main(int argc, const char * argv[])
{
  createMap();

  ifstream ifs(argv[1]);
  string token;
  while (getline(ifs, token))
  {
	printHiddenDigits(token);
  }
  system("pause");
}