//Friend Function in C++
//WAP in which you create a Student class having basic information for each student, 
//like name, age and marks. By using friend function add marks of all the students [lets say 3 objects] and print it.


#include<iostream>
#include<string.h>
using namespace std;

class student{
string name;
int marks;
char sec;
public:
student(string name,int m,char sec)
{
this->name=name;
this->marks=m;
this->sec=sec;
}
friend int get_marks(student);
};

int get_marks(student obj)
{
return obj.marks;
}

int main()
{
student obj1("Shikhar",99,'A');
student obj2("shivi",84,'B');
student obj3("prakhar",78,'B');
int sum=0;
sum+=get_marks(obj1);
sum+=get_marks(obj2);
sum+=get_marks(obj3);
cout<<"total sum of all students marks : "<<sum;
}


































/*class student{  //friend function array 
string name;
int marks;
char sec;
public:
void set_values(string name,int m,char sec)
{
this->name=name;
this->marks=m;
this->sec=sec;
}
friend int get_marks(student obj);
};

int get_marks(student obj){
return obj.marks;
}

int main()
{
int n;
cout<<"enter no. of students"<<endl;
cin>>n;
student arr[n];
  for(int i=0;i<n;i++)
   {
   cout<<"enter name,marks and section of student "<<i+1<<endl;
   int temp;
   string name;
   char sec;
   cin>>name;
   cin>>temp;
   cin>>sec;
     arr[i].set_values(name,temp,sec);
   }
int sum=0;
  for(int i=0;i<n;i++)
  {
    cout<<get_marks(arr[i])<<" ";
    sum+=get_marks(arr[i]);
  }
  cout<<sum;
  }*/
  
  /*
  #include<iostream> // pointers by dma
using namespace std;
class student{

int marks;
public:
void set_marks(int m)
{
this->marks=m;
}
int get_marks(){
return this->marks;
}
};
int main()
{
int n;
 cout<<"enter no. of studend"<<endl;
  cin>>n;
 student *ptr=new student[n];
 for(int i=0;i<n;i++)
 {
  cout<<"enter marks of student "<<i<<endl;
  int temp;
  cin>>temp;
  ptr[i].set_marks(temp);
  }
  int sum=0;
  for(int i=0;i<n;i++)
  {
    cout<<ptr[i].get_marks()<<" ";
    sum+=ptr[i].get_marks();
  }
  cout<<sum;
  }
  
  
 */
  
