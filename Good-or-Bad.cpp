// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
int t;
string s;

cin >> t;
while(t--){
cin >> s;

    if(s.find("101") != string::npos || s.find("010") != string::npos){
        cout << "Good\n";
    }else{
        cout << "Bad\n";
    }

}

	return 0;
}
