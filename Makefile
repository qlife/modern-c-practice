CFLAGS = -Wall -Werror -std=c11
LIBFLAGS = -lm
EXECS = getting-started level1-1 level1-2 not_eq bad_neg_hex_literal swap_double
CC = clang

all:$(EXECS)

getting-started:getting-started.o


level1-1:level1-1.o


level1-2:level1-2.o


listing1.1:listing1.1.o

not_eq:not_eq.o

bad_neg_hex_literal:bad_neg_hex_literal.o

swap_double: swap_double.o

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf $(EXECS)
