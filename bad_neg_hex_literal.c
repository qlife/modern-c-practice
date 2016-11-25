#include<stdio.h>

int main()
{
  unsigned u1 = -0x80000000;
  unsigned u2 = -0xFFFFFFFF;
  unsigned u3 = -0x8000;

  unsigned u4 = -1U;
  unsigned long ul1 = -1UL;
  unsigned long long ull1 = -1ULL;
  
  printf("literal -0x80000000 turns out to %u\t0x%08x\n", u1, u1);
  printf("literal -0xFFFFFFFF turns out to %u\t0x%08x\n", u2, u2);
  printf("literal -0x00008000 turns out to %u\t0x%08x\n", u3, u3);
  printf("literal -1U turns out to %u\t0x%08x\n", u4, u4);
  printf("literal -1UL turns out to %lu\t0x%0lx\n", ul1, ul1);
  printf("literal -1ULL turns out to %llu\t0x%llx\n", ull1, ull1);
}
