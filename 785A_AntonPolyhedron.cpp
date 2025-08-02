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
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0;i < n;i++) {
        string x;
        cin >> x;
        if(x == "Tetrahedron") {
            count += 4;
        } else if(x == "Cube") {
            count += 6;
        } else if(x == "Octahedron") {
            count += 8;
        } else if(x == "Dodecahedron") {
            count += 12;
        } else if(x == "Icosahedron") {
            count += 20;
        }
    } 
    cout << count << endl;
    return 0;
}