#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> managers(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> managers[i];
    }

    int max_depth = 0;
    for (int i = 1; i <= n; i++) {
        int depth = 0;
        for (int j = i; j != -1; j = managers[j]) {
            depth++;
        }
        max_depth = max(max_depth, depth);
    }

    cout << max_depth << endl;
    return 0;
}

