#include <stdlib.h>

#include <time.h>
#include "Customer.h"

void initCustomer(Customer * cust){
    cust->time_waiting = (unsigned) time(NULL);
    cust->processing_time = 0;
    cust->status = Customer_waiting;
}

Customer * genCustomer(void){
    Customer * cust = (Customer *)malloc(sizeof(Customer));
    initCustomer(cust);
    return cust;
}
