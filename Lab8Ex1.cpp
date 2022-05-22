//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-121 Summer 2021 												//
//																									//
//	Type of Assignment:		Lab 8																    //
//	Problem Number:			Exercise 1																//
//	Section Number			700																		//
//	Author:					Kehinde Abioye														    //
//	Date Assigned:			July 26, 2021														    //
//	Project Name:			Circle Class    											            //
//	File Name:				Lab8Ex1.cpp													            //
//																									//
//	Purpose of Program:																				//
//		The purpose of this program is obtain user input for radius then                            //
//		display area and circumference using a class. The class is first demonstreted               //
//		with 0 radius.																				//	        
//																							        //
//  Algorithm:																						//
//			1.Create a declaration of the class.                                                    //
//			2. Ask user to input radius                                                             //
//			3. Display area and circumference of two circle objects                                 //					
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

const double PI = 3.14159;//constant for pi

class Circle
{
//public:
	//Circle();
	//Circle(double r);
	//void setRadius(double r);
	//double getRadius();
	//double getArea();
	//double getCircumference();
	//};
	//Circle::Circle()
	//{
	//	radius = 0.0; //default constructor
	//}
	//Circle::Circle(double r)
	//{
	//	radius = r;
	//}
	//void Circle::setRadius(double r)//setRadius: an mutator function for the radius variable
	//{
	//	radius = r;
	//}
	//double Circle::getRadius()//getRadius: an accessor function for the radius variable.
	//{
	//	return radius;
	//}
	//double Circle::getArea()//getArea: returns the area of the circle, which is calculated as area = pi * radius * radius
	//{
	//	double area = pi * radius * radius;//calculate area
	//	return area;
	//}
	//double Circle::getCircumference()//getCircumference: returns the circumference of the circle, which is calculated as circumference = 2 * pi * radius
	//{
	//	double circumference = 2 * pi * radius;//calculate circumference
	//	return circumference;
	//}
public:
	Circle()
	{
		radius = 0.0; //default constructor
	}
	Circle(double r)
	{
		radius = r;
	}
	void setRadius(double r)//setRadius: an mutator function for the radius variable
	{
		radius = r;
	}
	double getRadius()//getRadius: an accessor function for the radius variable.
	{
		return radius;
	}
	double getArea()//getArea: returns the area of the circle, which is calculated as area = pi * radius * radius
	{
		double area = PI * radius * radius;//calculate area
		return area;
	}
	double getCircumference()//getCircumference: returns the circumference of the circle, which is calculated as circumference = 2 * pi * radius
	{
		double circumference = 2 * PI * radius;//calculate circumference
		return circumference;
	}
private:
	double radius; //member variable
};

int main()
{
	double radius;

	cout << "Circle's radius: ";
	cin >> radius;//user input
	cout << endl;
	Circle circle1; //object1
	cout << "Area of circle is " << circle1.getArea() << endl;//display area
	cout << "Circumference of circle: " << circle1.getCircumference() << endl << endl; //display circumference

	Circle circle2(radius);//object2
	cout << "Area of circle is " << circle2.getArea() << endl;//display area
	cout << "Circumference of circle: " << circle2.getCircumference() << endl;//display circumference

	return 0;
}


