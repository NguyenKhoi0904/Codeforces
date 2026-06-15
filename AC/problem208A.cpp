#include <bits/stdc++.h>

using namespace std;
string trim(string& s){
        auto start = s.begin();
        while(start != s.end() && isspace(*start)){
            start++;
        }

        auto end = s.end();
        do{
            end--;
        }while(end != s.begin() && isspace(*end));
        return string(start, end+1);
}

string reduceSpaces(string &s){
    string result = "";
    bool inSpaces = false;
    for(char e : s){
        if (isspace(e)){
            if (!inSpaces){
                result += ' ';
                inSpaces = true;
            }
        }else{
            result += e;
            inSpaces = false;
        }
    }
    return result;
}
int main(){
    string s; cin >> s;
    int n = s.size();
    string r="";
    int i;
    for(i = 0; i < n-2; ){
        if (s[i] == 'W' && s[i+1] == 'U'  && s[i+2] == 'B'){
            i+=3;
            r += ' ';
        }else{
            r += s[i];
            i++;
        }
    }
    if (i != n){
        for(int j = i; j < n; j++)
            r += s[j];
    }
    r = trim(r);
    r = reduceSpaces(r);
    cout << r << endl;
    return 0;
}

//WUBWUBWUBSR
