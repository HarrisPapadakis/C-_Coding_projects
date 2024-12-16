//public access specifier  -  Public inheritance models IS-A
#include <iostream>
using namespace std;

class Base
{
	private:
		int x_private;
	protected:
		int y_protected;
	public:
		int z_public;
	
	public: //could be omitted due to line 11
		Base() //constructor to initialize data members
		{
			setXPrivate(1); //same as x_private = 1;
			setYProtected(2); //same as y_protected = 2;
			setZPublic(3); //same as z_public = 2;
		}
		
		void setXPrivate(int x_private)
		{
			this->x_private = x_private;
		}
		
		void setYProtected(int y_protected)
		{
			this->y_protected = y_protected;
		}
		
		void setZPublic(int z_public)
		{
			this->z_public = z_public;
		}
		
		int getXPrivate() const
		{
			return x_private;
		}
		
		int getYProtected() const
		{
			return y_protected;
		}
		
		int getZPublic() const
		{
			return z_public;
		}
};

//Public inheritance models IS-A
class Derive : public Base //if "public" is omitted then Access Specifier is automatically "private", since it's the default 
{
	//y_protected and z_public become private members of class Derive and x_private remains inaccessible ouside Base (despite its being a member of Derive class as well)
	public://could be omitted due to line 57
		void setParentSAll(int a, int b, int c)
		{
			//x_private = a; //<------------ ERROR due to private variable x_private which 
				         //is not accessible ouside parent class.  
				         //(Here line 49 (... : protected ...) makes no difference).
				         //Must call setter.
			setXPrivate(a);
			y_protected = b; //same as setYProtected(b);
			z_public = c; //same as setZPublic(c);
		}
		
		void showParentSData()
		{
			//cout << "value of Base class \"x_private\" from Derive1 class is printed as " << x << endl;  //<------------ ERROR due to private variable x_private 
			cout << "value of Base class \"x_private\" from Derive class is printed as " << getXPrivate() << endl;
			cout << "value of Base class \"y_protected\" from Derive1 class is printed as " << y_protected << endl;  //same as cout << "value of Base class \"y_protected\" from Derive class is printed as " << getYProtected() << endl;
			cout << "value of Base class \"z_public\" from Derive class is printed as " << z_public << endl << endl; //same as cout << "value of Base class \"z_public\" from Derive1 class is printed as " << getZPublic() << endl;
		}
};

int main()
{	
	Derive d; //object of derived class
	d.showParentSData(); //Derive class's method
	
	//d.x_private = 11;   //<------------ ERROR due to private variable x_private. Must call setter.
	d.setXPrivate(11);
	
	//d.y_protected = 12;   //<------------ ERROR due to protected variable y_protected, which is seen as private.  Must call setter.
	d.setYProtected(12);
	
	d.z_public = 13; //same as d.setZPublic(13);
	
	d.showParentSData();
	
	d.setParentSAll(101, 102, 103);
	d.showParentSData();
	
	return 0;
} 
