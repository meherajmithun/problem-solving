/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << fixed << setprecision(9) << distance << endl;
    return 0;
}

