#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int coin1 = 1;
int coin2 = 3;
int coin3 = 5;

void minimumCoins(signed int num)
{
  int count = 0;
  while (num!=0)
  {
	if (num >= 5)
	{
	  num = num - coin3;
	  ++count;
	}
	else if (num >= coin2)
	{
	  num = num - coin2; 
	  ++count;
	}
	else if (num>=coin1)
	{
	  num = num - coin1;
	  ++count;
	}
 }
  cout << count << endl;
  
}

int main(int argc, char *argv[])
{
  vector<int> vs;
  for (int i = 0; i < 10; ++i)
	vs.push_back(i);
  ifstream ifs(argv[1]);
  string token;
  if (ifs.is_open())
  {
	while (getline(ifs, token))
	{
	  vector<string> vs;
	  vs.push_back(token);
	  minimumCoins(stoi(vs[0]));
	}
  }
  system("pause");
  return 0;
}