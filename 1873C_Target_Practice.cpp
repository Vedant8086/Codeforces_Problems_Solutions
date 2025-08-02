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
char xx[10][10] = { {1,1,1,1,1,1,1,1,1,1},
                    {1,2,2,2,2,2,2,2,2,1},
                    {1,2,3,3,3,3,3,3,2,1},
                    {1,2,3,4,4,4,4,3,2,1},
                    {1,2,3,4,5,5,4,3,2,1},
                    {1,2,3,4,5,5,4,3,2,1},
                    {1,2,3,4,4,4,4,3,2,1},
                    {1,2,3,3,3,3,3,3,2,1},
                    {1,2,2,2,2,2,2,2,2,1},
                    {1,1,1,1,1,1,1,1,1,1}};
int main() {
    int t;
    cin >> t;
    while(t--) {
        int total_points = 0;
        for(int i = 0;i < 10;i++) {
            for(int j = 0;j < 10;j++) {
                char ch;
                cin >> ch;
                if(ch == 'X') {
                    total_points += xx[i][j];
                }
            }
        }
        cout << total_points << endl; 
    }
    //Worked
    //Find New Logic Like a Formula.
    return 0;
}