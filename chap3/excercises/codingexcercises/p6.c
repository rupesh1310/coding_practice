/* if ages of ram,shyam and ajay are input through the keyboard WAP to determine the youngest of the three. */

#include <stdio.h>
  int main() {
    int r, s, a, young;

    printf("\nEnter age of Ram,Shyam and Ajay:\n");
    scanf("%d\n%d\n%d",&r,&s,&a);

        if (r < s) {
          if (r < a)
            young = r;
          else
            young = a;
        } else {
          if (s < a)
            young = s;
          else
            young = a;
        }
        printf("The youngest of Ram(%d),Shyam(%d) and Ajay(%d) is %d \n" ,r,s,a,young);

          return 0;

        }
