// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
string s;
bool isPalindrome = true;

cin >> s;

int len = s.size();

for(int i=0,j=len-1;i<len/2;i++,j--){
    if(s[i]!=s[j]){
        isPalindrome = false;
    }
}

cout << (isPalindrome?"YES":"NO");

	return 0;
}
