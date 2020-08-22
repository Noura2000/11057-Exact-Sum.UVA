#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int arr[10000],y=0,money,zi=0,zj=0;
        memset(arr,0,n);

        for(int i=0;i<n;i++) cin>>arr[i];
        cin>>money;

        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int fnd=money-arr[i];
            fnd=lower_bound(arr+i,arr+n,fnd)-arr;

            if(arr[i]+arr[fnd]==money)
            {
                 zi=arr[i];
                zj=arr[fnd];
            }

        }
        cout<<"Peter should buy books whose prices are "<<zi<<" and "<<zj<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
