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
 rectangle *p;
 p=new rectangle;

 p->l=10;               
 p->b=20;
                                 // p=new rectangle;  with this line our object is created in heap dynamically which can access the class
 cout<<p->area();

 return 0;
}*/


/*#include<iostream>
using namespace std;


class rectangle{
    private:

    int length;
    int breadth;

    public:

    void setLength(int l){             //set like function are called as mutators
        if(l>=0)
            length=l;
        else{
        cout<<"dimension never be negative ";
         length=0;
        }
    }

    void setBreadth(int b){
        if(b>=0)
        breadth=b;
        else{
        cout<<"dimension never be negative ";
         breadth=0;
        }
    }
    int getLength(){
        return length;             // get like function are called as accessors together they are called as property function
    }
    int getbreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int peri(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r;

    r.setLength(-10);
    r.setBreadth(20);

    cout<<r.getLength()<<" "<<r.getbreadth();

    return 0;
}*/

/*(constructors)

1. Default constructor(by compiler)

2. non-parameterized constructors
3. parameterized constructors
4. copy constructors

*/

/*#include<iostream>
using namespace std;

class rectangle{
    private:

    int length;
    int breadth;

    public:

    rectangle(){
        length=0;                // non-parameterized constructors
        breadth=0;
    }

    rectangle(int l, int b){
        setLength(l);           // parameterized constructors
        setBreadth(b);
    }

    rectangle(int l=0, int b=0){
        setLength(l);           // parameterized constructors or non-parameterized constructors
        setBreadth(b);
    }
    rectangle(rectangle &rect){
        length=rect.length;          // copy constructors
        breadth=rect.breadth;
    }

    void setLength(int l){            
        if(l>=0)
            length=l;
        else{
        cout<<"dimension never be negative ";
         length=0;
        }
    }

    void setBreadth(int b){
        if(b>=0)
        breadth=b;
        else{
        cout<<"dimension never be negative ";
         breadth=0;
        }
    }
    int getLength(){
        return length;            
    }
    int getbreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    int peri(){
        return 2*(length+breadth);
    }
};

int main(){
    rectangle r(10,15);
    rectangle r2(r);
   
    cout<<r2.area()<<" "<<r2.peri();

    return 0;
}*/

/*#include<iostream>
using namespace std;

class rectangle{
    private:

    int length;
    int breadth;

    public:
    rectangle(int length,int breadth){
        this->length=length;                        //this-> is a this pointer help to recognize which variable assigning the value
        this->breadth=breadth;
    }

void setLength(int l){            
        if(l>=0)
            length=l;
        else{
        cout<<"dimension never be negative ";
         length=0;
        }
    }

    void setBreadth(int b){
        if(b>=0)
        breadth=b;
        else{
        cout<<"dimension never be negative ";
         breadth=0;
        }
    }


  inline int peri();   

};

int rectangle::peri(){
    return 2*(length+breadth);  //scope resolution method , this is used when function contain if else statement, to make this as a inline function write inline in the class to that function
}



int main(){

    rectangle r(10,20);

   

    cout<<r.peri();
    return 0;
}*/

/*#include<iostream>
using namespace std;

struct demo{
    int a;
    int b;

    void display(){
        cout<<a<<" "<<b;
    }
};

int main(){

    demo d;
    d.a=10;   // by using struct instead of class we can access data members 
    d.b=20;

    d.display();

    return 0;
}*/


/*#include<iostream>
using namespace std;

class student{
    private:
    int rn,a,b,c,sum,per;

    public:

    void setRollNo(int r){
        rn=r;
    }

    void setmarks(int a1,int b1,int c1){
        if(a1>0 && b1>0 && c1>0){
        a=a1;
        b=b1;
        c=c1;
        
        }
        else{
            cout<<"marks can never be negative";
        }
    }
    int getRollNo(){
        return rn;
    }
    int total(){
        sum=a+b+c;
        per=sum/3;
        return sum;
    }

    char grade(){
        if(per>=90 && per<=100)
        return 'A';
        else if(per>=80 && per<=89)
        return 'B';
        else if(per>=70 && per<=79)
        return 'C';
        else
        return 'D';
    }

};

int main(){
    student s;
    int a1,b1,c1;
    int rollno;
    cout<<"enter roll number: ";
    cin>>rollno;
    s.setRollNo(rollno);

    cout<<"enter marks of 3 subject : ";
    cin>>a1>>b1>>c1;

    s.setmarks(a1,b1,c1);
    cout<<"total is: "<<s.total()<<endl;

    cout<<"grade of "<<s.getRollNo()<<" is "<<s.grade();

    return 0;

}*/

/*#include<iostream>
using namespace std;


class complex{
    private:
    int real;
    int img;

    public:

    complex(int a=0,int b=0){
        real=a;
        img=b;
    }
  

    complex operator+(complex c){
        complex temp;
        temp.real=real+c.real;            // this step is known as operator overloading by using operator+/-*
        temp.img=img+c.img;

        return temp;
    }
    void display(){
        cout<<real<<" + i"<<img;
    }

};

int main(){
    complex c1(5,4);
    complex c2(2,3);

    complex c3;

    c3=c1+c2;
    c3.display();

    return 0;
}
*/


  /*complex add(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;

        return temp;
    }*/






#include<iostream>
using namespace std;


class complex{
    private:
    int real;
    int img;

    public:

    complex(int a=0,int b=0){
        real=a;
        img=b;
    }

    friend complex operator+(complex x,complex y);   // friend operator is also used in operator overloading in which we cannot perform friend operator function in class
        
    void display(){
        cout<<real<<" + i"<<img;
    }

};

complex operator+(complex x,complex y){
    complex t;
    t.real=x.real+y.real;
    t.img=x.img+y.img;

    return t;
}

int main(){
    complex c1(5,4);
    complex c2(2,3);

    complex c3;

    c3=c1+c2;
    c3.display();

    return 0;
}