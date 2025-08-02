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
int linear_search(vector<int> a,int t) {
    for(int i = 0;i < a.size();i++) {
        if(a[i] == t) {
            return i+1;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> m;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            m[a[i]]++;
        }
        int number = 0;
        for(auto i:m) {
            if(i.second == 1) {
                number = i.first;break;
            }
        }
        cout << linear_search(a,number) << endl;
    }
    return 0;
}