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

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[20]="hello";
    char b[20];

    strcpy(b,a);
    cout<<b;
    return 0;
}