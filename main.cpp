#include <iostream>
#include <conio.h>
using namespace std;

// ! How to get data from users--

/*
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();

int main()
{
    book b1;
    b1 = input();
    display(b1);
    getch();
}
void display(book b)
{
    cout << "\n"
         << "Book ID " << b.bookid << " "
         << "Book Title " << b.title << " "
         << "Book Price " << b.price;
}
book input()
{
    book b;
    cout << "Enter Bookid, title and price of book";
    cin >> b.bookid >> b.title >> b.price;
    return (b);
}
*/

//! Structure ki body me function bhi bnaye ja skte hai
//! agar structure ke ander function bnaya jayega to use bhi variables ki tarah member function kahlayega
//! example bookid and title ye variables h ese hi input member function hai
//! member function apne hi structure ke kisi bhi member ko direct call kr sakta hai use dot(.) lagane ki jarurat nhi hai
//! Data Encapsulation में class के data members और member function को एक ही class में define किये जाते है

/*
struct book
{
    int bookid;
    char title[20];
    float price;
    void input()
    {
        cout << "Enter Bookid, title and price of book";
        cin >> bookid >> title >> price;
    };
    void display()
    {
        cout << "\n"
             << "Book ID " << bookid << " "
             << "Book Title " << title << " "
             << "Book Price " << price;
    };
};

int main()
{
    book b1;
    b1.input();       // is line me b1 ek object hai ek entity hai or input() ek function hai
    b1.display();
    getch();
}
*/


//! on this structure we use a data security concept for secure our data structure
//! members variables ki value funchtions ke davara hi change honi chahie us se data corrupte hone ke chances kam ho jate hain
//!

/* struct book
{
private:
    int bookid;
    char title[20];
    float price;

public:
    void input()
    {
        cout << "Enter Bookid, title and price of book";
        cin >> bookid >> title >> price;
        if (bookid<0)
        bookid=-bookid;
         if (price<0)
        price=-price;
    };
    void display()
    {
        cout << "\n"
             << "Book ID " << bookid << " "
             << "Book Title " << title << " "
             << "Book Price " << price;

    };
};

int main()
{
    book b1;
    b1.input(); // is line me b1 ek object hai ek entity hai or input() ek function hai
    b1.display();
    getch();
} */

//!  The only difference between Class and Structure is that
//! The members of class are by default private
//! The members of structure are by default public

//TODO this is example of structure --

/* struct Complex
{
    private:  // private likhane ke bad hi structure ke member private honge nhi to ve public rhe ge
    int a,b;
    public:
    void set_data(int y, int x){
a=y; b=x;
    };
    void show_data(){
        cout<<"\na "<<a<<","<<"b "<<b;
    }


};

int main(){
    Complex c1;
    c1.set_data(2,4);
    c1.show_data();
    getch();

} */


//TODO this is example of class --

class Complex
{
    // private:  isme ham private na bhi likhe to a,b variable private hi rhe ge, or hamara code at it is kam kre ga jese ki structure me kam kar rha tha
    int a,b;
public:  // isme hame jis member ko public krna h uske upr public likhna jruri h kunki by default class ke members private hoten hain
    void set_data(int y, int x){
        a=y; b=x;
    };
    void show_data(){
        cout<<"\na "<<a<<","<<"b "<<b;
    }
};

int main(){
    Complex c1; //! class me bane data type ko variable na khke object kha jayega. c1 is an object
    c1.set_data(2,4);
    c1.show_data();
    getch();
}