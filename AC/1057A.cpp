#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n-1);
    for (int i = 0; i < n-1; i++)
        cin >> a[i];
    vector<int> answer;
    int i;
    if (a[n-2] != 1){
        answer.push_back(a[n-2]);
        i =  a[n-2]-1;
        while(i >= 1){
            answer.push_back(a[i-1]);
            i = a[i-1]-1;
        }
    }else{
        answer.push_back(1);
    }
    sort(answer.begin(), answer.end());
    for(int e : answer)
        cout << e << " ";
    cout << n ;

    return 0;
}

//    if (a[n-2] != 1){
//        answer.push_back(a[n-2]);
//        i = n-2;
//        while(i != 1){
//            if (a[i] > a[i-1]){
//                answer.push_back(a[i-1]);
//                i = a[i-1]-1;
//            }else if (a[i] < a[i-1]){
//                i = a[i] - 1;
//            }else{
//                answer.push_back(a[i]);
//                i = a[i]-1;
//            }
//        }
//    }else{
//        answer.push_back(a[n-2]);
//        i = a[n-2] - 1;
//    }
