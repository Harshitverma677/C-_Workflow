/*#include<iostream>
using namespace std;

int main(){
int *p;

p=new int[20];

delete p;

p=new int[40];

return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int a[4]={1,2,3,4};
    int *p=a;
    
    p+=2;
    cout<<*p;
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int*p=a;

    for(int i=0;i<5;i++){
        cout<<*(p+i)<<" ";
        
    }
    return 0;
}*/

#include<iostream>
using namespace std;

int main(){
    int x=10;
    int &y=x;
    cout<<&x<<endl;
    cout<<&y<<endl;
    x++;
    y++;
    cout<<x<<endl;
    cout<<y<<endl;
   
    return 0;
}