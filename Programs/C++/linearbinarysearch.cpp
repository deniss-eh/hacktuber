

#include <iostream>
using namespace std;

int search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 23, 12, 45, 9};
    int size = sizeof(arr) / sizeof(int);
    int element = 23;
    int searchindex = search(arr, size, element);
    cout << element << " " << searchindex;

    return 0;
}
