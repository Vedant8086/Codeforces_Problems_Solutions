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
    int n;
    cin >> n;
    int pos_min = 0,pos_max = 0,mini = INT_MAX,maxi = INT_MIN;
    vector<int> v(n,0);
    for(int i = 0;i < n;i++) {
        cin >> v[i];
        if(v[i] >= maxi) {
            maxi = v[i];
        }
        if(v[i] <= mini) {
            mini = v[i];
            pos_min = i;
        }
    }
    for(int i = 0;i < n;i++) {
        if(v[i] == maxi) {
            pos_max = i;
            break;
        }
    }
    int swap_count = abs(pos_max - 0) + abs(n - pos_min);
    if(pos_max >= pos_min) {
        swap_count--;
    }
    cout << swap_count - 1 << endl;
    return 0;
}