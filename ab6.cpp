#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={2,3,4,53,7,8,9,4,7,90};
    int n=sizeof(a)/sizeof(a[0]);
    int k,mi=0,mx=0;cin>>k;
    for(int i=0;i<k;i++)
    {
        mi=a[0];
        mx=a[0];
        if(mx<a[i])
        {
            swap(mx,a[i]);
        }
        if(mi>a[i])
            swap(mi,a[i]);
    }
    cout<<mx<<" "<<mi;
    return 0;
}
