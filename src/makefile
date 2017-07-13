
CC := gcc
CFLAGS := -Wall -Wextra -Wpedantic -Werror -std=c11 -Wno-format

# -Wno-format allows the use of I64u to print long long unsigned integers

PROGRAM := test.exe


SRCS := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SRCS))


$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS)

clean:
	rm -rf $(OBJS)
	rm -rf $(PROGRAM)
