// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

#include <bits/stdc++.h>

using namespace std;

int main()
{ios_base::sync_with_stdio(0);cin.tie(0);

int n,l=0,r;
string s;

getline(cin,s);

int i=0;
while(i < s.size()){
    if(s[i] == ' '){
       r=i;
       reverse(s.begin()+l,s.begin()+r);
       l = i+1;
}
i++;
}

r=i;
reverse(s.begin()+l,s.begin()+r);

cout << s;

return 0;
}
