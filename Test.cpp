#include "doctest.h"
#include "sources/Fraction.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;
using namespace ariel;

TEST_CASE("invalid Fraction") {
    int x = 5;
    CHECK_THROWS(Fraction(x, 0));
}

TEST_CASE("invalid operations") {
    Fraction a(1, 1);
    Fraction b(0, 5);
    Fraction c(1, 1);
    CHECK_THROWS(a / b);
    CHECK_NOTHROW(a - c);
    CHECK_NOTHROW(b * a);

}

TEST_CASE("comparing") {
    Fraction a(1, 1);
    Fraction b(0, 5);
    Fraction c(0, 3);
    CHECK((a > b));
    CHECK(!(b < c));
    CHECK((b <= c));
    CHECK(!(b > c));
    CHECK((b >= c));
    CHECK((b == c));


}
//10
TEST_CASE("addition ++ and subtraction --") {
    Fraction a(1, 1);
    Fraction b(2, 1);
    CHECK(((a++) != b));
    CHECK((a == b));
    a--;
    CHECK((++a == b));
    a--;
    CHECK(!((b--) == a));
    CHECK((a == b));
    b++;
    CHECK((--b == a));
}
//16

TEST_CASE("make sure simplified") {
    Fraction a(3, 12);
    Fraction b(10, 120);
    Fraction d(1,1);
    Fraction c = a + a;
    CHECK((c.getNumerator() == 1));
    CHECK((c.getDenominator() == 2));
    c = a-b;
    CHECK((c.getNumerator() == 1));
    CHECK((c.getDenominator() == 6));
    c = a*d;
    CHECK((c.getNumerator() == 1));
    CHECK((c.getDenominator() == 4));
    c = d/a;
    CHECK((c.getNumerator() == 4));
    CHECK((c.getDenominator() == 1));
}

