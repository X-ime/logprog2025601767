#include <stdio.h>
int main() {
int peso;
int altura;
int IMC;
printf("deme su peso en KG");
scanf ("%d", &peso);
printf("deme su altura en metros");
scanf ("%d", &altura);
scanf ("%d", &IMC);
if (IMC <=18.4) {
printf("peso bajo");
}else{
if (IMC <=24.9) {
printf("peso normal");
}else{
if (IMC <=29.9) {
printf("sobrepeso");
}else{
if (IMC <=34.9) {
printf("obesidad tipo 1");
}else{
if (IMC <=39.9) {
printf("obesidad tipo 2");
}else{
if (IMC <=40.0) {
printf("obesidad tipo 3");
}
}
}
}
}
}
return 0;
}
