// CRUD: Create, Read, Update, Delete
// Create
void create(Customer *customers){
    struct Customer cs;
    // Input name
    printf("Name (lowecase letters): "); getchar();
    scanf("%[^\n]", cs.name); 
    // validation

    // Input age
    printf("Age (0-100): "); getchar();
    scanf("%d", &cs.age); 
    // validation

    // Input cause of death
    printf("Cause of Death (max 255 letters): "); getchar();
    scanf("%[^\n]", cs.reason);
    // validation

    // Input resting place
    printf("Resting Place (max 255 letters): "); getchar();
    scanf("%s", cs.place);
    // validation
    
    // Input resting place
    printf("Resting Place (Pantai, Rooftop, Taman, Bar): "); getchar();
    scanf("%s", cs.r.room);
    // validation

    // Add to struct customers
    Customer *newCust = (Customer*)malloc(sizeof(Customer));
    strcpy(customers[idxC].name, cs.name);
    customers[idxC].age = cs.age;
    strcpy(customers[idxC].reason, cs.reason);
    strcpy(customers[idxC].place, cs.place);
    strcpy(customers[idxC].r.room, cs.r.room);
    idxC++;

    puts("Welcome to Hotel del Jojo");
}

// Read
void read(Customer *customers, int n){
    printf("|   | ID   | Name  | Age | Room   |\n");
    printf("|---|------|-------|-----|--------|\n");
    
    for (int i = 0; i < n; i++){
        printf("| %d | %-s | %-5s | %-3d | %-6s |\n", i+1, customers[i].id, customers[i].name, customers[i].age, customers[i].r.room);
    }
    printf("\n");
}

// Update
void update(){

}

// Delete
void deleteData(){

}

