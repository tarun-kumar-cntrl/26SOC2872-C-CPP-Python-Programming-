#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;

public:
    void get()
    {
        cout <<"Enter ID, Name and Price:";
        cin>>id>>name>>price;
    }

    void show()
    {
        cout<<"ID:"<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price:"<<price<<endl;
    }
};

int main()
{
    Product p[3];   

    for(int i = 0; i < 3; i++)
        p[i].get();

    cout<<"Product Details:"<<endl;

    for(int i = 0; i < 3; i++)
    {
        p[i].show();
        cout << endl;
    }

    return 0;
}