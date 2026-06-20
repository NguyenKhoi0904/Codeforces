#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int p = 0, t = 0;
    int n = s.size();
    for(int i = 0; i < n-1; i++){
        if(s[i] != s[i+1]){
            if((i-p)+1 <= 5)
                t += 1;
            else t += ceil((1.0*(i-p)+1)/5);
            p = i+1;
        }
    }
    if (s[n-1] != s[n-2]){
        if((n-2 - p) + 1 <= 5)
            t += 1;
        else t += ceil((1.0*(n-2-p)+1)/5);
    }else{
        if((n-1-p)+1<=5) t+=1;
        else t += ceil((1.0*(n-1-p)+1)/5);
    }
    cout << t << endl;
    return 0;
}

