#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int d1sum = 0;
    int d2sum = 0;
    
    for (int d_i = 0; d_i < n; d_i++)
    {
        d1sum += a[d_i][d_i];
        d2sum += a[d_i][(n-1)-d_i];
    }
       
    cout << fabs(d1sum-d2sum) << endl;
    
    
    return 0;
}