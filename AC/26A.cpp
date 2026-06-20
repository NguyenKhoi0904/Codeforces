#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int countDistinctPrimeFactors(int num) {
    int count = 0;
    for (int i = 2; i <= num; ++i) {
        if (num % i == 0 && isPrime(i)) {
            ++count;
            while (num % i == 0) {
                num /= i;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int almostPrimeCount = 0;
    for (int i = 1; i <= n; ++i) {
        if (countDistinctPrimeFactors(i) == 2) {
            ++almostPrimeCount;
        }
    }
    cout << almostPrimeCount << endl;
    return 0;
}
