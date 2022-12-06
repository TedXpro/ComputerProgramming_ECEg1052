#include <iostream>

using namespace std;

int greatestCommonDivisor(int x, int y)
{
    int gcf;
    for (int i = 1; i <= x; i++)
    {
        if ((x % i == 0) && (y % i == 0))
        {
            gcf = i;
        }
    }
    return gcf;
}

int leastCommonMultiple(int x, int y)
{
    int lcm;
    for (int i = y; i <= (x*y); i+= y)
    {
        if ((i % x) == 0)
        {
            lcm = i;
            break;
        }
    }
    return lcm;
}

int main()
{
    char ch;
    cout << "This program finds the GCF and LCM of two numbers." << endl;

    do 
    {
        int number1, number2, min, max;
        cout << "Enter the first number: ";
        cin >> number1;
        cout << "Enter the second number: ";
        cin >> number2;

        min = (number1 > number2)? number2: number1;
        max = (number1 > number2)? number1: number2;

        cout << "The GCF of the numbers " << number1 << " and " << number2 << " is ";
        cout << greatestCommonDivisor(min, max) << endl;

        cout << "The LCM of the numbers " << number1 << " and " << number2 << " is ";
        cout << leastCommonMultiple(min, max) << endl;

        cout << "Enter 'q' to quit or anyother character to continue: ";
        cin >> ch; 

    }while (ch != 'q' && ch != 'Q');
    
    return 0;
}