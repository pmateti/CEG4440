static int x  = 0;


unsigned long get_sp(void) {
   __asm__("movl %esp,%eax");
}

void recurse() {
  char a[1024*1024];
  
  x++;
  printf("x %d sp %x\n", x, get_sp());
  recurse();
}

int main() {
  printf("x %d sp %x\n", x, get_sp());
  recurse();
  return 0;
}
