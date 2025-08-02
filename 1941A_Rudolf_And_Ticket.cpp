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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> a(n,0),b(m,0);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        for(int j = 0;j < m;j++) {
            cin >> b[j];
        }

        int coins = 0;
        for(int i =0;i < n;i++) {
            if(a[i] > k) {
                continue;
            } else {
                for(int j = 0;j < m;j++) {
                    if(a[i] + b[j] <= k) {
                        coins++;
                    }       
                }
            }
        }
        cout << coins << endl;
    }
    return 0; 
}