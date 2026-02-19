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


/*(basic bfunction of string class)[if string s;]

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

s.substr(start,number)

s.compare(str)

// some operators of class string

at()

[]

front()

back() 

//string Iterator

string::iterator it;

begin()

end()

string::reverse_iterator it;

rbegin()

rend()

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

/*#include<iostream>
#include<string>
using namespace std;

int main(){
  string s="harshit verma";

  string::iterator i;

  for(i=s.begin();i!=s.end();i++){
    cout<<*i;
  }
 
    return 0;

}*/
 
/*#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="Harshit";

    for(int i=s[0];s[i]!='\0';i++){
        cout<<s;
    }

    return 0;
}*/

/*#include<iostream>
#include<string>

using namespace std;

int main(){
    string s="haRshI0t5";
   

    for(int i=0;s[i]!='\0';i++){
        if(s[i]>90){
            s[i]=s[i]+32;
        }
        
    }
   cout<<s;
    return 0;
}*/

/*#include<iostream>
#include<string>

using namespace std;
int main(){
 string s="Hey how are you";


 int vowels=0,consonants=0,spaces=0;
for(int i=0;s[i]!='\0';i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
       s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        vowels++;
    }
     else if(s[i]==' ' && s[i+1]!=' '){
        spaces++;
    }

    else if(s[i]!=' '){                                             
        consonants++;
    }
   
    
}

cout<<"vowels : "<<vowels<<endl;
cout<<"consonants : "<<consonants<<endl;
cout<<"words : "<<spaces+1<<endl;

return 0;
}*/

/*#include<iostream>
#include<string>

using namespace std;

int main(){

    string s="harshit";
    string r;

    int len=s.length();

    r.resize(len);

    for(int i=0,j=len-1;i<len;i++,j--){
        r[j]=s[i];
    }
    r[len]='\0';

    if(r.compare(s)==0){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}*/

/*#include<iostream>
#include<string>

using namespace std;

int main(){

    string s="NItiN";
    string r;

    int len=s.length();

    r.resize(len);

    for(int i=0;s[i]!='\0';i++){
        if(s[i]>65 && s[i]<90){
            s[i]=s[i]+32;
        }
    }

    for(int i=0,j=len-1;i<len;i++,j--){
        r[j]=s[i];
    }
    r[len]='\0';

    if(r.compare(s)==0){
        cout<<"palindrome"<<" "<<r;
    }
    else{
        cout<<"not palindrome"<<" "<<r;
    }

    return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="harshit@gmail.com";
    string r;

    int index=s.find('@');
   
    r=s.substr(0,index);
    cout<<"email address : "<<s<<endl;
    cout<<"username : "<<r;
return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="har  shit@gmail.com";
    string r;

    int index=s.find('@');
   
   r=s.substr(0,index);

   for(int i=0;r[i]!='\0';i++){
    if(r[i]==' '){
        r[i]='_';
    }
   }
   for(int i=0;r[i]!='\0';i++){

   }
   cout<<r;
return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;

int main(){

string s;

cout<<"may i know your name :";
getline(cin,s);

cout<<"Hello ! : "<<s;

return 0;

}*/

/*#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="harshit verma";

    string::iterator i;

    for(i=s.begin();i)
}*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string start="RXXLRXRXL";
    string result="XRLXXRRLX";
    string step="";
    int count=0;

     for(int i=0;start[i]<=start.length()-1;i++){
        if(start[i]=='X' && start[i+1]=='L'){
        step+="LX";
        i++;
        }
        else if(start[i]=='R' && start[i+1]=='X'){
            i++;
            if(count<=2){
            step+="XR";
            i++;
            count++;
            }
        
        }
        else{
        step+=start[i]; 
        }                                                                  //"XRLXXRXR"
       }
       if(step==result)
       cout<<"true";
       else
       cout<<step;

       return 0;
    
}
