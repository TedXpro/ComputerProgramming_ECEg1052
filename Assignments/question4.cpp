#include <iostream>

using namespace std;

int main()
{
    //Question 4; 
    char letter, answer;
    int number;

    cout << "Enter a character: ";
    cin >> letter;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        answer = letter + i;
        cout << answer << " ";
    }
    
    return 0;
}