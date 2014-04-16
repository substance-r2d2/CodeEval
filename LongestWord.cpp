#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

void largestString(vector<string> vs)
{
  int length = vs[0].length();
  int max = 0;
  for (int i = 1; i < vs.size(); ++i)
  {
    if (vs[i].length()>length)
	{
	  length = vs[i].length();
	  max = i;
	}
  }
  cout << vs[max] << endl;
}

int main(int argc, const char * argv[])
{
  ifstream ifs(argv[1]);
  string token;
  while (getline(ifs, token)) 
  {
	vector<string> vs;
	stringstream ss(token);
	while (getline(ss, token, ' '))
	  vs.push_back(token);
	largestString(vs);

  }
  system("pause");
  return 0;

}