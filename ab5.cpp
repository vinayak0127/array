
#include<iostream>

using namespace std;

int main()
{
    int a[]={2,3,4,53,7,8,9,4,7,90};
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
        cout<<a[i]<<" ";
    }

    return 0;
}
