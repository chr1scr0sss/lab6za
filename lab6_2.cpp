#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x){
double X = x*(M_PI/180);
return X;
}

double rad2deg(double y){
    double Y = y*(180/M_PI);
    return Y;
}

double findXComponent(double e, double f, double g, double h){
    double XC = ((e*cos(g)))+((f*cos(h)));
    return XC;
}

double findYComponent(double e, double f, double g, double h){
    double YC = ((e*sin(g)))+((f*sin(h)));
    return YC;
}

double pythagoras(double a, double b){
    double c =  sqrt(a*a+b*b);
    return c;
}

double showResult(double c, double Y){
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
cout << "Length of the resultant vector = " << c << endl;
cout << "Direction of the resultant vector (deg) = " << Y << endl;
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% " << endl;
return 0;

}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}


