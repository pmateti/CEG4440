/* vulnerable.c */

void main(int argc, char *argv[]) {
  char buffer[512];

  printf("%x\n", buffer);
  if (argc > 1)
    strcpy(buffer,argv[1]);
}
