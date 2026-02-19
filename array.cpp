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

/*#include<iostream>
using namespace std;

int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int c[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){                                                                          
            c[i][j]=a[i][j]+b[i][j];
        }
    }                                                 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;
    int i,j,k;
    int sum;

   cout<<"enter row1";
   cin>>r1;

   cout<<"enter col1";
   cin>>c1;

     int a[r1][c1];

   cout<<"enter element of A";

  for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        cin>>a[i][j];
    }
  }

  cout<<"enter row2";
   cin>>r2;

   cout<<"enter col2";
   cin>>c2;

   int b[r2][c2];

   cout<<"enter element of B";

  for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        cin>>b[i][j];
    }
  }        
                                                                                                    /*  1 2 4   4 5     4+12+4    5+14+8
                                                                                                        3 5 4   6 7     12+30+4   15+35+8   
                                                                                                                1 2                     */
 /*int c[r1][c2]; 
    if(c1==r2){                                                                                                    
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
             sum=0;
            for(k=0;k<c1;k++){

                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;

            }
        }   
    }
     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
else{
    cout<<"mult can not possible";
}
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int n=10,m=3;
    int num1[n];
    int num2[n];

    for(int i=1,j=0;i<n;i++,j++){
        if(i%m==0){
           num1[j]=i; 
        }
        else{
            num2[j]=i;
        }
    }
    
    return 0;
}*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> array(4,0);


    int sum=0;
    for(int i=0;i<)
}