// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
int n,q;
string s,f;

cin >> n >> q >> s;

while(q--){

cin >> f;

if(f == "pop_back"){
        s.pop_back();
}
else if(f == "front"){
    cout << s.front() << "\n";
}
else if(f == "back"){
    cout << s.back() << "\n";
}else if(f == "sort"){
    int l,r;
    cin >> l >> r;    
    sort(s.begin() + (min(l,r)-1),s.begin() + max(l,r));
}else if(f == "reverse"){
    int l,r;
    cin >> l >> r;
    reverse(s.begin() + (min(l,r)-1),s.begin() + max(l,r));
    
}else if(f == "print"){
    int p;
    cin >> p;
    cout << s[p-1] << "\n";
}else if(f == "substr"){
    int l,r;
    cin >> l >> r;
    int minn = min(l,r);
    int maxn = max(l,r);
    cout << s.substr(minn-1,maxn-(minn-1)) << "\n";
}else if(f == "push_back"){
    char x;
    cin >> x;
    s.push_back(x);
}

}
	return 0;
}
