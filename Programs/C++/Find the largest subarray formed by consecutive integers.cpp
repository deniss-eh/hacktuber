Find the largest subarray formed by consecutive integers

//code

#include<iostream>
using namespace std;

int min(int x, int y) { return (x < y)? x : y; }
int max(int x, int y) { return (x > y)? x : y; }

int findLength(int arr[], int n)
{
	int max_len = 1; 
	for (int i=0; i<n-1; i++)
	{
		int mn = arr[i], mx = arr[i];

		for (int j=i+1; j<n; j++)
		{

			mn = min(mn, arr[j]);
			mx = max(mx, arr[j]);


			if ((mx - mn) == j-i)
				max_len = max(max_len, mx-mn+1);
		}
	}
	return max_len; 
}

int main()
{
	int arr[] = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Length of the longest contiguous subarray is "
		<< findLength(arr, n);
	return 0;
}
