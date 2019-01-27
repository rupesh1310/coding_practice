/* Using logical operators */ 
#include <stdio.h>
  int main() {
    int m1, m2, m3, m4, m5, per;

    printf("Enter marks in five subjects\n");
    scanf("%d%d%d%d%d", & m1, & m2, & m3, & m4, & m5);
    per = (m1 + m2 + m3 + m4 + m5) / 500 * 100;

    if (per >= 60)
      printf("first divison\n");
    if ((per >= 50) || (per < 60))
      printf("second  divison\n");
    if ((per >= 40) || (per < 50))
      printf("third divion\n");

    if (per < 40)
      printf("Fail\n");

    return 0;
  }
