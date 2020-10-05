#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={0,0,0,1,1,1,1,2,2,2,1,0,0,0,1};
     int n=sizeof(a)/sizeof(a[0]);
      int j,i,t;
    for(i=0;i<n;i++)

    for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
         for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
