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
//Need Some More Work On It.
int main() {
    int arrx[5][5];
    int count1 = 0;
    int count2 = 0;
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < 5;j++) {
            cin >> arrx[i][j];
            if(arrx[i][j] == 1) {
                count1 = abs(2-i);
                count2 = abs(2 - j);
                cout << count1 + count2 << endl;
            }
        }
    }
    
    return 0; 
}