#include <iostream>

using namespace std;

int main()
{
    // question 3;

    int min, max, num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    min = (num1 >= num2)? num2: num1;
    max = (num1 < num2)? num2: num1;

    int sum = 0;
    for (min++; min < max; min++)
    {
        sum += min;
    }

    cout << "The sum of the numbers between " << num1 << " and " << num2 << ": " << sum << endl;

    return 0;
}