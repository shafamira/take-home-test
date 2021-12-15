#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// prototypes
void import_data_from_file();
void menu();
void addNewCus();
void readData();
void updateData();
void removeData();

// main
int main(){
    menu();


    return 0;
}

void menu(){
    int choice;
    puts("Hotel del Jojo");
    puts("1. Add new customer\n2. Read data\n3. Update data");
    puts("4. Remove data\n5. Exit");
    printf("\n Choice [1-5] >>"); scanf("%d", &choice);

    do{
       if(choice==1){

       } else if(choice == 2){

       } else if (choice == 3){

       } else if (choice == 4){

       }
    } while (choice == 5);
    
}