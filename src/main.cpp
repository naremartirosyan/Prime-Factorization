#include <vector>

std::vector<int> primeFactorize(int n)
{
    std::vector<int> Factors = {};
    for(int i = 2; i < n; i++)
    {
        while (n % i == 0 && n != 1)
            {
                Factors.push_back(i);
                n = n/i;
            }
    }
    if(n != 1)
    {
        Factors.push_back(n);    
    } 
    return Factors;
}