


/*

//Friend function in c++

#include <iostream>
using namespace std;

class Complex {
private:
    int x, y;
public:
    void setData(int a, int b) {
        x = a;
        y = b;
    }

    void showData() {
cout<<" x= "<<x <<"," <<" y= " <<y;
    }
    friend void fun(Complex);
};
void fun(Complex c)
{
    cout<<"sum is = "<<c.x+c.y<<",";
}
int main(){

    Complex m1;
    m1.setData(2,3);
    fun(m1);
    m1.showData();
}
*/


/*

//Overloading of unary operator ++ (pre and post)
#include <iostream>

using namespace std;

class integer {
private:
    int x;
public:
    void setData(int a) {
        x = a;
    }

    void ShowData() {
        cout << " x =" << x;
    }
    integer operator++()
    {
        integer l;
        l.x=++x;  //Pre-increment
        return l;
    }
    integer operator++(int)
    {
        integer l;
        l.x=x++;  //Post-increment
        return l;
    }
};

int main() {
    integer l1,l2;
    l1.setData(34),
    l1.ShowData();

    l2=++l1;
    l1.ShowData();
    l2.ShowData();

    l2=l1++;
    l1.ShowData();
    l2.ShowData();
}


*/

/*//example of unary operator
#include <iostream>

using namespace std;

class Complex {
private:
    int a, b;
public:
    void setData(int x, int y) {
        a = x;
        b = y;

    }

    void showData() {
        cout << "\n a= " << a <<" , " << " b= " << b;
    }

    Complex operator-(Complex c) {
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return (temp);
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(33409, 443),
            c2.setData(5542, 634);
    c3 = c1 - c2;
    c3.showData();
}*/
/*
//example of binary operator

#include <iostream>

using namespace std;

class Complex {
private:
    int a, b;
public:
    void setData(int x, int y) {
        a = x;
        b = y;

    }

    void showData() {
        cout << "\n a= " << a <<" , " << " b= " << b;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(33409, 443),
            c2.setData(5542, 634);
    c3 = c1 + c2;
    c3.showData();
}*/

/*
#include <iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    int c;

    Complex(int x, int y)
    {a=x; b=y;}
    Complex(int k)
    {a=k;}
    Complex(){}

    void showCode(){
        cout << "\n a: " << a;
        cout << "\n b: " << b;
    }

    int getSum(){
        return a+b;
    }
};
int main()
{
    Complex c1(3,4),c2;
    c1.showCode();
    c1.c = c1.getSum();
    cout << "\n c: " << c1.c;
}

*/

/*
#include <iostream>
#include <conio.h>

using namespace std;

// ! How to get data from users--


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


//! Structure ki body me function bhi bnaye ja skte hai
//! agar structure ke ander function bnaya jayega to use bhi variables ki tarah member function kahlayega
//! example bookid and title ye variables h ese hi input member function hai
//! member function apne hi structure ke kisi bhi member ko direct call kr sakta hai use dot(.) lagane ki jarurat nhi hai
//! Data Encapsulation में class के data members और member function को एक ही class में define किये जाते है


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



//! on this structure we use a data security concept for secure our data structure
//! members variables ki value funchtions ke davara hi change honi chahie us se data corrupte hone ke chances kam ho jate hain
//!

struct book
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
}

//!  The only difference between Class and Structure is that
//! The members of class are by default private
//! The members of structure are by default public

//TODO this is example of structure --

struct Complex
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

}


//TODO this is example of class --

class Complex {
    // private:  isme ham private na bhi likhe to a,b variable private hi rhe ge, or hamara code at it is kam kre ga jese ki structure me kam kar rha tha
    int a, b;
public:  // isme hame jis member ko public krna h uske upr public likhna jruri h kunki by default class ke members private hoten hain
    void set_data(int y, int x) {
        a = y;
        b = x;
    };

    void show_data() {
        cout << "\na " << a << "," << "b " << b;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};

int main() {
    Complex c1, c2, c3; //! class me bane data type ko variable na khke object kha jayega. c1 is an object
    c1.set_data(2, 4);
    c2.set_data(5, 6);
    c3=c1.add(c2);
    c3.show_data();
    getchar();
}*/
