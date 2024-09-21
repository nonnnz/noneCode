## 1. `upper_bound` and `lower_bound`
Both `upper_bound` and `lower_bound` are functions from the C++ Standard Template Library (STL) used with sorted containers (e.g., `vector`, `array`, `set`). They help in efficiently finding positions related to a value in a sorted range.

- **Prototype**: 
  ```cpp
  iterator lower_bound(iterator first, iterator last, const T& val);
  ```
  ```cpp
  #include <iostream>
  #include <vector>
  #include <algorithm>

  int main() {
      std::vector<int> v = {1, 2, 4, 6, 6, 8};

      auto it = std::lower_bound(v.begin(), v.end(), 6);
      std::cout << "Lower bound index for 6: " << (it - v.begin()) << std::endl;
      return 0;
  }

  ```
## 2. `ceil()`
### Issue:
When using the `ceil()` function in C++, the output sometimes results in floating-point numbers in scientific notation (e.g., `1e+09`), which isn't expected when you're working with integers.

To fix this, instead of relying on ceil() and converting to a float, you can use integer arithmetic to calculate the ceiling of a division. A common trick is to use (n + y - 1) / y to achieve the same result as ceil(n / y) using integers.

or n % y == 0: This checks if n is divisible by y (i.e., no remainder). If it is, the result is n / y.

n / y + 1: If there's a remainder, we need to round up, so we add 1 to the quotient.