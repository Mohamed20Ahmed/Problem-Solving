// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
int n;
int freq[26]={0};
char c;

cin >> n;

for(int i=0;i<n;i++){
    cin >> c;
    freq[c-'a']++;
}

for(int i=0;i<26;i++){
   for(int j=0;j<freq[i];j++){
    cout << char('a' + i);
   }
}

	return 0;
}
