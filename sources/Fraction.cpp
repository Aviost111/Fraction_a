#include "Fraction.hpp"
#include <iostream>

namespace ariel{
    Fraction::Fraction(int numerator, int denominator) {}
    Fraction::Fraction(Fraction fraction) {}
    Fraction Fraction::operator+ (Fraction a ,Fraction b){}
    Fraction Fraction::operator- (Fraction a ,Fraction b){}
    Fraction Fraction::operator* (Fraction a ,Fraction b){}
    Fraction Fraction::operator/ (Fraction a ,Fraction b){}
    bool Fraction::operator== (Fraction a ,Fraction b){}
    bool Fraction::operator>= (Fraction a ,Fraction b){}
    bool Fraction::operator<= (Fraction a ,Fraction b){}
    bool Fraction::operator< (Fraction a ,Fraction b){}
    bool Fraction::operator> (Fraction a ,Fraction b){}
    void Fraction::operator<< (ostream& COUT ,Fraction fraction){}
    void Fraction::operator>> (ostream& COUT ,Fraction fraction){}

}
