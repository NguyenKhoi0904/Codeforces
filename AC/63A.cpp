#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    cin.ignore();
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        getline(cin, a[i]);
    vector<string> ans;
    for(string &e : a){
        size_t pos = e.find(' ');
        if (e.find("rat",pos) != string::npos){
            ans.push_back(e.substr(0,e.find(' ')));
        }
    }
    for(string &e : a){
        size_t pos = e.find(' ');
        if (e.find("child",pos) != string::npos || e.find("woman") != string::npos){
            ans.push_back(e.substr(0,e.find(' ')));
            e = "";
        }
    }
    for(string &e : a){
        size_t pos = e.find(' ');
        if (e.find("man",pos) != string::npos){
            ans.push_back(e.substr(0,e.find(' ')));
            e = "";
        }
    }
    for(string &e : a){
        size_t pos = e.find(' ');
        if (e.find("captain",pos) != string::npos){
            ans.push_back(e.substr(0,e.find(' ')));
        }
    }
    for(string e: ans)
        cout << e << endl;
    return 0;
}


