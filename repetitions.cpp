#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    long long  maxi=1,current=1;

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {current++;maxi= max(maxi,current);} 
else {current=1;}
    }

    cout << maxi<<'\n';
    return 0;
}

