#ifndef __Complex_H__
#define __Complex_H__
#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
private:
  double Real, Imag;
public:

  Complex (double Real = 0, double Imag = 0)
  {
    this->Real = Real;
    this->Imag = Imag;
  };

  Complex & operator= (const Complex & s)
  {
    Real = s.Real;
    Imag = s.Imag;
    return *this;
  };

  Complex operator- () const
  {
    return Complex(-Real,-Imag);
  };

  Complex & operator= (double co)
  {
    Real = co;
    Imag = 0;
    return *this;
  };

  Complex operator+ (const Complex& co) const
  {
    Complex n;
    n.Real = this->Real + co.Real;
    n.Imag = this->Imag + co.Imag;
    return n;
  };


  Complex & operator-= (Complex co)
  {
    Real -= co.Real;
    Imag -= co.Imag;
    return *this;
  };

  friend Complex operator/ (const Complex, const Complex);

  friend Complex operator- (Complex, Complex);
  friend ostream & operator << (ostream & s, const Complex & c)
  {
    s << "(" << c.Real << "," << c.Imag << ")";
    return s;
  };

  Complex & operator /=(Complex c2){
	  double r,i;
          r = (Real*c2.Real+Imag*c2.Imag)/(c2.Real*c2.Real+c2.Imag*c2.Imag);
	  i = (Imag*c2.Real-Real*c2.Imag)/(c2.Real*c2.Real+c2.Imag*c2.Imag);
	  Real = r;
          Imag = i;
          return *this;
  }

  double abs(){
		double result;
		double r,i,s;
		r=this->Real;
		i=this->Imag;
		r=r*r;
		i=i*i;
		s=r+i;
		result=sqrt(s);
		return result;
	}

	double phase(){
		double result;
		result=atan2(this->Real,this->Imag);
		return result;
	}

	Complex conj(){
		return Complex(this->Real,-(this->Imag));
	}

};

inline Complex
operator - (Complex s1, Complex s2)
{
  Complex n (s1);
  return n -= s2;
}

	Complex operator/ (const Complex c1, const Complex c2){
	double r, i;
	r=(c1.Real*c2.Real+c1.Imag*c2.Imag)/(c2.Real*c2.Real+c2.Imag*c2.Imag);
	i=(c1.Imag*c2.Real-c1.Real*c2.Imag)/(c2.Real*c2.Real+c2.Imag*c2.Imag);
	Complex result(r,i);
	return result;
    }



#endif /* __Complex_H__ */
