#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

void binaryAndCheck(vector<string> vs)
{
  int num = stoi(vs[0]);
  string str;
  do
  {
    str.append(to_string(num % 2));
	num /= 2;
  } while (num != 0);
  str = string(str.rbegin(), str.rend());
  int pos = str.size();
  if (str.at(pos - stoi(vs[1])) == str.at(pos - stoi(vs[2])))
	cout << "true" << endl;
  else
	cout << "false" << endl;
}

int main(int argc, const char * argv[])
{
  ifstream ifs(argv[1]);
  string token;
  
  while (getline(ifs, token)) 
  {
	vector<string> vs;
	stringstream ss(token);
	while (getline(ss, token, ','))
	{
	  vs.push_back(token);
	}
	binaryAndCheck(vs);
  }
  system("pause");
  return 0;

}