#include <cmath>
#include <iostream>

using namespace std;

class Triangle { 
    public:
    int side1;
    int side2;
    int side3;

};



double getArea (Triangle t) {
    double s= (t.side1+ t.side2 + t.side3)/ 2.0;
    double area= sqrt(s * (s-t.side1) * (s- t.side2) * (s- t.side3));
    return area;
}

bool hasLargerArea (Triangle t1, Triangle t2){
    return (getArea(t1)>getArea(t2)) ;

}

double sumOfAreas(Triangle triangles[],int size){
    double result=0;
    for (int i=0; i < size; i++){
        result += getArea(triangles[i]);
    }
}

int main() {

    double area= getArea(20,10,10);
    cout << "the area is: " << area << endl;
}

