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
    cin >>  test_case;
    int hour,minutes;
    for(int i = 1;i <= test_case;i++) {
        cin >> hour >> minutes;
        hour = (24 - hour) - 1;
        minutes = (60 - minutes);
        cout << ((hour * 60) + minutes) << endl;
    }
    return 0;
}