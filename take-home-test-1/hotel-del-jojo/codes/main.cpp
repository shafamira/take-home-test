#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int idxC = 0;
int idxR = 0;

#include "customer.h"
// main
int main(){
    import_data_from_file();
    int choice;
    menu();
    scanf("%d", &choice);
    do{
       if(choice==1){
           create(customers);
       } else if(choice == 2){
           read(customers, idxC);
       } else if (choice == 3){
        //    update(customers);
       } else if (choice == 4){
        //    deleteData(customers);
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
    // customer file
    FILE *fc = fopen("../customer/customer_data.txt", "r");
    idxC = 0;
    while (fscanf(fc, "%s,%s,%d,%[^,],%[^,],%d,%[^\n]\n", customers[idxC].id, customers[idxC].name, &customers[idxC].age, customers[idxC].reason, customers[idxC].place, &customers[idxC].year, customers[idxC].r.idroom) != EOF){
        idxC++;
    }
    fclose(fc);

    // room file
    FILE *fr = fopen("../room/room.txt", "r");
    idxR = 0;
    while(fscanf(fr, "%s,%s,%d\n", rooms[idxR].idroom, rooms[idxR].room, &rooms[idxR].price) != EOF){
        idxR++;
    }
    fclose(fr);

    for (int i = 0; i < idxC; i++){
        for (int j = 0; j < idxR; j++){
            if(customers[i].r.idroom == rooms[j].idroom){
                strcpy(customers[i].r.room, rooms[j].room);
            }
        }
    }
}

// void import_data_from_file(){
   
// // while(fscanf(fcus,"%s,%s,%d,%[^,],%[^,],%d\n", c.id, c.name, c.age, c.reason, c.place, c.year, c.idroom)!= EOF){

//     FILE *fc = fopen("../customer/customer_data.txt", "r");
//     // while (fscanf(fc, "%s,%s,%d,%[^,],%[^,],%d\n" ){
//     //     /* code */
//     // }
// }

// void readData(){
//     struct Customer cus;
//     printf("|   | ID   | Name  | Age | Room   |\n");
//     printf("|---|------|-------|-----|--------|\n");
//     printf("|   | COO1 | Dodi  | 18  | Pantai |\n");
// }
