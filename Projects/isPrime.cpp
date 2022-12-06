#include <iostream>

using namespace std;

/*This program test whether a number is Prime or Composite. */

bool isPrime(int);

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (number == 1)
    {
        cout << number << " is neither prime nor composite." << endl;
        return 0;
    }

    string message = (isPrime(number))? "Prime." : "Composite.";
    cout << number << " is " + message;

    return 0;
}

bool isPrime(int number)
{
    if (number < 1)
    {
        return false;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}