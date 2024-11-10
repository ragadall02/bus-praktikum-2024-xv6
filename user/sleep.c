#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: sleep [sec]\n");
        exit(1); 
    }

    int sec = atoi(argv[1]); //konvertiert String zu int mithilfe von atoi 
    sleep(sec * 10); // *10 um die Zeit in Ticks umgerechnet für Genauigkeit

    exit(0);
}
