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
        int n;
        cin >> n;
        vector<int> a(n,0);
        for(int i = 0;i < n;i++) {
            cin >> a[i];
        }
        int first = 0;
        int second = 0;
        int cnt = 0;
        int scnt = 0;
        int third = 0;
        for(int i = 0;i < n;i++) {
            if(first == 0 || first == a[i]) {
                first = a[i];
                cnt++;
            } else if(second == 0 || second == a[i]) {
                second = a[i];
                scnt++;
            } else {
                third = 1;
                break;
            }
        }
        if(third == 1) {
            cout << "No" << endl;
        } else if(second == 0) {
            cout << "Yes" << endl;
        } else if(n%2 == 0 && abs(cnt-scnt) == 0) {
            cout << "Yes" << endl;
        } else if(n%2 == 1 && abs(cnt-scnt) == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}