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

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    if(n < 1 || n > 100000
      || k < 1 || k > n
      || a.size() < 1 || a.size() > 1000000)
        return a;
    
    vector<int> tempVector(k);
    vector<int> returnVector;
    
    for(int i = 0; i < tempVector.size(); i++)
    {
        tempVector[i] = a[i];    
    }
    
    for(int j=tempVector.size(); j < a.size(); j++)
    {
        returnVector.push_back(a[j]);    
    }
    
    for(int x=0; x < tempVector.size(); x++)
    {
        returnVector.push_back(tempVector[x]);
    }
    
    return returnVector;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}