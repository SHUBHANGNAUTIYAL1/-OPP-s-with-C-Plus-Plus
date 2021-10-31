#include<iostream>
using namespace std;
class student{
    public:
  int roll_no;
  long int phone_no;
  string address;
};
int main(){
    student Sam,John;
    Sam.roll_no=56;
    Sam.phone_no=847398573;
    Sam.address="kedarpur lane no.4";
    John.roll_no=45;
    John.phone_no=9862396429;
    John.address="mothrowala road dehradun";
    cout<<"The details of Sam are :"<<" Roll no: "<<Sam.roll_no<<" Phone no. : "<<Sam.phone_no<<" Address : "<<Sam.address;
    cout <<endl;
    cout<<"The details of John are :"<<" Roll no: "<<John.roll_no<<" Phone no. : "<<John.phone_no<<" Address : "<<John.address;
}
