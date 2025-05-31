// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X

#include <bits/stdc++.h>

using namespace std;

int main()
{ios_base::sync_with_stdio(0);cin.tie(0);
int q;
string s,minStr="",x,y,newStr;

cin >> s;

int len = s.size();

if(len == 1){
    minStr = s;
}else{
for(int i=1; i<len ; i++){
    x = s.substr(0,i);
    y = s.substr(i);

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    newStr = x + y;

    if(minStr == "" || minStr > newStr){
       minStr = newStr;
    }

}
}
cout << minStr;

return 0;
}
