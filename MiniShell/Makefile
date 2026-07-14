CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

TARGET = MiniShell

OBJ = minishell.o

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f *.o *.out $(TARGET)