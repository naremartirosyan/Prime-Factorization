#include <stdio.h> 
#include <gtest/gtest.h>
#include "declarations.h"

TEST(PrimeFactors, FactosOf2)
{
    std::vector<int> Factors = {2};
    ASSERT_EQ(primeFactorize(2), Factors);
}

TEST(PrimeFactors, FactosOf3)
{
    std::vector<int> Factors = {3};
    ASSERT_EQ(primeFactorize(3), Factors);
}

TEST(PrimeFactors, FactosOf4)
{
    std::vector<int> Factors = {2, 2};
    ASSERT_EQ(primeFactorize(4), Factors);
}

TEST(PrimeFactors, FactosOf5)
{
    std::vector<int> Factors = {5};
    ASSERT_EQ(primeFactorize(5), Factors);
}

TEST(PrimeFactors, FactosOf6)
{
    std::vector<int> Factors = {2, 3};
    ASSERT_EQ(primeFactorize(6), Factors);
}

TEST(PrimeFactors, FactosOf7)
{
    std::vector<int> Factors = {7};
    ASSERT_EQ(primeFactorize(7), Factors);
}

TEST(PrimeFactors, FactosOf8)
{
    std::vector<int> Factors = {2, 2, 2};
    ASSERT_EQ(primeFactorize(8), Factors);
}

TEST(PrimeFactors, FactosOf9)
{
    std::vector<int> Factors = {3, 3};
    ASSERT_EQ(primeFactorize(9), Factors);
}

TEST(PrimeFactors, FactosOf10)
{
    std::vector<int> Factors = {2, 5};
    ASSERT_EQ(primeFactorize(10), Factors);
}

TEST(PrimeFactors, FactosOf12)
{
    std::vector<int> Factors = {2, 2, 3};
    ASSERT_EQ(primeFactorize(12), Factors);
}

TEST(PrimeFactors, FactosOf15)
{
    std::vector<int> Factors = {3, 5};
    ASSERT_EQ(primeFactorize(15), Factors);
}

TEST(PrimeFactors, FactosOf25)
{
    std::vector<int> Factors = {5, 5};
    ASSERT_EQ(primeFactorize(25), Factors);
}

TEST(PrimeFactors, FactosOf49)
{
    std::vector<int> Factors = {7, 7};
    ASSERT_EQ(primeFactorize(49), Factors);
}

TEST(PrimeFactors, FactosOf169)
{
    std::vector<int> Factors = {13, 13};
    ASSERT_EQ(primeFactorize(169), Factors);
}

TEST(PrimeFactors, FactosOfBigCompoundNumber)
{
    std::vector<int> Factors = {2, 3, 5, 7, 11, 13, 17, 19};
    ASSERT_EQ(primeFactorize(2*3*5*7*11*13*17*19), Factors);
}

TEST(PrimeFactors, FactosOfBigPrimeNumber)
{
    std::vector<int> Factors = {15485863};
    ASSERT_EQ(primeFactorize(15485863), Factors);
}
