// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T

#include <bits/stdc++.h>

using namespace std;

int main()
{int n=5;
string s;
string par[n] = {"username","pwd","profile","role","key"};
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

cin >> s;

int i=0;
while(i < n-1){
    int pos = s.find(par[i]);
    pos += par[i].size()+1;
    cout << par[i] << ": ";
    while(s[pos] != '&'){
        cout << s[pos];
        pos++;
    }
    cout << endl;
    i++;
}
    int pos = s.find(par[4]);
    pos += par[4].size()+1;
    cout << par[i] << ": ";
    while(s[pos] != '\0'){
        cout << s[pos];
        pos++;
    }
return 0;
}
