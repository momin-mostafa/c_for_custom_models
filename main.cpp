#include "src/pthread_in_c_example.cpp"
#include <cstddef>
#include <cstdlib>

int *createPointerOfInt() {
  int *iptr = (int *)malloc(sizeof(int));
  *iptr = 0;
  return iptr;
}

float *createPointerOfFloat() {
  float *fptr = (float *)malloc(sizeof(float));
  *fptr = 0.0f;
  return fptr;
}

double *createPointerOfDouble() {
  double *dptr = (double *)malloc(sizeof(double));
  *dptr = 0.0;
  return dptr;
}

int main() {

  PThreadInC pThreadInC = PThreadInC();

  // int *iPtr = createPointerOfInt();
  // float *fPtr = createPointerOfFloat();
  double *dPtr = createPointerOfDouble();
  *dPtr = 42.05;



  // void *selectedPtr = fPtr;

  std::cout << "before run: i: " << *dPtr << std::endl;
  int result = pThreadInC.run(DemoCompute<double>::mainComputation,
                              DemoCompute<double>::heavyComputation, dPtr);
  std::cout << "after run: i: " << *dPtr << std::endl;
  free(dPtr);
  return result;
}
