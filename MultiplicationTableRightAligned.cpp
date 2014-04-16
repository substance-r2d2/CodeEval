#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  for (int i = 1; i <= 12; ++i)
  {
	for (int j = 1; j <= 12; ++j)
	{
	  string str = to_string(i*j);
	  if (j == 1){
		if (str.size() == 1)
		{
		  cout << " " << str;
		}
		else
		  cout << str;
	  }
	  else if (j>1)
	  {
		if (str.size() == 1)
		  cout << "   " << str;
		else
		if (str.size() == 2)
		  cout << "  " << str;
		else
		  cout << " " << str;
	  }
	}
	cout << endl;
  }
  system("pause");
  return 0;
}