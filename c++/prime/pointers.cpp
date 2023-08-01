#include <iostream> 
using namespace std;

int main()
{
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;

    ival = 5555;
    
    cout << "The value of ival\n"
    << "direct value: " << ival << "\n"
    << "indirect value: " << *pi << "\n"
    << "doubly indirect value: " << **ppi
    << endl;



}
