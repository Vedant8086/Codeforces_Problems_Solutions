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
        vector<int> v(n-1,0);
        int sum = 0;
        for(int i = 0;i < n -1;i++) {
            cin >> v[i];
            sum += v[i];
        }

        if(sum < 0) {
            cout << sum * -1 << endl;
        } else {
            cout << sum * -1 << endl;
        }

    }
    return 0;
}