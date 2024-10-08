#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


typedef struct id{
    char name[100];
    char last_name[100];
    int age;
    int birthday_day;
    int birthday_month;
    int birthday_year;
}Id;

int main(void){

    Id customer;
    strcpy(customer.name, "Paul");
    strcpy(customer.last_name, "Dupont");
    customer.age = 40;
    customer.birthday_day = 6;
    customer.birthday_month = 4;
    customer.birthday_year = 1984;

    printf("the customer name %s,last_name %s, age %d, birthday %d/%d/%d, Welcomme\n ",customer.name, customer.last_name, customer.age, customer.birthday_month, customer.birthday_day, customer.birthday_year );
    return 0;
 
    
}