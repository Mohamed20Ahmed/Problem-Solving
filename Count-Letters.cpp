// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
string s;

cin >> s;

int len = s.size();

sort(s.begin(),s.end());

int sum = 0;
for(int i=0;i<len;i++){
    sum++;

    if(s[i]!=s[i+1]){
       cout << s[i] << " : " << sum << "\n";
       sum = 0;
    }
}

	return 0;
}
