#include<iostream>
using namespace std;

//	Inheritance
//	Polymorphism

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	//			Constructors:
	Point()
	{
		cout << "Constructor:\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t" << this << endl;
	}

	//			Methods:
	double distance(Point other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance*x_distance + y_distance * y_distance);
		return distance;
	}
};

double distance(Point A, Point B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance*x_distance + y_distance * y_distance);
	return distance;
}

class Point3D :public Point
{
	double z;
public:
	double get_z() const
	{
		return z;
	}
	void set_z(double z)
	{
		this->z = z;
	}


};

/*
	�������� ��������� ��� �����, �� ������� ����� ��� ������.

	����� - ��� ��� ������!!!
	��������� - ��� ��� ������!!!
*/

/*
------------------------
Special members:
1. Constructor - ��� �����, ������� ������� ������;
2. ~Destructor  - ��� �����, ������� ������ ������, �� ��������� ��� ������� �����;
3. Operator=   - ������� �������� ��������, � ����������� ��� �������� ������� �������;

Constructors:
1. � �����������;
2. ��� ����������;
3. �� ���������;
4. �����������;
5. ��������;
------------------------
*/

void main()
{
	setlocale(LC_ALL, "");
	int a;	//���������� ���������� 'a', ���� 'int'.
	Point A;//���������� ���������� 'A', ���� 'Point'.
			//�������� ���������� 'A', ��������� 'Point'.

	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point* pA = &A;
	cout << pA->get_x() << "\t" << pA->get_y() << endl;

	Point B;
	B.set_x(4);
	B.set_y(5);
	cout << "���������� �� ����� 'A' �� ����� 'B':" << A.distance(B) << endl;
	cout << "���������� �� ����� 'B' �� ����� 'A':" << B.distance(A) << endl;
	cout << "���������� ����� ������� 'A' � 'B':  " << distance(A, B) << endl;
	cout << "���������� ����� ������� 'B' � 'A':  " << distance(B, A) << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << i << "\t";
	}
	cout << i << endl;
}

/*

.  - �������� ������� ������� (Point operator).
-> - �������� ���������� ������� (Arrow operator).

*/