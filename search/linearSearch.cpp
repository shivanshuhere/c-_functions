#include <iostream>
using namespace std;

int main()
{
    int arr []= {12, 24, 45, 15, 45};
    int ele = 15, flag = 0, i = 0;
    int size  = sizeof(arr)/ sizeof(arr[0]);
    for ( i = 0; i < size; i++) {
        if (ele == arr[i]) {
            flag = 1;
            break;
        }
    }
    if (flag) 
        cout <<"Element present at index [" << i+1 << "]" <<endl;
    else  
        cout <<"Element not present!" <<endl;
    return 0 ;
}
