#include<iostream>
using namespace std;

int max_Sum(int arr[], int n)
{
    int initial_max = 0;

    int max_ending = 0;
 
    for (int i = 0; i < n; i++)
    {

        max_ending = max_ending + arr[i];
 

        max_ending = max(max_ending, 0);
 
        initial_max = max(initial_max, max_ending);
    }
 
    return initial_max;
}

int main()
{
    int arr[] = { 1,2,3,-2,5 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<max_Sum(arr,n);
    return 0;
}