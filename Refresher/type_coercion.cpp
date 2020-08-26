#include <iostream>

int main() {
    int n {100};
    int m {8};
    double p {0.0};
    
    p = n / m;
    std::cout << "Before casting: " << p << "\n";
    
    p = static_cast<double>(n) / m;
    std::cout << "After casting: " << p << "\n";
    
    return 0;
}
