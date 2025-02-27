
#include <bits/stdc++.h>

void reverseArray(int arr[], int start,
							int end)
{
	while (start < end)
	{
		std::swap(arr[start], arr[end]);
		start++;
		end--;
	}
}


void rightRotate(int arr[], int d, int n)
{
	
	d=d%n;
	reverseArray(arr, 0, n-1);
	reverseArray(arr, 0, d-1);
	reverseArray(arr, d, n-1);
}


void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5,
				6, 7, 8, 9, 10};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	
	rightRotate(arr, k, n);
	printArray(arr, n);

	return 0;
}

