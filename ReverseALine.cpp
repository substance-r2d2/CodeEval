#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void reverseIt(vector<string> vs)
{
   for (int i = vs.size() - 1; i >= 0; --i)
  {
	cout << vs[i] << " ";
  }
  cout << endl;
}

int main(int argc,char *argv[]) 
{
  ifstream ifs(argv[1]);
  string token;
  if (ifs.is_open())
  {
	while (getline(ifs, token))
	{
	  stringstream ss(token);
	  string token1;
	  vector<string> v;
	  while (getline(ss, token1, ' '))
		v.push_back(token1);
	  reverseIt(v);
	}
  }

  system("pause");
  return 0;
}