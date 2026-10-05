#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    Book(string bTitle, string bAuthor, float bPrice) {
        title = bTitle;
        author = bAuthor;
        price = bPrice;
       
    }

    Book(const Book &obj) {
        title = obj.title;
        author = obj.author;
        price = obj.price;
        
    }

    ~Book() {
    
    }

    void display() {
        cout << "Title: " << title << " | Author: " << author << " | Price: $" << price << endl;
    }
};

int main() {
    

    Book b1("The Great Gatsby", "F. Scott Fitzgerald", 10.99f);
    b1.display();

   
    Book b2 = b1; 
    b2.display();
   
    
    return 0;
}

}