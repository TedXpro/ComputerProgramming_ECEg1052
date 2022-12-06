#include <iostream>

using namespace std;

int main()
{
    // question 1;
    int f_number, s_number, temp_num;

    cout << "Enter 1st number: ";
    cin >> f_number;
    cout << "Enter 2nd number: ";
    cin >> s_number;

    temp_num = f_number;
    f_number = s_number;
    s_number = temp_num;

    cout << "After swapping the 1st number is: " << f_number << endl;
    cout << "After swapping the 2nd number is: " << s_number << endl; 
}