dependencys = static_vector.o main.o
all: out

out: $(dependencys)
	g++ -o out -I.  $(dependencys)

%.o: %.cpp
	g++ -g -I. -c $<


clean:
	rm *.o out

