#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name please..." << endl;
    cin >> name;

    cout << "Hello, my name is Friday. How may I help you " << name << endl;
    
    string age;
    cout << "Please enter your age so I may assist you better..." << endl;
    cin >> age;

    cout << "Thank you! I will direct you where to go..." << endl;
    system("pause");
    return 0;
}