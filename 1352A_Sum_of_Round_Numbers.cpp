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
        vector<int> ans;
        int i = 0;
        while(n != 0) {
            int digit = n % 10;
            if(digit == 0) {

            }
            else ans.push_back(digit * pow(10,i));
            i++;
            n /= 10;
        }
        cout << ans.size() << endl;
        for(auto i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}