#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <set>

using namespace std;

int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  while (getline(ifs, token))
  {
	stringstream ss(token);
	string str1,str2;
	getline(ss, str1, ',');
	getline(ss, str2);
	int start = str1.length() - str2.length();
	if (start >= 0 && str1.substr(start, str2.length()) == str2)
	  cout << "1" << endl;
	else
	  cout << "0" << endl;
  }
  system("pause");
}