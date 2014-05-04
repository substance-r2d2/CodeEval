#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool isRotation(vector<string>& vs)
{
  for (int i = 0; i < vs[0].length(); ++i)
  {
	rotate(vs[0].begin(), vs[0].begin() + 1, vs[0].end());
	if (vs[0] == vs[1])
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
  vector<string> vs;
  stringstream ss;
  while (getline(ifs, token))
  {
	ss<<token;
	while (getline(ss, token, ','))
	  vs.push_back(token);
	ss.clear();
	if (isRotation(vs))
	  cout << "True" << endl;
	else
	  cout << "False" << endl;
	vs.clear();
  }
  system("pause");
}