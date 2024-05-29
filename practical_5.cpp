//write a c++ program to find area and perimeter of a rectangle given by user.Overload << operator to display given rectangle user constructor and destrutor
#include<iostream>
using namespace std;
class rectangle
{
		float l;
		float b;
	public:
		rectangle(float x,float y)
		{
			l=x;
			b=y;
		}
		friend void operator<<(ostream& Cout,const rectangle &Z)
		{
			cout<<"length of rectangle is"<<endl;
			Cout<<Z.l<<endl;
			cout<<"breadth of rectangle is"<<endl;
			Cout<<Z.b<<endl;
		}
		void Area()
		{
			cout<<"Area of Rectangle is:"<<l*b<<endl;
		}
		void perimeter()
		{
			cout<<"perimeter of rectangle is:"<<2*(l+b)<<endl;
		}
		~rectangle()
		{
			cout<<"desrtuctor is called."<<endl;
		}
		
};
int main()
{
	int l,b;
	cout<<"please enter value of length and breadth"<<endl;
	cin>>l;
	cin>>b;
	rectangle R(l,b);
	cout<<R;
	R.Area();
	R.perimeter();
}
