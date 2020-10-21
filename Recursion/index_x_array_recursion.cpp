int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  if (size == 0)
    return -1;

  if (input[0] == x)
    return 0;


  int index = firstIndex(input + 1, size - 1, x);
  if (index == -1)
    return -1;
  else
    return index + 1;

}

int main() {
  int a[] = {7, 4, 9, 11, -3};
  cout << "index: " << firstIndex(a, 5, 11) << endl;


  return 0;
}