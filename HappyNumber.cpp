#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <set>

using namespace std;

int sumSquare(int& num)
{
	long sum = 0;
	int digit;
	do
	{
	  digit = num % 10;
	  num = num / 10;
	  sum += pow(digit, 2);
	} while (num != 0);
	return sum;
}


int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  while (getline(ifs, token))
  {
	set<int> visited;
	int num = stoi(token);
	do
	{
	  num = sumSquare(num);
	  if (visited.find(num) != visited.end())
		break;
	  else
		visited.insert(num);
	} while (num != 1);
	if (num == 1)
	  cout << "1" << endl;
	else
	  cout << "0" << endl;
  }
  system("pause");
}