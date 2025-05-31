// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U

#include <bits/stdc++.h>

using namespace std;

int main()
{ios_base::sync_with_stdio(0);cin.tie(0);

int e,g,y,p,t;
string s;

e=g=y=p=t=0;

cin >> s;

for(int i=0; i<s.size(); i++){
    char c = tolower(s[i]);
    if(c == 'e'){
       e++;
    }else if(c == 'g'){
       g++;
    }else if(c == 'y'){
       y++;
    }else if(c == 'p'){
       p++;
    }else if(c == 't'){
       t++;
    }
}


cout << min(e,min(g,min(y,min(p,t))));


return 0;
}


