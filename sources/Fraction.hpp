#ifndef FRACTION_A_FRACTION_HPP
#define FRACTION_A_FRACTION_HPP

#include <iostream>
#include <string>

const static double tenth = 0.1;
namespace ariel {

    class Fraction {
        int numerator;
        int denominator;

    public:
        Fraction(int numerator = 0, int denominator = 1);

        Fraction();

//        Fraction(const Fraction &fraction);
//
        Fraction(double num = tenth);

        int getDenominator() const;

        friend Fraction operator+(const Fraction &fraction1, const Fraction &fraction2);

        friend Fraction operator-(const Fraction &fraction1, const Fraction &fraction2);

        friend Fraction operator*(const Fraction &fraction1, const Fraction &fraction2);

        friend Fraction operator/(const Fraction &fraction1, const Fraction &fraction2);

        friend bool operator==(const Fraction &fraction1, const Fraction &fraction2);

        friend bool operator>=(const Fraction &fraction1, const Fraction &fraction2);

        friend bool operator<=(const Fraction &fraction1, const Fraction &fraction2);

        friend bool operator!=(const Fraction &fraction1, const Fraction &fraction2);

        friend bool operator<(const Fraction &fraction1, const Fraction &fraction2);

        int getNumerator() const;

        friend bool operator>(const Fraction &fraction1, const Fraction &fraction2);

        friend std::ostream &operator<<(std::ostream &osStream, const Fraction &fraction);

        friend std::istream &operator>>(std::istream &input, Fraction fraction);

        // prefix increment:
        Fraction &operator++();

        // postfix increment:
        const Fraction operator++(int);

        // prefix decrement:
        Fraction &operator--();

        // postfix decrement:
        const Fraction operator--(int);


    };

}


#endif //FRACTION_A_FRACTION_HPP
