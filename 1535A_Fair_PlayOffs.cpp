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
    while(t--){
        int s1,s2,s3,s4;
        cin >> s1 >> s2 >> s3 >> s4;
        vector<int> v = {s1,s2,s3,s4};
        sort(v.begin(),v.end());
        int final1 = 0,final2 = 0;
        if(s1 > s2) final1 = s1;
        else final1 = s2;

        if(s3 > s4) final2 = s3;
        else final2 = s4;

        if((v[3] == final1 && v[2] == final2)||(v[3] == final2 && v[2] == final1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}