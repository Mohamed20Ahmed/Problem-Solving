// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
int words=0;
string s;

getline(cin,s);

int len = s.size();

for(int i = 0 ; i < len ; i++){
    if(isalpha(s[i]) && (i+1 == len || !isalpha(s[i+1]))){
        words++;
    }
}

cout << words;

	return 0;
}
