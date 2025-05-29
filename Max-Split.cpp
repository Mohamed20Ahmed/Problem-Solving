// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S

#include <bits/stdc++.h>

using namespace std;

int main()
{ios_base::sync_with_stdio(0);cin.tie(0);

int n=0,l=0,r=0,st=0,en;
string s,t="";

cin >> s;

int len = s.size();

for(int i=0; i<len; i++){
    if(s[i]== 'L'){
        l++;
    }
    if(s[i] == 'R'){
        r++;
        }
    if(l == r){
        en = (i-st)+1;
        t += s.substr(st, en) + ' ';
        st = i+1;
        l = r = 0;
        n++;
    }
}


cout << n << "\n";

for(int i=0; i<t.size(); i++){

    if(t[i] == ' '){
       cout << "\n";
    }else{
       cout << t[i];
    }
}

return 0;
}