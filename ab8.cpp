#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,3,4,53,7,8,9,4,7,90};
    int n=sizeof(a)/sizeof(a[0]);
      int mini=*min_element(a,a+n);
    int maxi=*max_element(a,a+n);
    int range = maxi-mini;
   cout<<range;
    return 0;
}
