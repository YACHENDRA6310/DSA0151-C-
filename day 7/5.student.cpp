#include<iostream>
#include<string>
using namespace std;

class student{
	private:
		std::string name;
		int age;
		string major;
    public:
    	student(const string&name, int age, const string& major){
    		this->name =name;
    		this->age =age;
    		this->major =major;
    		cout<<"Constructor called for"<<name<<endl;
		}
~student(){
	cout<<"Destructor called for"<<name<<std::endl;
	}
	void display()const{
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Major: "<<major<<endl;
	}
};
int main(){
	student student1("mahe",20,"AIDS");
	student1.display();
	return 0;
}