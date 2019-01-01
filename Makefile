TARGET = strToInt
OBJ = strToInt.o stringLength.o stringToInt.o
CPP = strToInt.cpp stringLength.cpp stringToInt.cpp

all:	$(TARGET)
	@echo "Done."

$(TARGET):	$(OBJ)
	g++ -o $@ $^

$(OBJ):	$(CPP)
	g++ -c $^

exec:	
	@./$(TARGET)

clean:
	rm $(TARGET) $(OBJ)

	
