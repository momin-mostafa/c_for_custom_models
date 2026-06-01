#include <cstddef>
#include <cstdio>
#include <iostream>
#include <pthread.h>
#include <sys/_pthread/_pthread_t.h>


void* heavyComputation(void* arg){
    for (auto i = 0; i < 500; i++) {
        std::cout << "heavyComputation: " << i << std::endl;
    }
    return NULL;
}

void* mainComputation(void* arg){
    for (auto i = 0; i < 500; i++) {
        std::cout << "mainComputation: " << i << std::endl;
    }
    return NULL;
}

int main() {
    pthread_t thread0;
    pthread_create(&thread0,NULL,heavyComputation,NULL);
    mainComputation(NULL);
    pthread_join(thread0,NULL);
    std::cout << "Code Exiting Successfully" << std::endl;
    return 0;
}
