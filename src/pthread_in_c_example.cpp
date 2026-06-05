#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <pthread.h>

#include "demo_compute.cpp"
#include "consts/function_signatures.cpp"


class PThreadInC {
public:


  PThreadInC() {}

  pthread_t createThread(threadFunction func, void* arg) {
      pthread_t thread;

      if (pthread_create(&thread, nullptr, func, arg) != 0) {
          std::cerr << "Failed to create thread\n";
          std::exit(EXIT_FAILURE);
      }

      return thread;
  }

  int run(threadFunction heavyComputation,
          threadFunction mainComputation,
          void *arguments) {

      pthread_t t1 = createThread(heavyComputation, arguments);
      pthread_t t2 = createThread(mainComputation, arguments);

      pthread_join(t1, nullptr);
      pthread_join(t2, nullptr);

      std::cout << "PThreadInC.run:: exit with 0" << std::endl;
      return 0;
  }
};
