#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 3;
    int size = sizeof(arr) / sizeof(arr[0]); 
    int mid = size /2, flag = 0;
    for (int i = 0; i < mid; i++)
    {
        if (arr[i] < x)
        
            mid = size;
        
        if (arr[i] > x)
        
            mid = mid / 2;
        
        if (arr[i] == x)
        {
            cout << x << " is at "  <<"index [" << i+1<< "]" <<endl;
            flag = 1;
            break;
        }
       
    }
    if (flag != 1)
        cout << x << " not present!" << endl;

    
    return 0;
}
