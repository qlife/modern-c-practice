#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

void fors(void) {
  for(size_t i = 10; i; --i) {
    printf("something %zu\n", i);
  }

  for(size_t i = 0, stop = 10; i < stop; ++ i) {
    printf("something else %zu\n", i);
  }

  for(size_t i = 9; i <= 9; --i) {
    printf("something else else %zu\n", i);
  }
	   
}

int main(int argc, char* argv[argc+1]) {
  fors();
  puts("Hello World!\n");
  if (argc > 1) {
    while(true) {
      puts("some programs never stops\n");
    }
  } else {
    do {
      puts("but this does\n");
    } while( false );
  }
  return EXIT_SUCCESS;
}
