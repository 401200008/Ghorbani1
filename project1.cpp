#include <iostream>
using namespace std;

class Math {
public:
    static bool isPrime(int n) {
        if (n <= 1)
            return false;
        
        int divisor = 2;
        
        while (divisor < n) {
            if (n % divisor == 0)
                return false;
                
            divisor++;
        }
        
        return true;
    }
};

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    if (Math::isPrime(n))
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    
    std::cout << "Prime numbers from 1 to " << n << ":" << std::endl;
    for (int i = 1; i <= n; i++) {
        if (Math::isPrime(i))
            std::cout << i << " ";
    }
    
    return 0;
}