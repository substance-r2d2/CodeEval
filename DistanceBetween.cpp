#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>

using namespace std;

class RemoveStuff{
public:
  bool operator()(char c)
  {
	if (c == ')' || c == '(' || c == ',')
	  return true;
	return false;
  }
};

void calculateDistance(vector<int>& v)
{
  cout << (sqrt(pow(v[2] - v[0], 2) + pow(v[3] - v[1], 2))) << endl;
}


int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  vector<int> vs;
  stringstream ss;
  while (getline(ifs, token))
  {
	token.erase(remove_if(token.begin(), token.end(), [](char c)->bool{if (c == ')' || c == '(' || c == ',')
	  return true;
	return false; }),
	  token.end());
	//cout << token << endl;
	ss << token;
	while (getline(ss, token,' '))
	{
	  vs.push_back(stoi(token));
	}
	if (vs.size() == 4){
	  calculateDistance(vs);
	}
	ss.clear();
	vs.clear();
  }
  system("pause");
}