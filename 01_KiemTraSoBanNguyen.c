#include <stdio.h>
void main ()
{
    float so;
    int kiemTra;
    printf("nhap so can kiem tra : \n");
    scanf("%f",&so);
    kiemTra=(int)so;
    if (so-kiemTra==0.5) printf("%f là so ban nguyen \n",so);
    else printf("%f khong la so ban nguyen \n",so);
}

