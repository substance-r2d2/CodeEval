#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;


void missingChars(string& str)
{
  int count = 0;
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  for (char c = 'a'; c <= 'z'; ++c)
  {
	int a=str.find(c);
	if (a == -1)
	{
	  cout << c;
	  ++count;
	}
  }
  if (count == 0)
	cout << "NULL";
  cout << endl;
}


int main(int argc, char *argv[])
{
  ifstream ifs(argv[1]);
  if (ifs.is_open())
  {
	string token;
	while (getline(ifs, token))
	{
	  missingChars(token);
	}
  }

  system("pause");
  return 0;
}