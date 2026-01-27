/*#include<iostream>              //A = 65, B = 66,-------,Z = 90
using namespace std;              //a = 97, b = 98, ------,z = 122
int main(){                       //0 = 48, 1 = 49,-------,9 = 57

   int a,b,c;
   cout<<"enter 2 no.";
   cin>>a>>b;

   c=a+b;
   cout<<"Addition is"<<c;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
 string name;

 cout<<"May i know your name";
 getline(cin,name);

 cout<<"Hello ! "<<name;

 return 0;

}*/

/*#include <iostream>

using namespace std;
int main(){

    string name;
    int a;
    int b;

    cout<<"what is your name : ";
    getline(cin,name);

    cout<<"bhosdika "<<name;
    cin>>a;
    cout<<"chutiya "<<name;
    cin>>b;
    cout<<"bye bye"<<name;

   return 0;
}*/

/*#include<iostream>

using namespace std;

int main(){

    char a=7,b=2;
    char c;

    c=a%b;

    cout<<"answer"<<c;
   return 0;
}*/

/*#include<cmath>
#include<iostream>

using namespace std;

int main(){
  int a,b;
  
  cout<<"enter a";
  cin>>a;
  b=sqrt(a);
  cout<<"answer is : "<<b;

return 0;

}*/

/*#include<cmath>
#include<iostream>

using namespace std;

int main(){
 int a,b,c;

 cout<<"enter a";
 cin>>a;
 cout<<"enter b";
 cin>>b;
 c=(pow(a,3)-pow(b,2))/(2*a*b);

 cout<<"answer : "<<c;

 return 0;



}*/

/*#include<cmath>
#include<iostream>

using namespace std;

int main(){
 int a,b,c;

 cout<<"enter a&b";
 cin>>a>>b;
 
 c=(pow(a,3)-pow(b,2))/(2*a*b);

 cout<<"answer : "<<c;

 return 0;



}*/    

/*#include<cmath>
#include<iostream>

using namespace std;

int main(){

int a,b,c;
float r1,r2;                        //finding root of quadratic equation

cout<<"enter a,b,c(ax*x + bx + c)";
cin>>a>>b>>c;

r1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
r2= (-b- sqrt(pow(b,2)-4*a*c))/(2*a);

cout<<"root 1: "<<r1;
cout<<"root 2:"<<r2;


return 0;


}*/

/*#include<cmath>
#include<iostream>

using namespace std;

int main(){

  int x1, y1, x2, y2;
  float d;


  cout<<"enter no.";
  cin>>x1>>y1>>x2>>y2;

  d=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
  
  cout<<""<<d;


return 0;
}*/

/*#include<cmath>
#include<iostream>

using namespace std;

int main(){
int a=2,b=3,c=4;

int sum=0;

sum += a;
sum += b;
sum += c;

cout<<""<<sum;


return 0;

}*/


/*#include<iostream>

using namespace std;

int main(){

 int x=10,y=5,z;

 z=x++*++y;
cout<<""<<z<<endl;
cout<<""<<x<<endl;                                   
cout<<""<<y;

return 0;
}*/

/*#include<iostream>

using namespace std;

int main(){
  int i=5,j;
  j= 2*i++ + 2*i++;  //j=10+12=22  i=7

  cout<<j<<" "<<i;
return 0;
}*/


/*
#include<iostream>

using namespace std;

int main(){
  return 0;
}
*/

/*#include<iostream>

using namespace std;

int main(){
  char x=127;

  x++;
  

  cout<<(int)x;


  return 0;
}*/

/*#include<iostream>

using namespace std;

int main(){
 int x=5,y;

 y=x<<2;         //if y=x<<i  then x will be multiply by 2^i in left shift bitwise

cout<<y;

  return 0;
}*/

/*#include<iostream>

using namespace std;

int main(){
 int x=10,y;

 y=x>>1;         //if y=x>>i  then x will be divided by 2^i in right shift bitwise

cout<<y;

  return 0;
}*/


/*#include<iostream>

using namespace std;

enum day{mon,tue,wed,thu,fri,sat,sun};     //Here we use enum (defining group of constant in a curly brackets) and any constant converted into datatype which we can use in main function  

int main(){

  day d=tue , f=sun;
  int x;

  x=d+f;
  cout<<x;
 
  return 0;
}*/


/*#include<iostream>

using namespace std;
typedef int marks;
typedef rollno;          //for better readability to identidy the variable name or datatype easily (we use typedef)

int main(){
  marks m1=80,m2=90;
  rollno r1=1,r2=4;
  return 0;
}*/


/*#include<iostream>

using namespace std;

int main(){
  int x,y,z;
  int Netsalary;

  cout<<" Enter Basic Salary";
  cin>>x;
  cout<<" Enter Percentage of allowances";
  cin>>y;
  cout<<" Enter Percentage of deductions";
  cin>>z; 

  Netsalary= x+x*y/100-x*z/100;
  cout<<"Netsalary is "<<Netsalary;
  return 0;
}*/