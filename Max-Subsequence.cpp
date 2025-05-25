// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
int n, mx=1;
string s;

cin >> n >> s;

int i = 1;
char last = s[0];
while(i < s.size()){
    if(s[i] != last){
        mx++;
        last = s[i];
    }

    i++;
}

cout << mx;

	return 0;
}
