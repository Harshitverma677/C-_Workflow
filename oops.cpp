/*  1) Abstraction-> we don't want to see the implementation of function
    2) encapsulation-> it means data is hidden and functions are visible which can overcome mishandling of data
    3) Inheritance-> Adding new functions to an existing class
    4) polymorphism-> The term can be same but perform different function

*/

/*#include<iostream>
using namespace std;

class rectangle{
    public:
    int l;
    int b;

    int area(){
        return l*b;
    }
    int peri(){
        return 2*(l+b);
    }
};

int main(){
 rectangle r1,r2;
 r1.l=10;
 r1.b=20;

 cout<<r1.peri();

 return 0;
}*/

/*#include<iostream>
using namespace std;

class rectangle{
    public:
    int l;
    int b;

    int area(){
        return l*b;
    }
    int peri(){
        return 2*(l+b);
    }
};

int main(){
 rectangle r;

 rectangle *p;

 p=&r;
                   // this pointer will access the values of that object which is created in stack
 p->l=10;
 p->b=20;

 cout<<p->area();

 return 0;
}*/


#include<iostream>
using namespace std;

class rectangle{
    public:
    int l;
    int b;

    int area(){
        return l*b;
    }
    int peri(){
        return 2*(l+b);
    }
};

int main(){
 rectangle *p;
 p=new rectangle;

 p->l=10;               
 p->b=20;
                                 // p=new rectangle;  with this line our object is created in heap dynamically which can access the class
 cout<<p->area();

 return 0;
}