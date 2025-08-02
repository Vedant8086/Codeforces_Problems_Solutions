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
//Need to be evaluated again
bool isSorted(vector<int> a) { 
    for(int i = 0;i < a.size()-1;i++) {
        if(a[i] > a[i+1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        vector<int> a(n,0),b(m,0);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        for(int i = 0;i < m;i++) {
            cin >> b[i];
        }
        for(int i = 0;i < n;i++) {
            if(a[i] > a[i+1]) {
                if(b[0] - a[i] <= a[i+1]) {
                    a[i] = b[0]-a[i];
                } else if(b[0] - a[i+1] >= a[i]){
                    a[i+1] = b[i] - a[i+1];
                }
            }
        }

        if(isSorted(a)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}