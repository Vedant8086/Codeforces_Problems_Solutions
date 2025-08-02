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
    int x;
    cin >> x;
    int height_cubes = 0;
    int super = 1;
    while(x - super >= 0) {
        x -= super;
        height_cubes++;
        super += height_cubes + 1;
    }
    cout << height_cubes << endl;
    return 0;
}