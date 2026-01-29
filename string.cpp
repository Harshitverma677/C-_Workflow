/*#include<iostream>
using namespace std;

int main(){
   string a="Hello";
  
  
    cout<<a;

    return 0;
}*/

/*#include<iostream>
#include<cstring>

using namespace std;

int main(){
  char s[50];
  char *p=s;

  cout<<"enter string";
  cin.getline(s,50);


  cout<<"length is"<<strlen(p);

  return 0;

}*/

/*#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[20]="Hello ";
    char b[20];

    cout<<"enter your name :";
    cin.getline(b,20);

    strcat(a,b);

    cout<<a;

    return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[20]="hello";
    char b[20];

    strcpy(b,a);
    cout<<b;
    return 0;
}*/

/*#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char s[20]="Harshit";
    char t[20]="rs";

    cout<<strstr(s,t);

    return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;

int main(){

char c[20]="programming";

cout<<strchr(c,'g');
return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;

int main(){

char c[20]="programming";

cout<<strrchr(c,'r');
return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[20]="Hello";
    char b[20]="Hello";
                                  //value =0(both string equal), -ve(if secong string is larger), +ve(if 1st string is larger) 
    cout<<strcmp(a,b);
    return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[20]="25621";
    char b[20]="14.2654";

    long int x=strtol(a,NULL,10);
    float y=strtof(b,NULL);                                   //NULL is used to end the string, 10 is a binary numbers(0 to 9)
                                                              // in this prgm strol,strtog used to convert string into long int and float 

    cout<<x<<endl<<y;

    return 0;
}*/

/*#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[50]="x=10;y=50;z=60";
 

    char *p=strtok(a,";");

    while(p!=NULL){

        cout<<p<<endl;
        p=strtok(NULL,";");          //here NULL is used to tell strtok to continue where it stop
        
       
    }



    return 0;
}*/


/*#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char a[50]="x=10;y=50;z=60";
    int a1,a2,a3;
  
    long int x;
    int count=0;
    

    char *p=strtok(a,"=;");

    while(p!=NULL){

    if(isdigit(p[0])){

        x=strtol(p,NULL,10);
        cout<<"number :"<<p<<endl;
        count++;
        switch(count){
            case 1: a1=x;
            break;
            case 2: a2=x;
            break;
            case 3: a3=x;
            break;
        }
    }     
    else{
        cout<<"variable :"<<p<<endl;
    }
     

       p=strtok(NULL,"=;");

    }

cout<<"a1 is :"<<a1<<endl;
cout<<"a2 is :"<<a2<<endl;
cout<<"a3 is :"<<a3<<endl;


    return 0;
}*/


/*(basi function of string class)[if string s;]

s.length()

s.size()

s.capacity()

s.resize(n)

s.max_size()

s.clear()

s.empty()

s.append("new string to add")

s.insert(index no,"string want to add at that index")
{
string s="hello";
s.insert(3,"apple",2);

output: helaplo  //here 2 means that 2 letters of apple will be taken
}

s.replace()

s.erase()

s.push_back('z')

s.pop_back()

s1.swap(s2)

s.copy(char des[])

s.find(str) or char

s.rfind(str) or char

s.find_first_of()
                  // in these both we can also add starting index like string s="hello world"; s.find_first_of('l',3); it will start checking from 3 index
s.find_last_of()

*/

/*#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;

    

    s.resize(50);
   
    cout<<s.capacity();

    return 0;
}*/

/*#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char temp;
    
    cin>>a>>b;
    
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
  
    cout<<a<<" "<<b;
    return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="programming";
                                  //here 7 is used bcz we want to replace 7 letters with "amer" from index 4
    s.replace(4,7,"amer");
    cout<<s;

    return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="AAA";
    string s2="BBB";

                                 
   s1.swap(s2);
    cout<<s1<<" "<<s2;

    return 0;

}*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="Hello world";
    

                                 
 cout<<s.find_last_of('l',5);

    return 0;

}
 