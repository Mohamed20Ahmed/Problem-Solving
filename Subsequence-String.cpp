// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
string s,str = "hello";

cin >> s;

int i = 0, index = 0;
while(i < s.size() && index < str.size()){
    if(s[i] == str[index]){
        index++;
    }

    i++;
}

cout << (index == str.size()?"YES":"NO");

	return 0;
}
