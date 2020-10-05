#include<iostream>

using namespace std;

int main()
{
    int a[]={2,3,4,53,7,8,9,4,7,90};
     int n=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<n/2;i++)
        swap(a[i],a[n-i-1]);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

