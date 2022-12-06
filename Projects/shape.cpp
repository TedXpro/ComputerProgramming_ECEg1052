#include <iostream>
#include <iomanip>

using namespace std;

void rightAngleTriangle()
{
    int row;
    cout << "Enter the number of lines of the 'rightangle triangle' to be printed.(it should be greater than 1): ";
    cin >> row;

    if (row <= 1)
    {
        while (row <= 1)
        {
            cout << "Please enter a number greater than 1: ";
            cin >> row;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    } 
}

void leftAngleTriangle()
{
    int row;
    cout << "\nEnter the number of lines of the leftangle triangle to be printed.(it should be greater than 1): ";
    cin >> row;

    if (row <= 1)
    {
        while (row <= 1)
        {
            cout << "Please enter a number greater than 1: ";
            cin >> row;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int k = (row - 1); k > i; k--)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void diamond()
{
    int num, row1, row2;
    cout << "Enter the number of rows. (the number you enter should be greater than 2 and less than 161 and must be an odd number): ";
    cin >> num;

    while (num > 161 || num < 2)
    {
        cout << "Please enter a number between (2-161): ";
        cin >> num;
    }
    while (num % 2 ==0)
    {
        cout << "please enter an odd number greater than 2: ";
        cin >> num;     
    }
    
    row1 = (num/ 2)+ 1;
    row2 = (num/ 2); 

    for (int i = 0; i < row1; i++)
    {
        for (int k = (row1 - 2); k >= i; k--)   
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < row2; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = row2; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int choice; 
    cout << "\nThis program displays different shapes based on your preferences.\n";
    cout << "please enter your choice (1-3) from the following: \n";
    cout << "1. Right angle tirangle\n";
    cout << "2. Left angle triangle\n";
    cout << "3. Diamond\n";
    cout << "Enter your choice: ";
    cin >> choice;

    while (choice >3 || choice < 1)
    {
        cout << "Please enter from 1-3: ";
        cin >> choice;
    }        

    if (choice == 1)
    {
        rightAngleTriangle();   
    }

    if (choice == 2)
    {
        leftAngleTriangle();
    }

    if (choice == 3)
    {
        diamond();
    }

    return 0;
}