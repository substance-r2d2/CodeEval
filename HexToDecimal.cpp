#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

map<string, int> hexValues;

void createMap()
{
  hexValues.insert(pair<string, int>("1", 1));
  hexValues.insert(pair<string, int>("2", 2));
  hexValues.insert(pair<string, int>("3", 3));
  hexValues.insert(pair<string, int>("4", 4));
  hexValues.insert(pair<string, int>("5", 5));
  hexValues.insert(pair<string, int>("6", 6));
  hexValues.insert(pair<string, int>("7", 7));
  hexValues.insert(pair<string, int>("8", 8));
  hexValues.insert(pair<string, int>("9", 9));
  hexValues.insert(pair<string, int>("a", 10));
  hexValues.insert(pair<string, int>("b", 11));
  hexValues.insert(pair<string, int>("c", 12));
  hexValues.insert(pair<string, int>("d", 13));
  hexValues.insert(pair<string, int>("e", 14));
  hexValues.insert(pair<string, int>("f", 15));
}


void printDecimal(string str)
{
  int sum = 0;
  string temp;
  for (int i = 0; i < str.size(); ++i)
  {
	temp = str[i];
	auto it = hexValues.find(temp);
	sum += it->second*pow(16, (str.size()-i-1));
  }
  cout << sum << endl;
}

int main(int argc, const char * argv[])
{
  createMap();
  ifstream ifs(argv[1]);
  string token;
  while (getline(ifs, token))
  {
	printDecimal(token);
  }
  system("pause");
}