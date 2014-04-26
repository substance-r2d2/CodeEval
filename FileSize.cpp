#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <ios>


using namespace std;

int main(int argc, const char * argv[])
{
  ifstream ifs(argv[1]);
  ifs.seekg(0, ios::end);
  int size = ifs.tellg();
  ifs.seekg(0);
  cout << size;
  /*string token;
  while (getline(ifs, token))
  {
	vector<string> vs;
	stringstream ss(token);
	while (getline(ss, token, ' '))
	  vs.push_back(token);
	cout << vs[vs.size() - 2] << endl;
  }*/
  system("pause");
}