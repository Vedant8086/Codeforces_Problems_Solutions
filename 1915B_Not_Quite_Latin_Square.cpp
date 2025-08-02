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
        char arr[3][3];
        int xi = 0,yi = 0;
        int xorxx = 0;
        for(int i = 0;i < 3;i++) {
            for(int j = 0;j < 3;j++) {
                cin >> arr[i][j];
                xorxx = xorxx ^ int(arr[i][j]);
                if(arr[i][j] == '?') {
                    xi = i;
                    yi = j;
                }
            }
        }
        char x = (char)xorxx;
        if(x == '>') cout << 'A' << endl;
        else if(x == '=') cout << 'B' << endl;
        else cout << 'C' << endl;
        
    }
    return 0;
}