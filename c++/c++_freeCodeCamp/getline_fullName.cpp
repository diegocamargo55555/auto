#include <iostream>
#include <string>
using namespace std;

int main()
{
    string full_name;
    int age3;
    getline(cin,full_name);
    cin >> age3;

    cout << "hello " << full_name 
            << "you are " << age3 << " years old " << endl;


}
