#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void fizzBuzz(int a, int b, int range)
{
  for (int i = 1; i <= range; ++i)
  {
	if (i%a == 0 && i%b ==0)
	  cout << "FB ";
	else 
	if (i%a == 0)
	  cout << "F ";
	else
	if (i%b == 0)
	  cout << "B ";
	else
	  cout << i << " ";
  }
  cout << endl;
}

int main(int argc,char *argv[]) 
{
  string token;
  ifstream ifs(argv[1]);
  if (ifs.is_open())
  {
	while (getline(ifs, token))
	{
	  string token1;
	  vector<string> vs;
	  stringstream ss(token);
	  while (getline(ss, token1, ' '))
		vs.push_back(token1);
	  fizzBuzz(stoi(vs[0]), stoi(vs[1]), stoi(vs[2]));
	}
  }
  system("pause");
  return 0;
}