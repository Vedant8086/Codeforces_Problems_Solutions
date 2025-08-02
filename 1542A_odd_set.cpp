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
        int even = 0,odd = 0; 
        cin >> n;
        int arr[2*n];
        for(int i =0;i<2*n;i++) {
            cin >> arr[i];
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }

        if(even == odd) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}