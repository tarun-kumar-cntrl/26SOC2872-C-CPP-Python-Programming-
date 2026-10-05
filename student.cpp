#include<iostream>
#include<string>
using namespace std;
class student
{
    public :
        int roll_no, MCD , MFC , ENG , CT , DT;
        string name;
        void getdata()
        {
            cout<<"Enter name: ";
            cin>>name;      
            cout<<"Enter roll number: ";
            cin>>roll_no;
                 cout<<"Enter marks:";  
                 cout<<"\nMCD: ";
                 cin>>MCD;
                 cout<<"\nMFC: ";
                 cin>>MFC;
                 cout<<"\nENG: ";
                 cin>>ENG;
                 cout<<"\nCT: ";
                 cin>>CT;
                 cout<<"\nDT: ";
                 cin>>DT;
        }
        void display()
        {
            cout<<"Roll number: "<<roll_no<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks:\nMCD: "<<MCD<<"\nMFC: "<<MFC<<"\nENG: "<<ENG<<"\nCT: "<<CT<<"\nDT: "<<DT<<endl;   

        }

        void result()
        {
            int total = MCD + MFC + ENG + CT + DT;
            float percentage = (total / 5.0);
            cout<<"Total marks: "<<total<<endl;
            cout<<"Percentage: "<<percentage<<"%"<<endl;
            
        }
     };

        int main()
        {
            student s;
            s.getdata();
            s.display();
            s.result();
            return 0;
        }