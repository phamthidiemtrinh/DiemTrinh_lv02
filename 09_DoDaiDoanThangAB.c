#include <stdio.h>
#include <math.h>;
void main()
{
    float x1,x2,y1,y2,a;
    printf("nhap toa do A va B \n");
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("do dai doan AB=%f",a);
}
