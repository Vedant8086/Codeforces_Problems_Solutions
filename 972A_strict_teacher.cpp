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
//So Much Wok needed.
int main() {
    int test;
    cin >> test;
    int n,m,q;
    int t1,t2;
    int da;
    for(int i = 1;i <=test;i++) {
        cin >> n >> m >> q;
        cin >> t1 >> t2;
        cin >> da;
        if(t1 < da && t2 > da) {
            cout << abs(t1-t2) / 2 << endl;
        }
        else if(da < t1 && da < t2) {
            cout << min(t1,t2) - 1 << endl;
        }
        else if(da > t1 && da > t2) {
            cout << n-max(t1,t2) << endl;
        }
        
    }
    return 0;
}