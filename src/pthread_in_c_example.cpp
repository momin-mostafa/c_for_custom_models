#include <iostream>
#include <pthread.h>

class PThreadInC {
public:
  static void *heavyComputation(void *arg) {
    for (auto i = 0; i < 500; i++) {
      std::cout << "heavyComputation: " << i << std::endl;
    }
    return NULL;
  }

  static void *mainComputation(void *arg) {
    for (auto i = 0; i < 500; i++) {
      std::cout << "mainComputation: " << i << std::endl;
    }
    return NULL;
  }

  int run() {
    pthread_t thread0;
    pthread_create(&thread0, NULL, heavyComputation, NULL);
    mainComputation(NULL);
    pthread_join(thread0, NULL);
    std::cout << "Code Exiting Successfully" << std::endl;
    return 0;
  }

  PThreadInC() {}
};



int main() {
  PThreadInC pThreadInC = PThreadInC();
  return pThreadInC.run();
}
