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

#include<iostream>
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
}


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