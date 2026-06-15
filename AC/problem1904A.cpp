#include <bits/stdc++.h>

using namespace std;
struct Point {
    int x, y;
    bool operator<(const Point& other) const {
        return tie(x, y) < tie(other.x, other.y);
    }
};

void Solve() {
    int a, b; cin >> a >> b;
    int xk, yk; cin >> xk >> yk;
    int xq, yq; cin >> xq >> yq;

    set<Point> king, queen;
    king.insert({xk - a,yk - b});
    king.insert({xk - a,yk + b});
    king.insert({xk + a,yk - b});
    king.insert({xk + a,yk + b});
    king.insert({xk - b,yk - a});
    king.insert({xk - b,yk + a});
    king.insert({xk + b,yk - a});
    king.insert({xk + b,yk + a});

    queen.insert({xq - a,yq - b});
    queen.insert({xq - a,yq + b});
    queen.insert({xq + a,yq - b});
    queen.insert({xq + a,yq + b});
    queen.insert({xq - b,yq - a});
    queen.insert({xq - b,yq + a});
    queen.insert({xq + b,yq - a});
    queen.insert({xq + b,yq + a});

    int c = 0;
    for (auto &e : king) {
        if(queen.count(e)) c++;
    }
    cout << c << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

