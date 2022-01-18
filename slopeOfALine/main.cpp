// Abel Anand
#include <iostream>
#include <cmath>
using namespace std;

struct points {
    float x;
    float y;
};

float slopeCalcuator(points one, points two) {
    float f1 = two.y - one.y;
    float f2 = two.x - one.x;
    
    float slope = f2/f1;
    return slope;
}

int main() {
    points points1;
    points points2;
    cout << "Enter the first x value\n";
    cin >> points1.x;
    cout << "Enter the first y value\n";
    cin >> points1.y;
    cout << "Enter the second x value\n";
    cin >> points2.x;
    cout << "Enter the second y value\n";
    cin >> points2.y;
    if (points1.x != points2.x) {
    cout << "Slope = " << slopeCalcuator(points1, points2);
    }
    else {
        cout << "Undefined slope or same points\n";
    }
}

