#include <iostream>
using namespace std;
class Point
{
public:
	int x, y, z;
	void put(int& x, int& y, int& z);
	void get(int& x,int& y,int& z);
	void get(int& x, int& y);
	void getZ(int& x, int& z);
	void prin(int x,int y,int z);
};

int main()
{
	Point P;
	int x, y, z;
	P.put(x,y,z);
	P.get(x, y, z);
	P.get(x, y);
	P.getZ(x,z);
	P.prin(x, y, z);


}

void Point::put(int& x,int& y,int& z)
{
	cout << "ÇëÊäÈëx,y,z:";
	cin >> x >> y >> z;
	
}

void Point::get(int& x,int& y,int& z)
{
	cout << "x+y+z=" << x + y + z << endl;
}

void Point::get(int& x, int& y)
{
	cout << "x*y=" << x * y << endl;
}

void Point::getZ(int& x, int& z)
{
	cout << "x-z=:" << x-z<<endl;
}

void Point::prin(int x, int y, int z)
{
	cout << " x: " << x << " y: " << y << " z: " << z;
}
