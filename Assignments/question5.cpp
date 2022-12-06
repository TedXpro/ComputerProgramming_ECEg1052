#include <iostream>

using namespace std;

int findMin(int arr[], int len)
{
    int min = arr[0];
    for (int i = 0; i < len; i++)
    {
        min = (arr[i] < min)? arr[i]: min;
    }
    return min;
}

int findMax(int arr[], int len)
{
    int max = arr[0];
    for (int i = 0; i < len; i++)
    {
        max = (arr[i] > max)? arr[i] : max;
    }
    return max;
}

int main()
{
    int arrSize = 0;
    cout << "Insert the size of the array: ";
    cin >> arrSize;

    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Isert the " << (i + 1) << "th element: ";
        cin >> arr[i];
    }
    cout << "The smallest number in the array is " << findMin(arr, arrSize) << endl;
    cout << "The largetst number in the array is " << findMax(arr, arrSize) << endl;

    return 0;
}