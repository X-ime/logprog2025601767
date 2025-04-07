#include <stdio.h>
int main()
int opcion;
int  ingredientes;
int  pizza;
printf ("desea pizza vegetariana (si/no):");
scanft ("%d", &opcion);
if (opcion=="si/no") {
printf ("vegetariana ingredientes: pimiento o tofu");
int elige;
scanf elige;
scanft ingredientes;
pizza="vegetariana: con mozarrella,tomate";
}else{
    printf("no vegetariana ingredientes: peperoni, jamon o salmon");
    int elige;
    scanft elige;
    scanft ingredientes;
    pizza="no vegetariana: con mozarrella, tomate";
}
return 0;
}
