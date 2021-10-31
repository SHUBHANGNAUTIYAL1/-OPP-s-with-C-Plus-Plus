#include<iostream>
using namespace std;
class Area{
    public:
float area(float l,float b)
{
    return l*b;
}
float area(float side)
{
    return side*side;
}
};
int main(){
   Area square,rectangle;
  float sq= square.area(67.00,2.00);
  float rec=square.area(12);
  cout << "Area of square is "<<sq <<endl;
  cout << "Area of rectangle is "<<rec <<endl;
  return 0;
}
