#pragma once
#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <exception>

using namespace std;

class Shape
{
public:
	Shape(); //def constr
	Shape(const Shape& S); //copy constr 
	Shape(const string& n, const double& d); //2param constr

	void setName(const string& s) {this->Name = s; }
	string getName() { return this->Name; }

	void setFlache(const double& d) { this->Flache = d; }
	double getFlache() { return this->Flache; }

	friend double multiplier(double FL, const double& x);

	friend void apply(vector<Shape>& vec, double (*f)(double, const double), const double& x);

	string transformer();

private:

	string Name;
	double Flache;
};

Shape::Shape()
{
	Name = "Geometrische Figur";
	Flache = 0.0;
}


Shape::Shape(const Shape& S)
{
	Name = S.Name;
	Flache = S.Flache;
}

Shape::Shape(const string& n, const double& d)
{
	Name = n;
	Flache = d;
}


void apply(vector<Shape>& vec, double (*f)(double, const double), const double& x)
{	
	for (vector<Shape>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		double result = f((*it).Flache, x);
		(*it).setFlache(result);
	}
}


double multiplier(double FL, const double x)
{
	FL = FL * x;
	return FL;
}


double divider(double FL, const double y)
{
	if (y == 0)
		throw exception();
	else
	{
		FL = FL / y;
		return FL;
	}
}


string Shape::transformer()
{
	string result;
	result = result + (Name) + " ";
	string varAsString = to_string(Flache);
	result = result + "mit Flache = ";
	result = result + varAsString;
	result = result + "!";
	return result;
}

