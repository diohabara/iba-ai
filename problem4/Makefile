CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

bfs: bfs.cc bucket.h
	$(CXX) $(CXXFLAGS) -o $@ $^

dfs: dfs.cc bucket.h
	$(CXX) $(CXXFLAGS) -o $@ $^

astar: astar.cc bucket.h
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f *.o bfs dfs astar

.PHONY: all clean