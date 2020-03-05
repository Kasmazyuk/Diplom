#pragma once
#include <math.h>
#include <fstream>
#include <iostream>
#include "Zadacha.h"
#include <iomanip>



using namespace std;

class TestZadacha: public TestovayaZadacha {
protected:
	bool activee;
public:
	int nn;
	double MAX;
	double bet1, bet2; // бетта 1 и 2 
	double h, max[1000];
	double x[1000];
	double xi[1000];
	double mu1, mu2;
	double a, b; // отрезок l
	double h1;
	double alfa[1000], d[1000], fi[1000];
	ofstream fout;
	double A[1000];
	double B[1000]; 
	double C[1000]; 
	double F[1000];
	double Tochn[1000];
	double e;
	double allfa[1000];
	double y[1000]; 
	double betta[1000];

	TestZadacha (double _bet1, double _bet2, double _mu1, double _mu2) {
	nn = 10;
	MAX = 0;
	bet1 = _bet1, bet2 = _bet2; // бетта 1 и 2 
	mu1 = _mu1, mu2 = _mu2;
	a = 0, b = 1; // отрезок l
	h1 = 0.0001;// задаём шаг интегрирования
	}

	void TestClick (int n) {
		double detA, detB, det, coren, Aa, Bb;
	coren = sqrt(3);

	det = (10 * (-coren * cosh(coren) - 10*sinh(coren))) - (-coren*(-coren * sinh(coren) - 10*cosh(coren)));
	detB = (10 * -210) - (210*(-coren * sinh(coren) - 10*cosh(coren)));
	detA = (210 * (-coren * cosh(coren) - 10*sinh(coren))) - (-coren * -210);

	Aa = detA/det;
	Bb = detB/det;

	h = (b - a)/n;

	for (int i = 0; i <= n; i++)
	{
		x[i] = a + i*h;
		Tochn[i] = Aa * cosh(sqrt(3)*x[i]) + Bb * sinh(sqrt(3)*x[i]) + 4;
		max[i] = 0;
	}

	for (int i = 0; i <= n - 1; i++) {
		xi[i] = a + (i + 0.5)*h;
	}

	for (int i = 1; i <= n; i++)
	{
		alfa[i] = (1/h) * IntegFA(x[i-1], x[i]);
		alfa[i] = 1/alfa[i];
	}
 		cout << endl; 
	for (int i = 1; i <= n - 1; i++)
	{
		d[i] = (1/h) * IntegFD(xi[i-1], xi[i]);
	}

	for (int i = 1; i <= n - 1; i++)
	{
		fi[i] = (1/h) * IntegFFI(xi[i-1], xi[i]);
	}

	fi[0] = 0;
	d[0] = 0;

	fi[n] = 0;
	d[n] = 0;

	// ----------- Метод прогонки ----------- //
	
	A[0] = 0;
	A[n] = -1/(1+10*h);
	C[n] = 0;
	B[0] = 1;
	B[n] = 1;
	C[0] = -1/(1+10*h);


	for (int i = 1; i <= n - 1; i++)
		A[i] = alfa[i]/(h*h);

	for (int i = 1; i <= n - 1; i++)
		B[i] = -((alfa[i])/(h*h) + (alfa[i+1])/(h*h) + d[i]);

	for (int i = 1; i <= n - 1 ; i++)
		C[i] = alfa[i+1]/(h*h);

	for(int i = 1; i <= n-1; i++)
		F[i] = -fi[i];

	F[0] = (250*h)/(1+10*h);
	F[n] = (250*h)/(1+10*h);

	allfa[0]=-C[0]/B[0];
	betta[0]=F[0]/B[0];
 
	for(int i = 1; i <= n - 1; i++)
	{
		e=A[i]*allfa[i-1]+B[i];
		allfa[i]=-C[i]/e; 
		betta[i]=(F[i]-A[i]*betta[i-1])/e;
	}

	y[n] = (F[n] - A[n] * betta[n - 1]) / (B[n] + A[n] * allfa[n - 1]);

	for (int i = n - 1; i >= 0; i--) 
	{
		y[i] = allfa[i] * y[i + 1] + betta[i];
	}

	max[0] = Tochn[0] - y[0];


	for(int i = 0; i <= n; i++)
	{
		max[i] = Tochn[i] - y[i];
	}


	for(int i = 0; i <= n; i++)

	if (abs(max[i]) > MAX)
	{
		MAX = abs(max[i]);
	}
	}

	void TestVivodvfail (int n) {
		fout.open("VivodTestOb.txt");
		fout.setf(ios::fixed);
		fout << setw(8) << "x" << "   | " << "   U(x)" << "   | " << "   V(x)" << "   | " << "U(x) - V(x)" << endl;
		for(int i = 0; i <= n; i++)
		{
			fout  << x[i] << " | " << y[i] << " | " << Tochn[i] << " | " << max[i] << endl;
		}
		fout << fixed;
		fout.precision(15);
		fout << "max |U(x) - V(x)| = " << MAX << " on i=0,n" << endl;
		fout.precision(10);
		fout.close();
	}


};