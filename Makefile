CFLAGS = -Wall -Werror -std=c11
LIBFLAGS = -lm
EXECS = getting-started level1-1 level1-2 not_eq bad_neg_hex_literal
CC = clang

all:$(EXECS)

getting-started:getting-started.c
	$(CC) $(CFLAGS) $(LIBFLAGS) $< -o $@

level1-1:level1-1.c
	$(CC) $(CFLAGS) $(LIBFLAGS) $< -o $@

level1-2:level1-2.c
	$(CC) $(CFLAGS) $(LIBFLAGS) $< -o $@

listing1.1:listing1.1.c
	$(CC) $(CFLAGS) $(LIBFLAGS) $< -o $@

not_eq:not_eq.c
	$(CC) $(CFLAGS) $(LIBFLAGS) $< -o $@

bad_neg_hex_literal:bad_neg_hex_literal.c
	$(CC) $(CFLAGS) $(LIBFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -rf $(EXECS)
