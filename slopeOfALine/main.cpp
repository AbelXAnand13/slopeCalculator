// Abel Anand
#include <iostream>
#include <cmath>
using namespace std;
    
float slopeCalcuator(int x1, int y1, int x2, int y2) {
    float f1 = y2-y1;
    float f2 = x2-x1;
    
    float slope = f2/f1;
    return slope;
}

struct points {
    float x;
    float y;
};

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
    cout << slopeCalcuator(points1.x, points1.y, points2.x, points2.y);
}

