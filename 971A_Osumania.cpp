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
    int test_case;
    cin >> test_case;
    int row,col = 4;
    for(int i = 1;i <= test_case;i++) {
        cin >> row;
        char arr[row][4];
        for(int j = 0;j<row;j++) {
            for(int x = 0;x < col;x++) {
                cin >> arr[j][x];
            }
        }

        for(int j = row-1;j>= 0;j--) {
            for(int x = 0;x <col;x++) {
                if(arr[j][x] == '#') {
                    cout << x+1 << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}