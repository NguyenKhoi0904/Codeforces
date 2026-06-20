#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int best = 0;
    int max = 0;
    for (int i = 1; i < n; i++){
        if (a[max] < a[i]){
            best++;
            max = i;
        }
    }
    int worst = 0;
    int min = 0;
    for (int i = 1; i < n; i++){
        if (a[min] > a[i]){
            worst++;
            min = i;
        }
    }
    cout << worst + best << endl;
    delete[] a;
    return 0;
}
