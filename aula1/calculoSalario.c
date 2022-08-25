#include <stdio.h>

int main() {
    float VH, PD, SB, TD, SL;
    int HT;

    HT=40;
    VH=300.00;
    PD=27;

    SB= (HT*50*VH);
    TD=(PD/100)*SB;

SB=SB-TD;

printf ("o salário bruto eh:%.2f\n",SB);
printf ("o salário liquído eh:%.2f\n", SL);

return 0; 


}
