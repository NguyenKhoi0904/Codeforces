#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    int max_index = n-1;
    int min_index = 0;

    for (int i = n-2; i >= 0; i--) {
        if (heights[i] >= heights[max_index]) {
            max_index = i;
        }
    }
    for (int i = 1; i < n; i++){
        if (heights[i] <= heights[min_index]){
            min_index = i;
        }
    }
    int moves = max_index + (n - 1 - min_index);
    if (max_index > min_index) {
        moves -= 1;
    }

    cout << moves << endl;

    return 0;
}
