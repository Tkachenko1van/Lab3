#include "main.hpp"
#include "catch2/catch_all.hpp"

//Тесты с использованием Catch2
TEST_CASE("Testing the solution to the equation", "[Solution]")
{
    double eps = 0.00001;
    double x = 1;

    SECTION("Solving the equation x=sqrt(x)")
    {
        REQUIRE(fabs(Solution(f_sqrt, x, eps)-1) < eps);
    }

    SECTION("Solving the equation x=cos(x)")
    {
        REQUIRE(abs(Solution(f_cos, x, eps)-0.739085) < eps);
    }
}