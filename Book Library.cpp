/*CREAT BOOK LIBRARY USING C++*/
#include <iostream>

using namespace std;
 class book {
       public:
    int i;
    int j;
    
    
    string bookname;
    int cost;
 public:
void accept(){
    cout<<"enter book name:";
    cin>>bookname;
    cout<<"enter book cost:";
    cin>>cost;
}
void display(){
    cout<<"bookname:"<<bookname<<endl;
    cout<<"cost:"<<cost<<endl;
}
 void sortbook(int n,book b[]){
       int temp;
    string t2;
     for(int i=0;i<n;i++){
          for(int j=0;j<n-1;j++){
             if(b[j].cost>b[j+1].cost){
                 temp=b[j].cost;
                 b[j].cost=b[j+1].cost;
                 b[j+1].cost=temp;
                 
                 t2=b[j].bookname;
                 b[j].bookname=b[j+1].bookname;
                 b[j+1].bookname=t2;
                 
             }
              
            }
              
        }

    }
     void less(int n,book b[]){
            int count=0;
                   for(int i=0;i<n;i++){
                        if(b[i].cost>500)
              {
                count++;
              }
                   }
              cout<<"bookname having cost grater than 500 is"<<count<<endl;
              
                   
               }
               void copy(int n,book b[],book c[]){
                   cout<<"bookname having less than 500"<<endl;
                   int j=0;
                   for(int i;i<n;i++){
                       if(b[i].cost<500){
                            c[j]=b[i];
                       }
                     j++;
                     }
                   
               }
                   
};
int main() {
     book b[100];
     book c[100];
     
 int n;
 int i;
 int j;
 int count;
    cout<<"enter number off books";
    cin>>n;
   
     for(int i=0;i<n;i++){
   
    b[i].accept();
 
     }
     for(int i=0;i<n;i++){
     
       b[i].sortbook(n,b);  
     }
      
      for(i=0;i<n;i++){
    b[i].display();
    // W}rite C++ code here
}
 
b[i].less(n,b);


b[i].copy(n,b,c);
for(int i=0;i<n;i++){
b[i].display();
    }
 return 0;
}
