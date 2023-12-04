// Jawad 3/12/2023 CIS-1202 

#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>
T half(T value) {
    static_assert(is_arithmetic<T>::value, "Invalid data type. Use numeric types only.");

    if constexpr (is_floating_point<T>::value) {
        return value / 2.0;
    }
    else if constexpr (is_integral<T>::value) {
        return value / 2;
    }
}

int main() {
    // Testing with different numeric types
    cout << "Half of 3.14 (float): " << half(3.14f) << endl;
    cout << "Half of 6.28 (double): " << half(6.28) << endl;

    cout << "Half of 5 (int): " << half(5) << endl;
    cout << "Half of 10 (long): " << half(10L) << endl;

    // Uncomment the line below to test with a non-numeric type (will cause a static_assert failure)
    // std::cout << "Half of 'A' (char): " << half('A') << std::endl;

    return 0;
}