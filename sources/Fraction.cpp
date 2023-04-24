#include "Fraction.hpp"
#include <iostream>

using namespace std;
namespace ariel {
    Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

//    Fraction::Fraction(const Fraction &fraction) {}
    Fraction::Fraction(float num) {}

    Fraction::Fraction() {}

    Fraction operator+(const Fraction &fraction1, const Fraction &fraction2) {
        return fraction1;
    }

    Fraction operator-(const Fraction &fraction1, const Fraction &fraction2) {
        return fraction1;
    }

    Fraction operator*(const Fraction &fraction1, const Fraction &fraction2) {
        return fraction1;
    }

    Fraction operator/(const Fraction &fraction1, const Fraction &fraction2) {
        return fraction1;
    }

    bool operator==(const Fraction &fraction1, const Fraction &fraction2) {
        return true;
    }

    bool operator>=(const Fraction &fraction1, const Fraction &fraction2) {
        return true;
    }

    bool operator<=(const Fraction &fraction1, const Fraction &fraction2) {
        return true;
    }

    bool operator!=(const Fraction &fraction1, const Fraction &fraction2) {
        return true;
    }

    bool operator<(const Fraction &fraction1, const Fraction &fraction2) {
        return true;
    }

    bool operator>(const Fraction &fraction1, const Fraction &fraction2) {
        return true;
    }

    int Fraction::getNumerator() const {
        return numerator;
    }


    std::ostream &operator<<(std::ostream &os, const Fraction &fraction) {
        return os;
    }

    std::istream &operator>>(std::istream &input, Fraction fraction) {
        return input;
    }

    // prefix increment:
    Fraction &Fraction::operator++() {
        return *this;
    }

    // postfix increment:
    const Fraction Fraction::operator++(int) {
        return *this;
    }

    // prefix decrement:
    Fraction &Fraction::operator--() {
        return *this;
    }

    // postfix decrement:
    const Fraction Fraction::operator--(int) {
        return *this;
    }

    int Fraction::getDenominator() const {
        return denominator;
    }


}

