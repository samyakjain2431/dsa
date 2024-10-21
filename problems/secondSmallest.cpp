#include <iostream>
#include <climits>
using namespace std;

void print_arr(int arr[], int n)
{
    cout << "[";
    for (int i = 0; i < n; ++i)
    {
        if (i == (n - 1))
            cout << arr[i];
        else
            cout << arr[i] << ", ";
    }
    cout << "]" << endl;
}

int brute(int arr[], int n)
{
    int sm1 = INT_MAX, sm2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (sm1 > arr[i])
            sm1 = arr[i];
    }
    cout << sm1 << endl;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < sm2 && arr[i] > sm1)
            sm2 = arr[i];
    }
    return sm2;
}

int main()
{
    int n;
    cout << "Enter the size of arr: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter arr[" << i << "] value: ";
        cin >> arr[i];
    }
    cout << brute(arr, n) << endl;
    return EXIT_SUCCESS;
}
