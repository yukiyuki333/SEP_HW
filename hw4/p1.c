#include <stdio.h>
#include "awk_sem.h"

main()
{
    int i = 0;
    // *** Please insert proper semaphore initialization here
    int sema_1 = create_sem(".", 'A', 0);
    int sema_2 = create_sem(".", 'B', 0);
    int sema_3 = create_sem(".", 'C', 0);
    do
    {
        // *** this is where you should place semaphore
        printf("P1111111111 is here\n");
        i++;

        // *** this is where you should place semaphore
        V(sema_2);
        P(sema_1);
        V(sema_3);
        P(sema_1);

    } while (i < 100);
}