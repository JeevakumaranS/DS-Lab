# Write a program to create class PAPER with its properties:  width & height. Find the Perimeter and Area for the objects of PAPER class using passing object as argument(s) and default arguments. (Note: Use default arguments in constructors)
#include<iostream>
using namespace std;
class PAPER {
public:
int w, h, perimeter, area;
PAPER(int width = 10, int height = 10) {
w = width;
h = height;
}
void disp(PAPER p1) {
perimeter = (p1.w + p1.h) * 2;
area = p1.w * p1.h;
cout << "\tThe perimeter of the paper is " << perimeter << " cm" << endl;
cout << "\tThe area of the rectangle is " << area << " cm" << endl;
}
};
int main() {
cout << "\nDefault argument: \n";
PAPER p1;
p1.disp(p1);
cout << "\n\nPassing arguments:\n";
PAPER p2(5, 5);
p2.disp(p2);
return 0;
}
