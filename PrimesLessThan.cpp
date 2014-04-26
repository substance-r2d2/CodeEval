#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

bool isPrime(int num)
{
  for (int i = 2; i <= sqrt(num); ++i)
  {
	if (num%i == 0)
	{
	  return true;
	}
  }
  return false;
}

int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  vector<int> ans;
  while (getline(ifs, token))
  {
	for (int i = 2; i < stoi(token); ++i)
	{
	  if (!isPrime(i))
		ans.push_back(i);
	}
	cout << ans[0];
	for (int i = 1; i < ans.size(); ++i)
	  cout << "," << ans[i];
	cout << endl;
	ans.clear();
  }
  system("pause");
}