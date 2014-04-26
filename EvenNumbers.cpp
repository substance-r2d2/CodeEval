#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <ios>


using namespace std;

int main(int argc, const char * argv[])
{
  string token;
  ifstream ifs(argv[1]);
  while (getline(ifs, token))
  {
	if (stoi(token) % 2 == 0)
	  cout << "1" << endl;
	else
	  cout << "0" << endl;
  }
  system("pause");
}