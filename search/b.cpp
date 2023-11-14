
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int size = sizeof(arr) / sizeof(arr[0]); // divided by the size of datatype 
    int mid = size /2;
    for (int i = mid; i < size; i++)
    {
        if (arr[i] < x)
        {
            
        }
    }
    return 0;
}
