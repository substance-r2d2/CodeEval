#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  while (getline(ifs, token))
  {
	sort(token.begin(), token.end());
	bool isFirst = true;
	do
	{
	  if (isFirst)
	  {
		cout << token;
		isFirst = false;
	  }
	  else
		cout << "," << token;
	} while (next_permutation(token.begin(), token.end()));
	cout << endl;
  }
  system("pause");
}