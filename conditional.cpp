/*#include<iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"enter a&b";
  cin>>a>>b;

  if(a>b){
    cout<<"a is greater"<<a;
  }
  else{
    cout<<"b is greater"<<b;
  }


return 0;

}*/

/*#include<iostream>
using namespace std;

int main(){
 int hours;

 cout<<"enter hour";
 cin>>hours;
 if(hours>=9 && hours<=18){
  cout<<hours<<" is a working time";
 }
 else{
  cout<<hours<<" is a leisure time";
 }

 return 0;
}*/

/*#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int a,b,c,d;
  float r1,r2;

  cout<<"enter a,b,c";
  cin>>a>>b>>c;

  d=b*b-4*a*c;

  if(d==0){
    r1=-b/(2*a);
    cout<<"real and equal"<<r1;
  }

  else{
    if(d>0){
      r1=(-b+sqrt(d))/2*a;
      r2=(-b-sqrt(d))/2*a;
      cout<<"real and unequal"<<r1<<""<<r2;
    }
     
    else{
      cout<<"imaginary";
    }
  }
  return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
 int day;

 cout<<"enter day no:";
 cin>>day;

 switch(day){ 
   case 1: cout<<"sun";
   break;
  
  case 2: cout<<"mon";
  break;
  
  case 3: cout<<"tue";
  break;

  default: cout<<"invalid ";

 }


return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

  int year;
  cout<<"enter year";
  cin>>year;

  if(year%4==0){
    if(year%100==0){
      if(year%400==0){
        cout<<"leap year and century year also";
      }
      else{
        cout<<"not a leap year but it's a century year";
      }
    }
     else{
      cout<<"leap year";
     }
  }

  else{
    cout<<"not a leap year";
  }
 
  
  return 0;
  
  
  }*/

/*#include<iostream>
using namespace std;

int main(){

  int n,i=1;

  cout<<"enter n: ";
  cin>>n;
  
  do{
    cout<<i;
    i++;
  }
  while(i<=n);


return 0;


}*/

/*#include<iostream>
using namespace std;

int main(){
 
  int n,a;

  cout<<"enter no which u want the table: ";
  cin>>a;

  cout<<"till which no: ";
  cin>>n;

  for(int i=1; i<=n; i++){

    cout<<a<<" x "<<i<<" = "<<a*i<<endl;
  }
 

return 0;


}*/


/*#include<iostream>
using namespace std;

int main(){

  int sum=0,n;

  cout<<"enter n: ";
  cin>>n;

  for(int i=0;i<=n;i++){
    sum=sum+i;

  }

   cout<<"sum of n No. : "<<sum;

  return 0;


}*/

/*#include<iostream>
using namespace std;

int main(){

  int fact=1,n;

  cout<<"enter n: ";
  cin>>n;

  for(int i=n;i>=1;i--){
    fact=fact*i;
  }
cout<<fact;

return 0;

}*/


/*#include<iostream>
using namespace std;

int main(){
  int n,sum=0;

  cout<<"enter n: ";
  cin>>n;

  for(int i=1;i<=n;i++){
    if(n%i==0){
      cout<<i<<endl;
     sum=sum+i;
    }
  }

  if(sum==2*n){

    cout<<n<<" is a perfect number";
  }

  else{
    cout<<n<<" is not a perfect number";
  }

  return 0;
}*/



/*#include<iostream>
using namespace std;

int main(){
  int n,count=0;

  cout<<"enter n: ";
  cin>>n;

  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }

  }

  if(count==2){
    cout<<n<<" is prime no.";
  }
  else{
    cout<<n<<" is not a prime no.";

  }

  return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
 
 int r,n;

 cout<<"enter n";
 cin>>n;

 while(n!=0){
  r=n%10;
  n=n/10;

  cout<<r<<" ";
 }

return 0;

}*/

/*#include<iostream>

using namespace std;

int main(){
  int n,m,r,sum=0;

  cout<<"enter n";
  cin>>n;

  m=n;

  while(n>0){
    r=n%10;
    n=n/10;
    sum=sum+r*r*r;
  }
  if(sum==m){
    cout<<"armstrong no.";
  }
  else{
    cout<<"not armstrong no.";
  }
  return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
  int n,r,s,rev=0;
                            //write digit in word
  cout<<"enter n";
  cin>>n;

  while(n>0){
    r=n%10;
    n=n/10;
    rev=rev*10+r;
  }
  while(rev>0){
    s=rev%10;
    rev=rev/10;

     switch(s)
    {
   case 1: cout<<"one";
   break;

   case 2: cout<<"two";
   break;

   case 3: cout<<"three";
   break;

   case 4: cout<<"four";
   break;

   case 5: cout<<"five";
   break;

   case 6: cout<<"six";
   break;

   case 7: cout<<"seven";
   break;

   case 8: cout<<"eight";
   break;

   case 9: cout<<"nine";
   break;

   case 0: cout<<"zero";
   break;
    }
  }
 
  return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
 int m,n;

 cout<<"enter m and n: ";
 cin>>m>>n;

 while(m!=n){
  if(m>n){
    m=m-n;
  }
  else if(n>m){
    n=n-m;
  }
 }

cout<<"The GCD of two number is: "<<m;

return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

int n,m,r,rev=0;

cout<<"enter n";
cin>>n;

m=n;

while(n!=0){
  r=n%10;
  n=n/10;
  rev=rev*10+r;
}

if(m==rev){
  cout<<"palindrome";
}
else{
  cout<<"not palindrome";
}

return 0;

}*/

/*#include<iostream>
using namespace std;

int main(){
  int a,b;
  cout<<"enter a and b";
  cin>>a>>b;

  for(int i=a;i<=b;i++){
    if(i<=9){
       switch(i){
        case 1: cout<<"one"<<endl;
        break;
         case 2: cout<<"two"<<endl;
        break;
         case 3: cout<<"three"<<endl;
        break;
         case 4: cout<<"four"<<endl;
        break;
         case 5: cout<<"five"<<endl;
        break;
         case 6: cout<<"six"<<endl;
        break;
         case 7: cout<<"seven"<<endl;
        break;
         case 8: cout<<"eight"<<endl;
        break;
         case 9: cout<<"nine"<<endl;
        break;
       }
    }
    else if(i>9){
      if(i%2==0){
        cout<<"even"<<endl;
      }
      else if(i%2!=0){
        cout<<"odd"<<endl;
      }
    }

  }
  return 0;
}*/

#include<iostream>
using namespace std;

int main(){
  int n=7,r;
  int sum=0;

   while(n!=1 && n>9){
         r=n%10;
        sum=sum+r*r;
        n=n/10;
       }

       if(n==1){
        cout<<"happy number";
       }
       else{
        cout<<"not";
       }

return 0;
}
