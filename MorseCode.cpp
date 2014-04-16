#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

unordered_map<string, string> morseCode;

void createMorseCode()
{
  morseCode.insert(pair<string, string>(".-", "A"));
  morseCode.insert(pair<string, string>("-...", "B"));
  morseCode.insert(pair<string, string>("-.-.", "C"));
  morseCode.insert(pair<string, string>("-..", "D"));
  morseCode.insert(pair<string, string>(".", "E"));
  morseCode.insert(pair<string, string>("..-.", "F"));
  morseCode.insert(pair<string, string>("--.", "G"));
  morseCode.insert(pair<string, string>("....", "H"));
  morseCode.insert(pair<string, string>("..", "I"));
  morseCode.insert(pair<string, string>(".---", "J"));
  morseCode.insert(pair<string, string>("-.-", "K"));
  morseCode.insert(pair<string, string>(".-..", "L"));
  morseCode.insert(pair<string, string>("--", "M"));
  morseCode.insert(pair<string, string>("-.", "N"));
  morseCode.insert(pair<string, string>("---", "O"));
  morseCode.insert(pair<string, string>(".--.", "P"));
  morseCode.insert(pair<string, string>("--.-", "Q"));
  morseCode.insert(pair<string, string>(".-.", "R"));
  morseCode.insert(pair<string, string>("...", "S"));
  morseCode.insert(pair<string, string>("-", "T"));
  morseCode.insert(pair<string, string>("..-", "U"));
  morseCode.insert(pair<string, string>("...-", "V"));
  morseCode.insert(pair<string, string>(".--", "W"));
  morseCode.insert(pair<string, string>("-..-", "X"));
  morseCode.insert(pair<string, string>("-.--", "Y"));
  morseCode.insert(pair<string, string>("--..", "Z"));
  morseCode.insert(pair<string, string>(".----", "1"));
  morseCode.insert(pair<string, string>("..---", "2"));
  morseCode.insert(pair<string, string>("...--", "3"));
  morseCode.insert(pair<string, string>("....-", "4"));
  morseCode.insert(pair<string, string>(".....", "5"));
  morseCode.insert(pair<string, string>("-....", "6"));
  morseCode.insert(pair<string, string>("--...", "7"));
  morseCode.insert(pair<string, string>("---..", "8"));
  morseCode.insert(pair<string, string>("----.", "9"));
  morseCode.insert(pair<string, string>("-----", "0"));
  morseCode.insert(pair<string, string>("", " "));
}

int main(int argc, const char * argv[])
{
  createMorseCode();
  ifstream ifs(argv[1]);
  string token;
  while (getline(ifs, token)) 
  {
	stringstream ss(token);
	while (getline(ss, token, ' '))
	{
	  cout << (morseCode.find(token))->second;
	}
	cout << endl;
  }
  system("pause");
  return 0;

}