// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
int t;
string s;

cin >> t;

while(t--){
cin >> s;

int len = s.size();

if(len > 10){
   cout << s[0] << len-2 << s[len-1] << "\n";
}
else{
  cout << s << "\n";
}
}

	return 0;
}
