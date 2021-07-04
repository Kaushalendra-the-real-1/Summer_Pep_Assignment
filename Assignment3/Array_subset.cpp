#include<iostream>
using namespace std;

string checkSub(int a1[], int a2[], int n, int m)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a2[j] == a1[i])
            {
                count++;
            }
        }
    }
    if(count == m)
    {
        return "Yes";
    }
    else{
        return "No";
    }
}

int main()
{
    int a1[] = {11, 1, 13, 21, 3, 7};
    int a2[] = {11, 3, 7, 1};
    int n = 6;
    int m = 4;
    cout<<checkSub(a1,a2,n,m);
    return 0;
}