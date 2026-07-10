CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

TARGET = Snake

OBJ = game.o board.o referee.o apples.o snake.o

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f *.o *.out $(TARGET)