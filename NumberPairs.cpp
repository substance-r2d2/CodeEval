#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


void printPair(vector<int>& v, int num)
{
  /*auto last = std::unique(v.begin(), v.end());
  v.erase(last, v.end());*/
  int count = 0;
  bool isfirst = true;
  for (int i = 0; i < v.size(); ++i)
  {
	auto it = find(v.begin(), v.end(), (num - v[i]));
	if (it != v.end())
	{
	  ++count;
	  if (isfirst){
		cout << v[i] << "," << *it ;
		v.erase(it);
		isfirst = false;
	  }
	  else
	  {
		cout << ";"<<v[i] << "," << *it ;
		v.erase(it);
	  }
	}
  }
  if (count == 0)
	cout << "NULL" << endl;
  else
	cout << endl;
}

int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  vector<string> vs;
  vector<int> v;
  stringstream ss;
  while (getline(ifs, token))
  {
	ss<<token;
	while (getline(ss, token, ';'))
	{
	  vs.push_back(token);
	}
	if (vs.size() > 1){
	  int num = stoi(vs[1]);
	  ss.clear();
	  ss << vs[0];
	  while (getline(ss, token, ','))
		v.push_back(stoi(token));
	  printPair(v, num);
	  v.clear();
	  vs.clear();
	  ss.clear();
	}
  }
  system("pause");
}