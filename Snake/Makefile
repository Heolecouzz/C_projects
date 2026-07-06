CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

TARGET = ConnectFour

OBJ = ...

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f *.o *.out $(TARGET)