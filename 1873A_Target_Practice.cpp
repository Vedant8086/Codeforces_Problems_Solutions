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
        char v[10][10];
        int sum = 0;
        for(int i = 0;i < 10;i++) {
            for(int j = 0;j < 10;j++) {
                cin >> v[i][j];
            }
        } 

        for(int i = 0;i < 5;i++) {
            for(int j = 0;j < 10;j++) {
                if(v[j][i] == 'X') {
                    sum += (i + 1);
                }
            }
        }
        cout << sum << endl;

        for(int i = 9;i > 5;i--) {
            for(int j = 0;j < 10;j++) {
                if(v[j][i] == 'X') {
                    sum += ((9 - i) + 1);
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}