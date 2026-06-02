// #include <cstddef>
// #include <cstdio>


// #include <sys/_pthread/_pthread_t.h>

#include "src/pthread_in_c_example.cpp"

int main() {
  PThreadInC pThreadInC = PThreadInC();
  return pThreadInC.run();
}
