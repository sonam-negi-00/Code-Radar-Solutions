#include <stdio.h>
int num,n;
scanf("%d %d",&num,&n);
int bit =(num>>n)& 1;
printf("%d",bit);


}
