#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "customer.h"

// prototypes
void import_data_from_file();
void menu();

// struct
struct Room{
    char idroom[50];
    char room[100];
    int price;
};

struct Customer{
    char id[50];
    char name[100];
    int age;
    char reason[100];
    char place[100];
    int year;
    Room r;
};

Customer customers[100];
Room rooms[100];

int idxCustomer = 0;
int idxRoom = 0;

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
    printf("Thank You!\n");

    return 0;
}

// menu
void menu(){
    puts("Hotel del Jojo");
    puts("1. Add new customer\n2. Read data\n3. Update data");
    puts("4. Remove data\n5. Exit");
    printf("\nChoice [1-5] >> ");
}

void import_data_from_file(){
    
}
