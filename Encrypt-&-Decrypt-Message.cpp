// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W

#include <bits/stdc++.h>

using namespace std;

int main()
{ios_base::sync_with_stdio(0);cin.tie(0);
int q;
string s,
key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/",
original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";


cin >> q >> s;

int len = s.size();

if(q == 1){
    for(int i=0; i<len ; i++){
        s[i] = key[original.find(s[i])];
    }
}else{
    for(int i=0; i<len ; i++){
        s[i] = original[key.find(s[i])];
    }
}

cout << s;

return 0;
}


