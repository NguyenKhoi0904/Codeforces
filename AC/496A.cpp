//#include <bits/stdc++.h>
//
//using namespace std;
//int main(){
//    int n; cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    if(n == 3){
//        cout << a[n-1] - a[0] << endl;
//        return 0;
//    }
//    int minv = INT_MAX;
//    if(n == 4){
//        minv = min(minv,min(a[2]-a[0], a[3] - a[2]));
//        cout << minv << endl;
//    }
//    minv = min(minv, a[3]-a[2]);
//    for(int i = 3; i < n-1; i++){
//        minv =  min(minv, a[i+1]-a[i-1]);
//    }
//    cout << minv << endl;
//    return 0;
//}
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    int min_difficulty = INT_MAX;
    for (int i = 1; i < n - 1; i++) {
        int max_diff = 0;
        for (int j = 0; j < n - 1; j++) {
            if (j == i - 1) {
                max_diff = max(max_diff, heights[j + 2] - heights[j]);
                j++;
            } else {
                max_diff = max(max_diff, heights[j + 1] - heights[j]);
            }
        }
        min_difficulty = min(min_difficulty, max_diff);
    }

    cout << min_difficulty << endl;
    return 0;
}
