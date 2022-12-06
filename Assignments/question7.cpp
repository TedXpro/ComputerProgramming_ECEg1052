#include <iostream>

using namespace std;

int main()
{
    // question 7'
    int number = 20;
    int* pnumber = &number;

    cout << number << endl;
    cout << *pnumber << endl;
    cout << pnumber << endl;
    cout << &number << endl;
    cout << &pnumber << endl;
    
}