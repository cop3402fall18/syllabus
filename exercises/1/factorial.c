int factorial(int x) {
  if (x <= 0) {
    return 1;
  } else {
    return x * factorial(x - 1);
  }
  // factorial is awesome
}
