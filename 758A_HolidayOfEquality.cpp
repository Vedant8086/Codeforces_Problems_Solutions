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
    int arr[test_case];
    int maxs = 0;
    for(int i = 0;i < test_case;i++) {
        int temp;
        cin >> temp;
        if(temp > maxs) maxs = temp;
        arr[i] = temp;
    }
    int count = 0;
    for(int i = 0;i < test_case;i++) {
        count = count + (maxs - arr[i]);
    }
    cout << count << endl;
    return 0;
}