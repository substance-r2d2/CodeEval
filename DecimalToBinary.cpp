#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <cctype>
using namespace std;

map<char, int> values;

void toDecimal(int num)
{
  string str;
  do
  {
	str.append(to_string(num % 2));
	num /= 2;
  } while (num != 0);
  cout << string(str.rbegin(), str.rend()) << endl;
}


int main(int argc, char *argv[])
{
  ifstream ifs(argv[1]);
  if (ifs.is_open())
  {
	string token;
	while (getline(ifs, token))
	{
	  vector<string> vs;
	  vs.push_back(token);
	  toDecimal(stoi(vs[0]));
	}
  }
  system("pause");
  return 0;
}