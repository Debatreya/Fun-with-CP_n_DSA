#include <bits/stdc++.h>
using namespace std;

double distanceSquared(int x1, int y1, int x2, int y2) {
    return pow(x2 - x1, 2) + pow(y2 - y1, 2);
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    double a2 = distanceSquared(x1, y1, x2, y2);
    double b2 = distanceSquared(x2, y2, x3, y3);
    double c2 = distanceSquared(x3, y3, x1, y1);

    if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
