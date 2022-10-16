#include<iostream>
#include <cmath>
#include <cstdlib>


using namespace std;
int main() {
  
// Define variables
    double a;
    double b;
    double c;
    double shortest;
    double mid;
    double longest;
    const double TOLERANCE = 0.0001;
    double p;
    double s;
    double area;
    double var;
    double min;
  
// User input variables
    cout << "Enter two real values (in any order) for the sides of a triangle (ex: x y). " << endl;
    cin >> a;
    cin >> b;
    //cin >> c; if you want user to input all three sides instead of using the random # generator
  
  //Randomly generate a third side for the triangle
    srand(time(0));
  
    if (a > b) {
        var = a - b;
        min = b + var;
    }
    else {
        var = b - a;
        min = a + var;
    }
    if (a + b < 1) {
        c = ((double) rand() / RAND_MAX);
    }
    else {
        c = (double) (rand() % (int) (a + b) + min) + 1;
    }
    c = (double) ((double) (var +1) / RAND_MAX) * rand() + min;
    cout << a << " " << b << " " << c << endl;
  
// Part 1
// If-else statements to find longest side, and type of triangle
    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        cout << "This is not a triangle." << endl;
    } else {
        if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
            cout << "This is not a triangle." << endl;
        } else {
            longest = c;
            if (longest < a) {
                c = longest;
                longest = a;
                a = c;
            } else if (longest < b) {
                c = longest;
                longest = b;
                b = c;
            }
            mid = b;
            if (mid < a) {
                b = mid;
                mid = a;
                a = b;
            }
            shortest = a;
            if (fabs(a * a + b * b - longest * longest) <= TOLERANCE) {
                cout << "This is a right triangle." << endl;
            } else if (a * a + b * b > longest * longest) {
                cout << "This is an acute triangle." << endl;
            } else {
                cout << "This is an obtuse triangle." << endl;
            }
        }
    }
// Part two: order the three inputs
    cout << "The sides in increasing order are " << shortest << "," << mid << "," << longest << "." << endl;
// Equations to find area
    p = (shortest + mid + longest);
    s = (p/2);
    area = sqrt(s * (s - shortest) * (s - mid) * (s - longest));
    cout << "Perimeter is " << p << endl;
    cout << "Area is " << area << endl;

  return 0;
}
