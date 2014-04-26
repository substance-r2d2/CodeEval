#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
  string token;
  int a, b;
  string temp;
  ifstream ifs(argv[1]);
  while (getline(ifs, token))
  {
	stringstream ss(token);
	getline(ss, temp, ',');
	a = stoi(temp);
	getline(ss, temp);
	b = stoi(temp);
	cout << a - ((a / b)*b) << endl;
  }
  system("pause");
}