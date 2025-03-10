#include <stdio.h>
int main() 
{
    float AT, PT;
    int L=2;
    float area1 = L * L;               
    float area2 = (L * L) / 2.0;        
    float area3 = (L * L) / 2.0;        
    float area4 = (1.5 * L * L) / 2.0;  
    float area5 = (2.0 * L) * (0.25*L); 
    AT = area1 + area2 + area3 + area4 + area5;
    PT = (2.83*4.0)+(0.5*2.0)+4.0+4.0;
   printf("AT: %.f\n",AT);
    printf("PT: %.f\n", PT);

    return 0;
}