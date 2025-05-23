// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include <bits/stdc++.h>
using namespace std;
int main(){
std::ios_base::sync_with_stdio(0);cin.tie(NULL);
string a,b;

cin >> a >> b;

cout << a.size() << " " << b.size() << "\n";

cout << a+b << "\n";

char temp = a[0];
a[0] = b[0];
b[0] = temp;

cout << a << " " << b;

	return 0;
}
