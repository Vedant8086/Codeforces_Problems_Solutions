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
bool isSorted(vector<int> m) {
    for(int i = 0;i < m.size()-1;i++) {
        if(m[i] > m[i+1]) return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> m(n,0);
        for(int i = 0;i < n;i++) {
            cin >> m[i];
        }
        int count=0;
        if(isSorted(m)) {
            cout << 0 << endl;
        } else {
            for(int i = 0;i < m.size()/2;i++) {
                if(m[i] > m[n - 1 - i]) {
                    swap(m[i],m[n-1-i]);
                    count++;
                }
            }
        }
        cout << "Array is Sorted : " << isSorted(m) << "And the count : " << count << endl;

    } 
    return 0;
}