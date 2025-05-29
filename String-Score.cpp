// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R

#include <bits/stdc++.h>

using namespace std;

int main()
{ios_base::sync_with_stdio(0);cin.tie(0);
int n,score=0;
string s;

cin >> n >> s;

int i=0;
while(i < n){
if(s[i] == 'V'){
   score +=5;
}
else if(s[i] == 'W'){
   score +=2;
}
else if (i != n-1){
        if(s[i] == 'X'){
            i++;
            }
        else if(s[i] == 'Y' ){
            i++;
            n++;
            s += s[i];
            }
        else if(s[i+1] == 'Z'){
            if (s[i] == 'V'){
                score /= 5;
                i++;
            }else if(s[i+1] == 'W'){
                score /= 2;
                i++;
                }
            }
}

i++;
}


cout << score;

return 0;
}


