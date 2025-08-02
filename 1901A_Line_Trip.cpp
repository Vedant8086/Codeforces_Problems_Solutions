#include<iostream>
#include<iomanip>
#include<thread>
#include<typeinfo>
#include<cstring>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<exception>
#include<stdexcept>
#include<fstream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin >> n >> x;
        vector<int> a(n,0);
        int mini = INT_MIN;
        int temp = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0;i <=n;i++) {
            if(i == 0) {
                temp = a[i] - 0;
                mini = max(temp,mini);
            } else if(i == n) {
                temp = x - a[i-1];
                temp *= 2;
                mini = max(temp, mini);    
            } else {
                temp = a[i] - a[i-1];
                mini = max(temp, mini);
            }
        }
        cout << mini << endl;

    }
    return 0;
}