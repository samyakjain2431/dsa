#include <iostream>
#include <vector>
using namespace std;

void bruteForce(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		// cout<<"I am at i value : "<<i<<endl;
		if (arr[i] != 0)
			continue;
		for (int j = i + 1; j < n; j++)
		{
			// cout<<"I am at j value : "<<j<<endl;
			if (arr[j] != 0)
			{
				// cout<<"swapping at "<< i<< " "<<j<<endl;
				swap(arr[i], arr[j]);
				break;
			}
		}
	}
}

void better(int arr[], int n)
{
	vector<int> newArr;
	int count = n;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
			newArr.push_back(arr[i]), count++;
	}
	for (int i = 0; i < n - count; i++)
	{
		newArr.push_back(0);
	}
	for (int i = 0; i < n; i++)
	{
		cout << newArr[i] << " ";
	}
}

void optimal(int arr[], int n)
{
	int index = -1;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		if (arr[i] == 0)
		{
			index = i;
			i++;
			continue;
		}
		if (arr[i] != 0 && index != -1)
		{
			swap(arr[i], arr[index]);
			index = i;
			++i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void optimal2(int arr[], int n)
{
	int index = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] != 0)
		{
			swap(arr[i], arr[index++]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	// int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
	int arr[] = {4, 0, 0, 3, 0, 0, 1, 2, 0, 4, 3, 0, 5, 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	// bruteForce(arr, n);
	// better(arr, n);
	optimal2(arr, n);

	return EXIT_SUCCESS;
}