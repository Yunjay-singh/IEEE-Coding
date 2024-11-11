#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    int temp;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);        
    }
    sort(v.begin(), v.end());

    int nums;
    cin >>nums;
    while(nums--) {
        int num;
        cin >> num;
        int t = lower_bound(v.begin(), v.end(), num) - v.begin();
        if(t < v.size() && v[t] == num)
            cout << "Yes " << t + 1 << endl;
        else
            cout << "No " << t + 1 << endl;
    }
    
    return 0;
}
