#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long even = n / 2;
    long long odd = (n + 1) / 2;
    cout << even * (even + 1) - odd * odd << endl;
    return 0;
}