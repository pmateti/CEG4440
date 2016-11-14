/* example3.c */

void function(int a, int b, int c) {
   char buffer1[5];
   char buffer2[10];
   int *ret;

   printf("Following addresses are printed just fyi.\n"
	  "&ret %u b2 %u b1 %u a %u b %u c %u\n", 
	  &ret, buffer2, buffer1,& a, & b, & c);

   /* point ret to the address of the location on the run time stack
      containing the return address. */

#if 11
   ret = (int *) (buffer1 + 28);
   /* will also work. Q for you: why 28? */
#else
   ret = &a - 1; 		/* -1 beacuse of int * arithmetic */
#endif

   (*ret) += 10;
}

int main() {
  int x;

  x = 1234567;
  function(1,2,3);
  x = 1;
  printf("%u\n",x);		/* should print 1234567, not 1 */
  return 0;
}

/* -eof- */
