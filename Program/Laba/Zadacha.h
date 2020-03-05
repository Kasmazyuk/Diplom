#pragma once
#include <math.h>
#include <fstream>
#include <iostream>


using namespace std;

class Zadacha {

protected:
	bool active;
public:

	virtual double fa(double x) = 0;
	virtual double fd(double x) = 0;
	virtual double ffi(double x) = 0;

	virtual double IntegFA (double a, double b) = 0;
	virtual double IntegFD (double a, double b) = 0;
	virtual double IntegFFI (double a, double b) = 0;

	virtual void TestClick (int n) = 0;
	virtual void TestVivodvfail (int n) = 0;

};

class TestovayaZadacha: public Zadacha {

public:

	double fa(double x) {
		return 1;
	}
	double fd(double x) {
		return 3;
	}
	double ffi(double x) {
		return 12;
	}

	double IntegFA (double a, double b) {
		double Integral = ((fa(a) + fa(b)) / 2.0)*(b-a);
		return Integral;
	}
	double IntegFD (double a, double b) {
		double Integral = ((fd(a) + fd(b)) / 2.0)*(b-a);
		return Integral;
	}
	double IntegFFI (double a, double b) {
		double Integral = ((ffi(a) + ffi(b)) / 2.0)*(b-a);
		return Integral;
	}

	virtual void TestClick (int n) = 0;
	virtual void TestVivodvfail (int n) = 0;

};

class OsnovnayaZadacha: public Zadacha {

public:

	double fa(double x)
	{
		return (x*(1-x))+1;
	}

	double fd(double x)
	{
		return (x-0.5)*(x-0.5);
	}


	double ffi(double x)
	{
		return (x*x)*((1-x)*(1-x))*(10);
	}

	double IntegFA (double a, double b) {
		double Integral = ((fa(a) + fa(b)) / 2.0)*(b-a);
		return Integral;
	}
	double IntegFD (double a, double b) {
		double Integral = ((fd(a) + fd(b)) / 2.0)*(b-a);
		return Integral;
	}
	double IntegFFI (double a, double b) {
		double Integral = ((ffi(a) + ffi(b)) / 2.0)*(b-a);
		return Integral;
	}

	virtual void TestClick (int n) = 0;
	virtual void TestVivodvfail (int n) = 0;

};