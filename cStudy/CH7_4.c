#include <stdio.h>
void strnCpy(char s[], const char t[], int n) {
  int i = 0;
  while (i < n && t[i] != '\0') {
    s[i] = t[i];
    i++;
  }
}

int main() {
  char s[20], t[20];
  int n;
  scanf("%s %s %d",s ,t, &n);
  strnCpy(s, t, n);
  printf("%s\n", s);
  return 0;
}
