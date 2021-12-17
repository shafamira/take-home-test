#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <customer.h>
#include "customer.h"

// #define FILECUSTOMER "./customer/customer_data.txt";

// prototypes
void import_data_from_file();
void menu();

// struct
struct Customer{
    char id[100];
    char name[100];
    int age;
    char reason[100];
    char place[100];
    int year[3000];
    char idroom[100];
    char room[100];
    int price;
};

Customer customers[100];

// main
int main(){
    int choice;
    menu();
    scanf("%d", &choice);
    do{
       if(choice==1){
           create();
       } else if(choice == 2){
           read();
       } else if (choice == 3){
           update();
       } else if (choice == 4){
           deleteData();
       }
    } while (choice == 5);

    return 0;
}

// menu
void menu(){
    // int choice;
    puts("Hotel del Jojo");
    puts("1. Add new customer\n2. Read data\n3. Update data");
    puts("4. Remove data\n5. Exit");
    printf("\nChoice [1-5] >> ");
}

// void import_data_from_file(){
//     FILE *fcus;
//     struct Customer c;
//     if(fcus == fopen("FILECUSTOMER", "r") == NULL) printf("Error: Can't open file\n");
//     else{
//         while(fscanf(fcus,"%s,%s,%d,%[^,],%[^,],%d\n", c.id, c.name, c.age, c.reason, c.place, c.year, c.idroom)!= EOF){
//             printf("|   | ID   | Name  | Age | Room   |\n");
//             printf("|---|------|-------|-----|--------|\n");
            
//         }
//     }
// }


// // // read
// void readData(){
//     struct Customer cus;
//     printf("|   | ID   | Name  | Age | Room   |\n");
//     printf("|---|------|-------|-----|--------|\n");
//     printf("|   | COO1 | Dodi  | 18  | Pantai |\n");
// }
