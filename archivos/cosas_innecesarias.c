#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
    #include <Windows.h>
    #define suspenso(a) Sleep(a);
#else
    #include <unistd.h>
    #define suspenso(a) usleep(a*1000);
#endif

/*
    ADVERTENCIA:
        Este programa hace unicamente cosas innecesarias.
        No le busque la vuelta.
*/

struct colores{
    int a, b;
    char c[100];
};

int main (){

    struct colores color_es;

    color_es.a = 1;
    strcpy(color_es.c, "Me gustan los trenes");

    if(color_es.a == 1)
        printf("Buenas tardes\n");

    srand(time(NULL));
    int pedrin_o_tal_vez_no = rand() % 31, num;

    char pedrin[20]={'H','o','l','a',',',' ','s','o','y',' ','P','e','d','r','i','n','\0'};

    int largo_pedrin = 0;

    for(int i = 0; pedrin[i] != '\0'; i++)
        largo_pedrin++;

    int esto_es_en_vano = strcmp("Que feo el comando ld", pedrin);

    printf("El numero ganador de la loteria es %d, porque '%s' tiene esa cantidad de caracteres\n", largo_pedrin, pedrin);
    suspenso(4000);

    printf("Y tu numero es...\n");
    suspenso(1000);

    printf("es...\n");
    suspenso(100);

    printf("El numero que te toco es...\n");
    suspenso(2000);

    printf("...\n");
    suspenso(500);

    printf("chan chan\n");
    suspenso(500);

    printf("Soy Jorge Suspenso\n");
    suspenso(1000);

    printf("TU NUMERO ES\n");
    suspenso(3000);

    printf("%d!!!!!\n", pedrin_o_tal_vez_no);
    suspenso(500);

    if(pedrin_o_tal_vez_no == largo_pedrin)
        printf("Ganaste la loteria!!!!!! :D\n");
    else
        printf("Perdiste, no toda la vida es de color rosa...\n");

return 0;
}
