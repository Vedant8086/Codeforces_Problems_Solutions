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
int count(string a, string b, int m, int n)
{
    if ((m == a.size() && n == b.size()) || n == 0) return 1;
 
    if (m == a.size()) return 0;
    
    if (a[m - 1] == b[n - 1]) return count(a, b, m - 1, n - 1) + count(a, b, m - 1, n);
    else return count(a, b, m - 1, n);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string x;
        cin >> x;
        string s = "-_-";
        if(n < 3) {
            cout << 0 <<endl;
        } else  {
            cout << count(x,s,n,3) << endl;
        }
    }
    return 0;
}