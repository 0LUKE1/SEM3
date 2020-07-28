#include <iostream>
#include <bits/stdc++.h>
#define nl cout << "\n";
#define pi 3.141593
using namespace std;
int main()
{
    int choise;
    double area;
    do {
        cout << "pick one \n0 : to exit\n1 : circle\n2 : rectangle\n3 : triangle\n";nl
        cin >> choise;
        switch (choise){
        case 1:
            double r;
            cout << "enter radiuse of circle";nl
            cin >> r;
            area = pi * r * r;nl
            cout << "area is :" << area ;nl
            break;
        case 2:
            cout << "enter lenght and width";nl
            double l, b;
            cin >> l >> b;
            area = l*b;
            cout << "area is :" << area ;nl
            break;
        case 3:
            cout << "enter sides of triangle";nl
            double q, w, e;
            cin >> q >> w >> e;
            double s = (q+w+e)/2;
            area = sqrt(s*(s-q)*(s-w)*(s-e));
            cout << "area is :" << area ;nl
            break;
        }
        nl
    }
    while(choise != 0);
    return 0;
}