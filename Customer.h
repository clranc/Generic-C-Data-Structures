#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

typedef enum{
    Customer_waiting,
    Customer_busy,
    Customer_exited
} customer_status;

typedef struct Customer{
    unsigned long time_waiting;
    unsigned long processing_time;
    customer_status status;
} Customer;

void initCustomer(Customer * cust);

Customer * genCustomer(void);

#endif
