#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    map<string, int> students_marks;

    for (int i = 0; i < q; ++i) {
        int type;
        string name;
        cin >> type >> name;

        if (type == 1) {
            int marks;
            cin >> marks;
            students_marks[name] += marks;
        }
        else if (type == 2) {
            students_marks.erase(name);
        }
        else if (type == 3) {
            if (students_marks.find(name) != students_marks.end()) {
                cout << students_marks[name] << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}

