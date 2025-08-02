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
    int problems;
    cin >> problems;
    int ans = 0,count = 0;
    int solution[problems][3];
    for(int i = 0;i < problems;i++) {
        for(int j = 0;j < 3;j++) {
            cin >> solution[i][j];
        }
    }
    for(int i = 0;i < problems;i++) {
        for(int j = 0;j < 3;j++) {
            if(solution[i][j]==1) {
                count++;
            }
        }
        if(count >= 2) {
            ans++;
        }
        count = 0;
    }
    cout << ans << endl;
    return 0;
}