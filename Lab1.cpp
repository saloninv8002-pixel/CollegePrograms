#include<iostream>
#include<string>
using namespace std;

class Student{
	
	private:
		int rollno;
		string name,department;
		float cgpa;
		
	public:
		
		Student(int rollno,string name,string department,float cgpa){
			this->department=department;
			this->name=name;
			this->rollno=rollno;
			this->cgpa=cgpa;
			cout<<"Student object created"<<endl;
		}
		
		void display(){
			cout<<"Name : "<<name<<endl;
			cout<<"Roll No : "<<rollno<<endl;
			cout<<"Department : "<<department<<endl;
			cout<<"CGPA : "<<cgpa<<endl;
		}
		
		~Student(){
			cout<<"Student object Destroyed"<<endl;
		}
		
};
int main(){
	Student s1(46,"Saloni","CSE",8.9);
	s1.display();
	
	Student s2(78,"Tanav","CSE",9.0);
	s2.display();
	
	return 0;
	
}
