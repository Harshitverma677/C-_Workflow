/*#include<iostream>
using namespace std;

int main(){
    int n;
  
    cout<<"enter n";
    cin>>n;
    int a[n];


    cout<<"enter element in array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter n";
    cin>>n;
    int a[n];

    cout<<"enter element";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n,max;
    cout<<"enter n";
    cin>>n;
    int a[n];

    max=a[0];
    cout<<"enter elements";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"max is: "<<max;

    return 0;
}
*/

/*#include<iostream>
using namespace std;

int main(){
    int a[4]={5,6,11,20},key;

    cout<<"enter element for search";
    cin>>key;

    for(int i=0;i<4;i++){
        if(key==a[i]){
            cout<<"successfully found at "<<i;
            return 0;
        }
    }
    cout<<"unsuccessful not found";
  
}*/

/*#include<iostream>
using namespace std;

int main(){

int a[6]={2,5,7,11,13,16};
int l=0,h=5,mid,key;

cout<<"enter element to search";
cin>>key;

while(l<=h){

    mid=(l+h)/2;
    if(a[mid]==key){
        cout<<"found at "<<mid;
        return 0;
    }
    else if(a[mid]<key){
        l=mid+1;
    }
    else{
        h=mid-1;
    }
}

cout<<"unsuccessful";


}*/

/*#include<iostream>
using namespace std;

int main(){
    int count=1;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        if(i>=j){
            cout<<"*"<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
       if(i>j){
        cout<<" ";
       }
       else{
        cout<<"*";
       }
      }
      cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
      if(i+j>=3){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
      
      }
      cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    int n=5;

  for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i+j<=n-1){
             cout<<"* ";  
           }
           else{
               cout<<"  ";
           }
       }
       cout<<endl;
   }
return 0;
}*/

