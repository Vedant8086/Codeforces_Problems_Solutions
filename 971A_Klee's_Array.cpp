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
    int x, k;
    for(int i = 1;i <= test_case;i++) {
        cin >> x >> k;
        int *arr =new int [x];
        for(int j = 0;j < x;j++) {
            cin >> arr[j];
        }
        double sum = 0;

        for(int r = 0;r < k;i++) {
            sum += arr[r];
        }

        for(int r1 = k;r1 < x;i++) {
            sum -= arr[r1];
        }
        cout << abs(sum) << endl;
    }
    return 0;
}