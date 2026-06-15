#include <bits/stdc++.h>

using namespace std;
bool is_prime(int n){
    int k = sqrt(n);
    for(int i = 2; i <= k; i++){
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int n; cin >> n;
    if (n % 2 == 0){
        int left = n/2 ,right = n/2;
        do{
            if(!is_prime(left) && !is_prime(right)){
                cout << left << " " << right << endl;
                break;
            }
            left--;
            right++;
        }while(left >= 4);
    }else{
        int left = (n-1)/2, right = n - left;
        do{
            if (!is_prime(left) && !is_prime(right)){
                cout << left << " " << right << endl;
                break;
            }
            left--;
            right++;

        }while(left >= 4);
    }
    return 0;
}

