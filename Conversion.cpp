// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
string s;

cin >> s;

for(int i=0;i<s.size();i++){
    if(s[i]== ','){
        s[i] = ' ';
    }else if(s[i]>= 'a' && s[i] <= 'z'){
        s[i] = s[i] - 32;
    }else{
        s[i] = s[i] + 32;
    }

    cout << s[i];
}

	return 0;
}
