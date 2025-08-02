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
        int n,k;
        cin >> n >> k;
        vector<int> v(n),s(n);
        int sum1 = 0,sum2 = 0;
        for(int i = 0;i < n;i++) {
            cin >> v[i];
            // sum1 += v[i];
        }
        for(int i = 0;i < n;i++) {
            cin >> s[i];
            // sum2 += s[i];
        }
        sort(v.begin(),v.end());
        sort(s.begin(),s.end());
        int swaps = 0,i = 0,j = n - 1;
        while(k && i < n && j >= 0) {
            if(s[j] > v[i]) {
                swap(s[j],v[i]);
                k--;
                i++;
                j--;
            }
            else j--;
        }
        for(auto i : v) {
            // cout << i << " ";
            sum1 += i;
        }
        cout << sum1 << endl;
    }
    return 0;
}