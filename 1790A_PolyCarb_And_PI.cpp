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
        string pi;
        cin >> pi;
        string pi_val = "314159265358979323846264338327";
        int count = 0;
        for(int i = 0;i < pi.size();i++) {
            if(pi[i] == pi_val[i]) {
                count++;
            } else {
                break;
            }
        }

        cout << count << endl;
    }
    return 0;
}