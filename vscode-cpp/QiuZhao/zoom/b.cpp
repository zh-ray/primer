#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    unsigned int number = stoi(s);

    unsigned int num1 = (number & 0xff000000) >> 24;
    unsigned int num2 = (number & 0x00ff0000) >> 16;
    unsigned int num3 = (number & 0x0000ff00) >> 8;
    unsigned int num4 = (number & 0x000000ff);

    string result = to_string(num1) + "." + to_string(num2) + "." + to_string(num3) + "." + to_string(num4);
    cout << result << endl;
}