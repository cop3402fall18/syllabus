int main(char **argv, int argc) {
  int sum = 0;
  for (int i = 0; i < argc; i++) {
    sum += i;
  }
  printf("%d\n", sum);
  return 0;
}
