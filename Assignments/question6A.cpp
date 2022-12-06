#include <iostream>

using namespace std;

int main()
{   
    // question 6a;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 3; j >= i; j --)
        {
            cout << "  ";
        }
        cout << "* * * * *";
        cout << endl;
    }
    
    return 0;
}