#include <bits/stdc++.h>

using namespace std;
int main(){
    int m,d; cin >> m >> d;
    int column = 0;
    int dom = 0;
    switch (m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dom = 31;
            break;
        case 4: case 6: case 9: case 11:
            dom = 30;
            break;
        case 2:
            dom = 28;
            break;
    }

    dom = dom - ((7 - d) + 1);
    column += 1;
    column += ceil(1.0 * dom / 7);
    cout << column << endl;
    return 0;
}

