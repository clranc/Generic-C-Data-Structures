#include <stdlib.h>

#include "Customer.h"

void initCustomer(Customer * cust){
    cust->time_waiting = 0;
    cust->processing_time = 0;
    cust->status = Customer_waiting;
}

Customer * genCustomer(void){
    Customer * cust = (Customer *)malloc(sizeof(Customer));
    initCustomer(cust);
    return cust;
}
