##################
#1: 1.cpp a.cpp b.cpp
#	g++ -o 1 1.cpp a.cpp b.cpp
#################


cc = g++
prom = 1
deps = a.h b.h
obj = 1.o a.o b.o

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)

#1.o: 1.cpp a.h b.h
#	$(CXX) -c 1.cpp
#a.o: a.cpp a.h
#	$(CXX) -c a.cpp
#b.o: b.cpp b.h
#	$(CXX) -c b.cpp
#上边连续6行可以由下替代
#################
%.o: %.cpp $(deps)
	$(cc) -c $< -o $@
#################

clean:
	rm -rf $(obj) $(prom)


