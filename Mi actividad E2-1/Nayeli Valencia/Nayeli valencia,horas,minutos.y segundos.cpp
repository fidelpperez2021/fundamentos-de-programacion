#include <conio.h>
#include <stdio.h>

int main()
{
    int h, m, s, total;

    printf( "\n   Introduzca las horas por favor: " );
    scanf( "%d", &h );
    printf( "\n   Introduzca minutos por favor: " );
    scanf( "%d", &m );
    printf( "\n   Introduzca segundos por favor: " );
    scanf( "%d", &s );

    total = h * 3600 + m * 60 + s;

    printf( "\n   desde las 0:0:0 horas han pasado %d segundos.", total );

    getch(); /* Pausa */

    return 0;
}
