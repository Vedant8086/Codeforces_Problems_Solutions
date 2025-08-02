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
        vector<int> v(n,0);
        for(int i = 0;i < n;i++) {
            cin >> v[i];
        }
        int count = 0;
        for(int i = 0;i < n -1;i++) {
            for(int j = i + 1;j < n;j++) {
                if(v[i] == v[j]) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}