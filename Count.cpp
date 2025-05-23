// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
string s;
int sum = 0;

cin >> s;

for(char c:s){
    sum +=  c - '0';
}

cout << sum;

	return 0;
}
