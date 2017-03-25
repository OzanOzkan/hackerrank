#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int spacecount = 0;
    
    cin >> n;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(spacecount != n-i)
            {
                cout << " ";
                spacecount++;
            }
            else
                cout << "#";
        }
        
        spacecount = 0;
        cout << "\n";
    }
    
    
    return 0;
}