#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  while (getline(ifs, token))
  {
	vector<int> v1;
	vector<int> v2;
	string temp,temp1;
	stringstream ss(token);
	getline(ss, temp, ';');
	getline(ss, temp1, ';');
	stringstream ss1(temp);
	while (getline(ss1,temp,','))
	{
	  v1.push_back(stoi(temp));
	}
	stringstream ss2(temp1);
	while (getline(ss2, temp1, ','))
	{
	  v2.push_back(stoi(temp1));
	}
	vector<int> ans;
	set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(ans));
	if (ans.size() > 0)
	{
	  cout << ans[0];
	  for (int i = 1; i < ans.size(); ++i)
		cout << "," << ans[i];
	  cout << endl;
	}
	else
	  cout << endl;
  }
  system("pause");
}