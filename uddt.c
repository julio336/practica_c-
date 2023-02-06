#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
    /* data */
    char Name[50];
    char Id[10];
    float Credit;
    char Address[100];
};

int main(int argc, char const *argv[])
{
    /* code */
    struct client client1 = {0};
    strcpy(client1.Name, "Camlilo Valencia");
    strcpy(client1.Id, "000000001");
    client1.Credit = 1000000.0;
    strcpy(client1.Address, "Calle1, Carrera 1 Ciudad Bolivar");
    printf("The client name is: %s \n", client1.Name);
    printf("The client name is: %s \n", client1.Id);
    printf("The client name is: %f \n", client1.Credit);
    printf("The client name is: %s \n", client1.Address);

    return 0;
}

