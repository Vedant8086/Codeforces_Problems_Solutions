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
    vector<int> arr1(n,1),arr2(n,1);
    for(int i =0;i < n -1;i++) {
        for(int j = 1;j < n;j++) {
            arr2[j] = arr1[j] + arr2[j-1];
            // cout << arr2[j] << " ";
        }
        // cout << endl;
        arr1 = arr2;
    }
    cout << arr2[arr2.size() - 1] << endl;
    return 0;
}