#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

bool isPrime(int v)
{
  for (int i = 2; i <= sqrt(v); ++i){
	if (v % i == 0)
	  return false;
  }
  return true;
}

int main(int argc,char *argv[]) 
{
  int count = 0;
  int sum = 0;
  int num = 2;
  do{
	if (isPrime(num))
	{
	  sum += num;
	  ++count;
	}
	++num;
  } while (count < 1000);
  cout << sum << endl;
  system("pause");
  return 0;
}