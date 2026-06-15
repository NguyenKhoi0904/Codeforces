#include <bits/stdc++.h>

using namespace std;
int main(){
    set<int> s;
    int tmp;
    for (int i = 0; i < 4; i++){
        cin >> tmp;
        s.insert(tmp);
    }
    cout << 4 - s.size() << endl;
    return 0;
}
