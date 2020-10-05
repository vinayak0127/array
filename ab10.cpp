#include<bits/stdc++.h>

using namespace std;

int main()
{


    int a[]={-1,-2,-3,5,6,8,-4,9};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
         if(a[i]<0)
            cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            cout<<a[i]<<" "
;    }

    return 0;

}
