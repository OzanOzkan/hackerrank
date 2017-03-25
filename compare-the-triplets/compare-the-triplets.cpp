#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void calculatePoints(int a, int b, int& alicePoints, int &bobPoints)
{
    if(a > b)
        alicePoints++;
    else if(a < b)
        bobPoints++;
}

int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    int alicePoints = 0;
    int bobPoints = 0;
    
    calculatePoints(a0, b0, alicePoints, bobPoints);
    calculatePoints(a1, b1, alicePoints, bobPoints);
    calculatePoints(a2, b2, alicePoints, bobPoints);
    
    cout << alicePoints << " " << bobPoints <<endl;
    
    return 0;
}