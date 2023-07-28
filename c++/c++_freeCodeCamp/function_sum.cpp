#include <iostream>
using namespace std;

int addNumbers(int first_number, int second_number){
    int sum= first_number + second_number;
    return sum;

}

int main(){
    cout << addNumbers(23,56) << endl;
    cout << addNumbers(55,55) << endl;
}