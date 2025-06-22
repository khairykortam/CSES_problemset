#include<bits/stdc++.h>
using namespace std;

int main(){
long long n;cin>>n;
long long  x,sum=0,res= n* (n+1)/2;
for(int i=0;i<n-1;i++){
cin>>x;sum+=x;
}
long long ans = res - sum ;
cout<<ans<<'\n';
return 0;
}
