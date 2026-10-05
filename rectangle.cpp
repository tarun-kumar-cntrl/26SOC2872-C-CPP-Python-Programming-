
#include <iostream>
using namespace std;

class Rectangle 
{
    public:
    int length;
    int width;

    void getdata() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void calculateArea() {
        int area = length * width;
        cout << "Area: "<<area<<"sq units"<< endl;
    }

    void calculatePerimeter() {
        int perimeter = 2 * (length + width);
        cout << "Perimeter:"<<perimeter<<"units"<<endl;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};
    int main() {
        Rectangle R;
        R.getdata();
        R.display();
        R.calculateArea();
        R.calculatePerimeter();
        return 0;
    }