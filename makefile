CC = g++
flag = -std=c++11
t1 = Q1
t2 = Q2
t3 = Q3

all:$(t1).cpp $(t2).cpp $(t3).cpp
	$(CC) $(flag) -c $(t1).cpp $(t2).cpp $(t3).cpp
	$(CC) $(flag) -o $(t1) $(t1).o
	$(CC) $(flag) -o $(t2) $(t2).o
	$(CC) $(flag) -o $(t3) $(t3).o

clean:
	rm -f $(t1) $(t1).o $(t2) $(t2).o $(t3) $(t3).o
