#include <iostream>
#include <string>

using namespace std;

/*This Program displays only the Prime numbers between two given numbers.*/

bool isPrime(int);

int main()
{
    char ch;
    do
    {   
        int a, b, min, max;

        cout << "\t\tPRIME TEST\n";
        cout << "This program prints out prime numbers between two given numbers.\n";

        cout << "Enter the first number: ";
        cin >> a;
        while (a < 2)
        {
            cout << "Error!! Please enter a number greater than 1\n";
            cout << "Enter the first number: ";
            cin >> a;
        }

        cout << "Enter the second number: ";
        cin >> b;
        while (b < 2)
        {
            cout << "Error!! Please enter a number greater than 1\n";
            cout << "Enter the second number: ";
            cin >> b;
        }

        max = (a < b)? b : a;
        min = (a > b)? b : a;
        
        cout << "The prime numbers between " << min << " and " << max << " are: " << endl;
        int count = 0;
        for (int i = min; i <= max; i++)
        {
            if (isPrime(i))
            {
                cout << i << endl;
                count++;
            }
        }
        cout << "There are " << count << " prime number(s) between " << min << " and " << max << endl;
        cout << "******************************************" << endl;
        cout << "press 'q' to quit or anyother key to continue: ";
        cin >> ch;
    }while (ch != 'q' && ch != 'Q');
    
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