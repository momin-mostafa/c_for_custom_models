#include <iostream>
template <typename T>
class DemoCompute {
public:
  static void *heavyComputation(void *arg) {
    if (arg == NULL) {
      std::cout << "heavyComputation: arg is NULL" << std::endl;
      return NULL;
    }
    T* data = static_cast<T*>(arg);
    for (auto i = 0; i < 5; i++) {
      std::cout << "heavyComputation: " << i << std::endl;
    }
    (*data) += 10;
    return NULL;
  }

  static void *mainComputation(void *arg) {
    if (arg == NULL) {
      std::cout << "mainComputation: arg is NULL" << std::endl;
      return NULL;
    }
    T *data = static_cast<T*>(arg);
    for (auto i = 0; i < 5; i++) {
      std::cout << "heavyComputation: " << i << std::endl;
    }
    (*data) = (*data) + 10;
    std::cout << "iptr value after mainComputation: " << *data << std::endl;
    std::cout << "------------------------" << std::endl;
    return NULL;
  }
};
