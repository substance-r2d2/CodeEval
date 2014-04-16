#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;


float distance(float cx, float cy, float px, float py)
{
  return sqrtf((px - cx)*(px - cx) + (py - cy)*(py - cy));
}


int main(int argc, char *argv[])
{
  ifstream ifs(argv[1]);
  
  string line;
  string radiusInfo, pointInfo, centerInfo;
  while (getline(ifs, line))
  {
	stringstream ss(line);

	getline(ss, line, ';');
	centerInfo = line;
	float a = centerInfo.find('(');
	float b = centerInfo.find(')');
	centerInfo = string(centerInfo.begin() + (a+1), centerInfo.begin() + b);
	
	stringstream ss1(centerInfo);
	getline(ss1, centerInfo, ',');
	a = (stof(centerInfo));
	getline(ss1, centerInfo);
	b = stof(centerInfo);

	getline(ss, line, ';');
	radiusInfo = line;
	float c = radiusInfo.find(':');
	float d = radiusInfo.size();
	radiusInfo = string(radiusInfo.begin() + (c + 2), radiusInfo.begin() + d);
	c = stof(radiusInfo);

	getline(ss, line, ';');
	pointInfo = line;
	float e = pointInfo.find('(');
	float f = pointInfo.find(')');
	pointInfo = string(pointInfo.begin() + (e + 1), pointInfo.begin() + f);

	stringstream ss2(pointInfo);
	getline(ss2, pointInfo, ',');
	e = (stof(pointInfo));
	getline(ss2, pointInfo);
	f = stof(pointInfo);

	if (distance(a, b, e, f) > c)
	  cout << "false" << endl;
	else
	  cout << "true" << endl;
  }

  system("pause");
  return 0;
}