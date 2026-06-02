CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra

threadInC: src/pthread_in_c_example.cpp
	$(CXX) $(CXXFLAGS) -o threadInC src/pthread_in_c_example.cpp
	./threadInC

main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp
	./main

test: test_suite.cpp
	$(CXX) $(CXXFLAGS) -o run_tests test_suite.cpp -lgtest -lgtest_main -pthread
	./run_tests

clean:
	rm -f main run_tests
