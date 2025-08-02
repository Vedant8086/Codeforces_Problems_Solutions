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
        int a,b;
        cin >> a >> b;
        vector<string> v(a);
        int count = 0,nums = 0;
        for(int i = 0;i < a;i++) {
            cin >> v[i];
            count += v[i].size();
            if(count <= b) {
                nums++;
            }
        }
        cout << nums << endl;
    }
    return 0;
}