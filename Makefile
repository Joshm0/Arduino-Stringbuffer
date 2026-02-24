CPP = g++
CPPFLAGS = -Wall -g -std=c++11
TARGET = strbuf_test
OBJS = StringBuffer.o TestBuff.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(OBJS)

TestBuff.o : TestBuff.cpp StringBuffer.hpp
	$(CPP) $(CPPFLAGS) -c TestBuff.cpp

StringBuffer.o : StringBuffer.cpp
	$(CPP) $(CPPFLAGS) -c StringBuffer.cpp

clean:
	rm -f $(TARGET) $(OBJS)