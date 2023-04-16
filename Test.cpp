#include "doctest.h"
#include "sources/Fraction.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;
using namespace ariel;

TEST_CASE("invalid Fraction"){
    int x = 5;
    CHECK_THROWS(Fraction(x,0));
}

TEST_CASE("invalid operations"){
    Fraction a(1,1);
    Fraction b(0,5);
    Fraction c(1,1);
    CHECK_THROWS(a/b);
    CHECK_NOTHROW(a-c);
    CHECK_NOTHROW(b*a);

}

TEST_CASE("comparing"){
    Fraction a(1,1);
    Fraction b(0,5);
    Fraction c (0,3);
    CHECK(a>b);
    CHECK(!(b<c));
    CHECK(b<=c);
    CHECK(!(b>c));
    CHECK(b>=c);
    CHECK(b==c);


}
//10
TEST_CASE("addition ++ and subtraction --"){
    Fraction a(1,1);
    Fraction b(2,2);
    CHECK(!((a++)==b));
    CHECK(a==b);
    a--;
    CHECK(++a==b);
    a--;
    CHECK(!((b--)==a));
    CHECK(a==b);
    b++;
    CHECK(--b==a);
}
//16

