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
int num_sum(int num) {
    int sum = 0;
    while(num != 0) {
        int temp = num % 10;
        sum += temp;
        num /= 10;
    }
    return sum;
}
int main() {
    int test_case;
    cin >> test_case;
    for(int i = 1;i <= test_case;i++) {
        int temp;
        cin >> temp;
        cout << num_sum(temp) << endl;
    }
    return 0;
}