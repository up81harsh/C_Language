#include <stdio.h>
    int main()
    {
        int a = 1;
        	  printf("%d %d  %d %d %d\n", a++, a++, a++,a++,a++);
        a = 1;
              printf("%d %d  %d %d %d\n", a++, a++, a++,++a,a++);
        a = 1;
              printf("%d %d  %d %d %d\n", a++, a++, ++a,++a,a++);
        a = 1;
              printf("%d %d  %d %d %d\n", a++, ++a, ++a,++a,a++);
       return 0;
    }

