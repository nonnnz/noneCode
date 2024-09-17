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
