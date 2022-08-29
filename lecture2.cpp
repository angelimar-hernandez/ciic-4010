#include <cmath>
#include <iostream>

using namespace std;

bool overlap() {
    
}

double getArea (int s1, int s2, int s3) {
    double s= (s1+ s2 + s3)/ 2.0;
    double area= sqrt(s * (s-s1) * (s- s2) * (s- s3));
    return area;
}
    
int main() {

    double area= getArea(10,10,10);
    cout << "the area is: " << area << endl;
}
