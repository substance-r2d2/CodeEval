#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class lengthcomp{
public:
  bool operator ()(string s1,string s2)
  {
	return(s1.size() > s2.size());
  }
};

void printLongestLines(vector<string> v,int num)
{
  int i = 0, n = 0;
  sort(v.begin(), v.end(), lengthcomp());
  for (int i = 0; i < num; ++i)
  {
	cout << v[i] << endl;
  }
}

int main(int argc, char *argv[])
{
  ifstream ifs(argv[1]);
  string token;
  if (ifs.is_open())
  {
	vector<string> vs;
	while (getline(ifs, token))
	{
	  vs.push_back(token);
	}
	printLongestLines(vs, stoi(vs[0]));
  }
  system("pause");
  return 0;
}