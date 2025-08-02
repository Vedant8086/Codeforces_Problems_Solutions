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
    vector<int> a(t);
    int maxi,mini,count = 0;
    for(int i = 0;i < t;i++) {
        cin >> a[i];
        if(i == 0) {
            maxi = a[i];
            mini = a[i];
        } else {
            if(a[i] > maxi) {
                maxi = a[i];
                count++;
            } else if(a[i] < mini) {
                mini = a[i];
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}