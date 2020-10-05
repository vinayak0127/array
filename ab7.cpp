#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={2,3,4,53,7,8,9,4,7,90};
     int n=sizeof(a)/sizeof(a[0]);
     int m,c=0;cin>>m;
     for(int i=0;i<n;i++)
     {
         if(a[i]==m)
         {
             c++;
         }
     }
     cout<<c;
    return 0;
}
