#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
  int sum = 0;
  ifstream ifs(argv[1]);
  vector<string> v;
  if (ifs.is_open())
  {
    string token;
	while (getline(ifs, token))
	{
	  v.push_back(token);
	}
	for (auto i : v)
	{
	  sum += stoi(i);
	}
  }
  cout << sum << endl;
  system("pause");
  return 0;
}