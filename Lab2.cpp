#include<iostream>
using namespace std;

class shape{
	public:
		virtual void area()=0;
};

class Circle:public shape{
	private:
		float r,a;
	public:
		Circle(float r){
			this->r=r;
		}
		void area(){
			a=3.14*r*r;
			cout<<"Area of Circle : "<<a<<endl;
		}
	
};
class Rectangle:public shape{
	private:
		int l,b;
		float a;
	public:
		Rectangle(int l,int b){
			this->l=l;
			this->b=b;
		}
		void area(){
			a=l*b;
			cout<<"Area of Rectangle : "<<a<<endl;
		}
};
class Triangle:public shape{
	private:
		int b,h;
		float a;
	public:
		Triangle(int b,int h){
			this->b=b;
			this->h=h;
		}
		void area(){
			a=0.5*b*h;
			cout<<"Area of Triangle : "<<a<<endl;
		}
};

int main(){
	Circle c(5);
	Rectangle r(6,3);
	Triangle t(10,4);
	
	shape *s;
	s=&c;
	s->area();
	
	s=&r;
	s->area();
	
	s=&t;
	s->area();
	
	return 0;
	
}

