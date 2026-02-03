/*#include<iostream>
using namespace std;

int add(int x,int y){
int z;
z=x+y;
return z;

}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=add(a,b);

    cout<<"sum is "<<c;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int greatest(int x,int y,int z){

    if(x>y){
        if(x>z){
            return x;
        }
        else{
            return z;
        }
    }
    else if(y>x){
        if(y>z){
            return y;
        }
        else{
            return z;                                           
        }
    }
}
int main(){
    int x=15,y=40,z=30;

    cout<<"greater number is "<<greatest(x,y,z);                    

    return 0;
}*/

/*#include<iostream> 
using namespace std;


int pow(int x,int y){
    int mul=1;
    for(int i=0;i<y;i++){
        mul=mul*x;
    }
    return mul;

}
int main(){
    int x=2,y=3;
    cout<<pow(x,y);
    return 0;
}*/

/*Function overloading means calling same name function of different
 argument list in c++ it is possible to have same name function of differnet argument list*/ 

//Template function means it can convert many functions of different datatype into one function  [template<class T>]

/* for finding greater number we can also use for 

ex-> a>b?a:b; it means that if a>b ? then print a : otherwise b;  (? -> ternary operator )

*/

/*#include<iostream>
using namespace std;

template<class T>
T maxim(T a,T b){
    return a>b?a:b;
}
int main(){
    cout<<maxim(10,5)<<endl;
    cout<<maxim(10.5f,5.4f)<<endl;
    
    return 0;
}*/

/*default argument== declaring same value to the the variable 
for ex -> int add(int x,int y,int z=0)
{we assign a value to the z which can be change by calling this function}*/

/*perimeter passing 

1. call by value
2. call by address
3. call by reference

*/
/*
//call by value method
#include<iostream>
using namespace std;

int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y;

    return 0;
}
*/

//call by address method

/*#include<iostream>
using namespace std;

int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=10,y=20;
    swap(&x,&y);
    cout<<x<<" "<<y;

    return 0;
}*/

//call by reference

/*#include<iostream>
using namespace std;

int swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int * fun(){
    int *p=new int[5];
    for(int i=0;i<5;i++){
        p[i]=5*i;
    }                                  //return by address
    return p;
}
int main(){
    int *q=fun();
    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int & fun(int &a){
cout<<a;
return a;

}
int main(){
    int x=10;                     //return by refernece
    fun(x)=25;
    cout<<x;
    
    return 0;
}*/

#include<iostream>
using namespace std;

int a=0;

int fun(){
int x=10;
a=a+x;

}
int main(){
   fun();
   cout<<a;
    
    return 0;
}