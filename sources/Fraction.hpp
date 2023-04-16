#ifndef FRACTION_A_FRACTION_HPP
#define FRACTION_A_FRACTION_HPP
#include <iostream>
#include <string>
using namespace std;

namespace ariel {

    class Fraction {
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator);
        Fraction(Fraction fraction);

        Fraction operator+ (Fraction a ,Fraction b);
        Fraction operator- (Fraction a ,Fraction b);
        Fraction operator* (Fraction a ,Fraction b);
        Fraction operator/ (Fraction a ,Fraction b);
        bool operator== (Fraction a ,Fraction b);
        bool operator>= (Fraction a ,Fraction b);
        bool operator<= (Fraction a ,Fraction b);
        bool operator< (Fraction a ,Fraction b);
        bool operator> (Fraction a ,Fraction b);
        void operator<< (ostream& COUT ,Fraction fraction);
        void operator>> (ostream& COUT ,Fraction fraction);






    };

}


#endif //FRACTION_A_FRACTION_HPP
