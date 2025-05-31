#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors;
    for (int i = 1; i <= n; i++) {
    if (n % i == 0)
    divisors.push_back(i);
 }

    if (divisors.size() != 8) {
    cout << n << " is NOT a Sphenic number (does not have exactly 8 divisors)." << endl;
        return 0;
 }

 int p = divisors[1];
 int q = divisors[2];
 int r = divisors[3];

 if (isPrime(p) && isPrime(q) && isPrime(r) && p != q && q != r && p != r) {
     cout << n << " is a Sphenic number." << endl;
} else {
  cout << n << " is NOT a Sphenic number (first 3 divisors after 1 are not distinct primes)." << endl;
}

    return 0;
}