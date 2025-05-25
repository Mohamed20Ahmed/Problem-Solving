// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
int n;
string s,t;

cin >> n;

while(n--){

cin >> s >> t;

int sLen = s.size();
int tLen = t.size();

int i = 0;
while(i < max(sLen,tLen)){
    if(i < sLen){
        cout << s[i];
    }

    if(i < tLen){
        cout << t[i];
    }
    i++;
}
    cout << "\n";

}
	return 0;
}
