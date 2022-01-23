#include <iostream>

using namespace std;

class Box{
protected:
	int len;
	int hei;
	int bre;
public:
	Box(int length, int breadth, int height){
		len = length;
		hei = height;
		bre = breadth;
	}
	Box(){
		len = 0;
		hei = 0;
		bre = 0;
	}
	Box(const Box &B){
		len = B.len;
		hei = B.hei;
		bre = B.bre;
	}

	int getLength(){return len;}
	int getBreadth(){return bre;}
	int getHeight(){return hei;}
	long long CalculateVolume(){long long res = getBreadth() * getLength(); res = res * getHeight(); return res;}

bool operator<(const Box &B){
	if(len < B.len)
		return true;
	if(bre < B.bre && len == B.len)
		return true;
	if(hei < B.hei && bre == B.bre && len == B.len)
		return true;
	return false;
}
};

ostream& operator<<(ostream& out, Box& B){
	out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
	return out;
}

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box -> lenght x height x breadth

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin >> n;
	Box temp;
	for(int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if(type == 1)
		{
			cout << temp << endl;
		}
		if(type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if(type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if(NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if(type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if(type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}

int main()
{
 check2();
}