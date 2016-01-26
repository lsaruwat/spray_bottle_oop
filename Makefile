CXXFLAGS=-Iinclude -std=c++11

all : bin/main

bin/main : tmp/main.o tmp/Bottle.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

tmp/main.o : src/main.cpp include/Bottle.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Bottle.o : src/Bottle.cpp include/Bottle.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean :
	/bin/rm -rf tmp/* bin/*



