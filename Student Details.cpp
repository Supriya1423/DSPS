#include<iostream>
using namespace std;
int f=0;
int n;
int i;
int j;
int r;
class student{

public:
int rollno;
string name;
string department;
string title;
void accept();
void display();
void sort(int n,student s[]);
void linear(int n,int r,student s[]);
void binary(int n,student s[]);
}s;
       void student::accept(){
             cout<<"enter the title of trening";
             cin>>title;

             cout<<"enter the roll no";
             cin>>rollno;
             cout<<"enter your name";
             cin>>name;
             cout<<"enter your dipartment";
             cin>>department;
}
       void student::display(){
             cout<<title<<name<<rollno<<department<<endl;
}
       void student::linear(int n,int r,student s[]){


            for(int i=0;i<n;i++){
                 if(s[i].rollno==r){
                     f=1;
                     cout<<"student are present in the training program"<<endl;
                     cout<<"title="<<s[i].title<<endl;

                     cout<<" name="<<s[i].name<<endl;

                     cout<<"dipartment="<<s[i].department<<endl;
          
}
  
 }
 
 if(f==0){
 cout<<"student is absent ";
 }
 }
   void student:: sort(int n,student s[])
   {
   int temp;
   cout<<"SORTED ROLL NUMBER IS:="<<endl;
     for(int i=0;i<n;i++){
          for(int j=0;j<n-1;j++){
          
          if(s[j].rollno>s[j+1].rollno)
          {
          temp=s[j].rollno;
          s[j].rollno=s[j+1].rollno;
          s[j+1].rollno=temp;
          }
          }
     }
   }
   void student::binary(int n,student s[]){

   int mid;
   int low=0;
   int high=n-1;

int flag=0;
   while(low<=high){
   
   f=1;
   mid=(high+low)/2;
   if(s[mid].rollno==r){
   cout<<"hii";
   cout<<"student is present in training program"<<s[mid].rollno<<endl;

   return;
   }
   
   else if(s[mid].rollno>r){
      low=mid+1;
      cout<<low;
   high=n-1;
 
   }
   else
   {
  high=mid-1;
   low=0;
   }
   }
   if(f==0){
   cout<<"not present";
   }

   
  
   }
 int main(){

student s[10];
int i;
int n;
cout<<"enter n";
cin>>n;
for(int i=0;i<n;i++){
s[i].accept();

} for(int i=0;i<n;i++){
s[i].display();
}


     
       s[i].sort(n,s);  
     
      
      for(i=0;i<n;i++){
    s[i].display();
    // W}rite C++ code here
}
cout<<"FINDING THE STUDENT ARE PRESENT IN THE TRAINING PROGRAM OR NOT"<<endl;
cout<<"enter r";
cin>>r;

s[i].linear(n,r,s);
s[i].binary(n,s);

 
}

