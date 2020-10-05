#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={2,3,4,53,7,8,9,4,7,90};
     int n=sizeof(a)/sizeof(a[0]);
   int mini=0,maxi=0;

    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
         mini=*min_element(a,a+n);
        if(a[0]<a[i])
        {
            a[0]=a[i];
            maxi=a[0];
        }
        maxi=*max_element(a,a+n);

   }
    cout<<mini<<" "<<maxi;
    return 0;
}
