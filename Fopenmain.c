#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fptr;
    fptr = fopen("Momo.txt", "w+");
    fprintf(fptr, "%s", "Ohhh");
    fclose(demo);

    return 0;
}
