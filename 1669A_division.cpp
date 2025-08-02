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
    int rating;
    for(int i = 1;i <= test_case;i++) {
        cin >> rating;
        // if (rating < 0) rating *= (-1);
        if(1900 <= rating) {
            cout << "Division 1" << endl;
        }
        else if(1600 <= rating && 1899 >= rating) {
            cout << "Division 2" << endl;
        }
        else if(1400 <= rating && 1599 >= rating) {
            cout << "Division 3" << endl;
        }
        else if(1399 >= rating) {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}