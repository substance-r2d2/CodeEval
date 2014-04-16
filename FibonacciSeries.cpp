#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void printFibonacci(int pos)
{
  int num1 = 0;
  int num2 = 1;
  int sum = 0;
  if (pos == 0)
  {
    cout << 0 << endl;
	return;
  }
  if (pos == 1)
  {
	cout << 1 << endl;
	return;
  }
  for (int i = 1; i < pos; ++i)
  {
	sum = num1 + num2;
	num1 = num2;
	num2 = sum;
  }
  cout << sum << endl;
}


int main(int argc, char *argv[])
{
  ifstream ifs(argv[1]);
  vector<string> v;
  if (ifs.is_open())
  {
	string token;
	while (getline(ifs, token))
	{
	  printFibonacci(stoi(token));
	}
  }
  system("pause");
  return 0;
}