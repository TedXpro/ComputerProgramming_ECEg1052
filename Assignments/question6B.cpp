#include <iostream>

using namespace std;

int main()
{
    //  question 6b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 3; j >= i; j--)
        {
            cout << "  ";
        }
        
        for (int k = 0; k <=i; k ++)
        {
            cout << "*   ";
        }
        cout << endl;
    }
    return 0;
}