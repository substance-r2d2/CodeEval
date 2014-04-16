#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

bool isPrime(string x)
{
  int tempi = stoi(x);
  for (int i = 2; i <= sqrt(tempi); i++)
  {
	if (tempi % i ==0 )
	{
	  return false;
	}
  }
  return true;
}

int main() 
{
  string str;
  string temp;
  int tempi;
  for (int i = 1000; i > 10; --i)
  {
	str = to_string(i);
	temp = string(str.rbegin(), str.rend());
	if (temp == str)
	{
	  if(isPrime(temp))
		break;
	}
  }
  cout << temp << endl;
  system("pause");
  return 0;
}