#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int countMajor(vector<int>& v)
{
  long max = (v.size() / 2);
  long c = 0;
  int e = 0;
  do{
	e = v[0];
	c = count(v.begin(), v.end(), v[0]);
	if (c > max)
	  return v[0];
	v.erase(remove_if(v.begin(), v.end(), [e](int i){
	  return (e == i);
	}), v.end());
  } while (!v.empty());
  return -1;
}


int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  vector<int> vs;
  stringstream ss;
  while (getline(ifs, token))
  {
	ss << token;
	while (getline(ss,token,','))
	{
	  vs.push_back(stoi(token));
	}
	int ans = countMajor(vs);
	if (ans == -1)
	  cout << "NONE" << endl;
	else
	  cout << ans << endl;
	ss.clear();
	vs.clear();
  }
  system("pause");
}