#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float weight;
} member_t;

void add_member(member_t *members, int *num_members) {
    printf("Enter member name: ");
    scanf("%s", members[*num_members].name);
    int i;
    printf("Enter member age: ");
    scanf("%d", &members[*num_members].age);
    
    printf("Enter member weight: ");
    scanf("%f", &members[*num_members].weight);
    
    (*num_members)++;
    printf("Member added successfully!\n\n");
}

void display_members(member_t *members, int num_members) {
    if(num_members == 0) {
        printf("No members to display.\n\n");
        return;
    }
    
    printf("Name\tAge\tWeight\n");
    
	for( i = 0; i < num_members; i++) {
        printf("%s\t%d\t%.2f\n", members[i].name, members[i].age, members[i].weight);
    }
    printf("\n");
}

void update_member(member_t *members, int num_members) {
    char search_name[50];
    printf("Enter member name to update: ");
    scanf("%s", search_name);
    
    int found = 0;
    for(int i = 0; i < num_members; i++) {
        if(strcmp(search_name, members[i].name) == 0) {
            printf("Enter updated member age: ");
            scanf("%d", &members[i].age);
            
            printf("Enter updated member weight: ");
            scanf("%f", &members[i].weight);
            
            found = 1;
            printf("Member updated successfully!\n\n");
            break;
        }
    }
    
    if(!found) {
        printf("Member not found.\n\n");
    }
}

void delete_member(member_t *members, int *num_members) {
    char search_name[50];
    printf("Enter member name to delete: ");
    scanf("%s", search_name);
    
    int found = 0;
    for(int i = 0; i < *num_members; i++) {
        if(strcmp(search_name, members[i].name) == 0) {
            memmove(&members[i], &members[i+1], (*num_members - i - 1) * sizeof(member_t));
            (*num_members)--;
            found = 1;
            printf("Member deleted successfully!\n\n");
            break;
        }
    }
    
    if(!found) {
        printf("Member not found.\n\n");
    }
}

int main() {
    member_t members[100];
    int num_members = 0;
    int choice;
    
    while(1) {
        printf("\t\t\xdb\xdbGym management system\n");
        printf("---------------------\n");
        printf("1. Add member\n");
        printf("2. Display all members\n");
        printf("3. Update member\n");
        printf("4. Delete member\n");
        printf("5. Exit\n\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        
        switch(choice) {
            case 1:
                add_member(members, &num_members);
                break;
            case 2:
                display_members(members, num_members);
                break;
            case 3:
                update_member(members, num_members);
                break;
            case 4:
                delete_member(members, &num_members);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }
    
    return 0;
}

