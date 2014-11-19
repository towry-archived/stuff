#include <iostream>
#include <string>

#define BUF_SIZE 1024

int
main() {
  char buf[BUF_SIZE] = {0};
  char *bufp;

  bufp = buf;
  strcpy(buf, "hello world");

  bufp[0] = '#';
  bufp++;
  bufp[0] = 78;
  bufp++;
  bufp[0] = 79;
  bufp++;
  bufp[0] = 80;
  bufp++;
  bufp[0] = 0;
  bufp++;
  bufp[0] = 81;
  bufp++;
  bufp[0] = 82;
  bufp++;
  bufp[0] = 0;

  std::cout << buf << '\n';
  return 0;
}
