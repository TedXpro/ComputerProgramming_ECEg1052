#include <iostream>

using namespace std;

int main()
{
    // question 2;
    long long number, answer;

    cout << "Input a number: ";
    cin >> number;

    if (number < 0)
    {
        number = number * (-1);
        cout << "-";
    }
    if (number == 0)
    {
        cout << 0;
    }
    while (number != 0)
    {   
        answer = number % 10;
        number = number / 10;
        cout << answer;
    }

}