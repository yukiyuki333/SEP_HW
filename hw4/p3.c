#include <stdio.h>
#include "awk_sem.h"

main()
{
    int i = 0;
    // *** please insert proper semaphore initialization here
    int sema_3 = get_sem(".", 'C');
    int sema_1 = get_sem(".", 'A');
    do
    {
        // *** this is where you should place semaphore
        P(sema_3);
        printf("P3333333 is here\n");
        i++;
        // *** this is where you should place semaphore
        V(sema_1);

    } while (i < 200);
}