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
        int maxi = INT_MIN,response = -1;
        for(int i = 1;i <= n;i++) {
            int a,b;
            cin >> a >> b;
            if(a <= 10) {
                if(b > maxi) {
                    maxi = b;
                    response = i;
                }
            }
        }
        cout << response << endl;
    }
    return 0;
}