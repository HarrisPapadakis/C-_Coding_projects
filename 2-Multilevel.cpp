//Multi-Level Inheritance: 
//the last derived class inherits all the members of all its base classes
#include <iostream>  
using namespace std;  

class Animal 
{  
	private:
		int feet;
		
	public:
		void setFeet(int feet)
		{
			this->feet = feet;
		}
		
		int getFeet() const
		{
			return feet;
		}
		
		void walk() 
		{   
			cout<<"Walking with "<<getFeet()<<" feet."<<endl;   
		}    
};  

class Dog : public Animal 
{
	private:
		int no_of_barks;
		
	public:  
		void setNoOfBarks(int no_of_barks)
		{
			this->no_of_barks = no_of_barks;
		}
		
		int getNoOfBarks() const
		{
			return no_of_barks;
		}
		
		void bark()
		{  
			cout<<"Barking "<<getNoOfBarks()<<" times."<<endl;   
		}    
};

class BabyDog : public Dog   
{    
	private:
		int no_of_weeps;
		
	public:
		void setNoOfWeeps(int no_of_weeps)
		{
			this->no_of_weeps = no_of_weeps;
		}
		
		int getNoOfWeeps() const
		{
			return no_of_weeps;
		}
		
		void weep() 
		{  
			cout<<"Weeping "<<getNoOfWeeps()<<" times."<<endl;   
		}    
};

int main(void) 
{  
	BabyDog bd1;
	
	bd1.setFeet(4);
	bd1.setNoOfBarks(19);
	bd1.setNoOfWeeps(3);
	
	bd1.walk();  
	bd1.bark();
	bd1.weep();  
	  
	return 0;  
} 
