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
    int n,c = 0;
    cin >> n;
    int arr[n][2];
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < 2;j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            if(arr[i][0] == arr[j][1]) {
                c++;
            }
        }
    }
    
    cout << c << endl;
    return 0;
}