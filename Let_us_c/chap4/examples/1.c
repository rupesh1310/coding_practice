/* Using logical operators */ 
#include <stdio.h>
  int main() {
    int m1, m2, m3, m4, m5, per;

    printf("Enter marks in five subjects\n");
    scanf("%d%d%d%d%d", & m1, & m2, & m3, & m4, & m5);
    per = (m1 + m2 + m3 + m4 + m5) * 100 / 500;

    if (per >= 60)
      printf("First divison\n");
    else {
      if (per >= 50)
        printf("Second divison\n");
      else {
        if (per >= 40)
          printf("Third divison\n");
        else
          printf("Fail\n");
      }
    }
    return 0;
  }
