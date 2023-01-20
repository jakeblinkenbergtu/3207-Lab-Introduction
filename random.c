randchar() {
  int num = (rand() % 26) + 1;
  char c = num + 64;
  return c;
}