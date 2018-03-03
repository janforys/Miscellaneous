#include <iostream>
#include <math.h>

using namespace std;

class Point
{
   float x,y;
   string name;

public:
   void display()
   {
      cout<<name<<"("<<x<<","<<y<<")"<<endl;
   }
   Point(string n="S", float a=0, float b=0)
   {
      name = n;
      x = a;
      y = b;
   }
};

class Circle : public Point 	//public inheritance from 'Point' class
{
   float r;
   string name;

public:
   void display()
   {
      cout<<"Circle name: "<<name<< endl;
      cout<<"Center of the circle: ";
      Point::display();
      cout<<"Radius: "<<r<< endl;
      cout<<"Circle surface: "<<M_PI*r*r<<endl;
   }

   Circle(string nk="Circle_0", string np="S", float a=0, float b=0, float pr=1)
   : Point(np,a,b)
   {
      name = nk;
      r = pr;
   }
};

int main()
{
    Circle k1;
    k1.display();

    return 0;
}
