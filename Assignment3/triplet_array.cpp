#include<bits/stdc++.h>
using namespace std;
bool triplet(int a[], int n, int x)
{
    sort(a,a+n);
    int req;
    int j=0,k=n-1;
    for(int i=0;i<n;i++)
    {
        req = x-a[i];
        while(j<k)
        {
            if(j==i)
            j++;
            if(k==i)
            k--;
            if(a[j]+a[k] == req)
            {
                return 1;
            }
            else if(a[j]+a[k]>req)
            {
                k--;
            }
            else if(a[j]+a[k]<req)
            {
                j++;
            }
        }
        j=0;
        k=n-1;
    }
    return 0;
}
int main(){
    int a[] = {1,4,45,6,10,8};   
    int n = 6, x = 13;
    cout<<triplet(a,n,x);
    return 0;
}