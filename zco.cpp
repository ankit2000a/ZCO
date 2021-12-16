// Smart Phone


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(long long int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1,greater<int>());
    long long ans = 0;
    for(long long j=1;j<=n;j++){
        ans=max(arr[j]*j, ans);
    }
    cout<<ans<<endl;
    return 0;
}
