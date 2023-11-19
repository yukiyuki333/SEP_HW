#include <stdio.h>
#include "awk_sem.h"

main()
{
    int i = 0;
    int sema_2 = get_sem(".", 'B');
    int sema_3 = get_sem(".", 'C');
    // *** please insert proper semaphore initialization here
    do
    {
        // *** this is where you should place semaphore
        P(sema_2);

        printf("P222222222 is here\n");
        i++;
        // *** this is where you should place semaphore
        V(sema_3);

    } while (i < 100);
}