#include <stdio.h>
#include <string.h>


typedef struct{
    int value;
    NODE *link;
}NODE;

void insert(NODE *node, int val){
    while(node->link!=NULL){
        node = node->link;
    }
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->value = val;
    new->link = NULL;
    node->link = new;
}


void show(NODE *header){
    printf("\n");
    while(header->link !=NULL){
        printf("%d -> ",header->link->value);
    }
}

int main(){
    while("true"){
        int a;
        printf("Enter the choice : ");
        scanf(&a);
        NODE header;
        
        switch (a)
        {
        case 1:
            printf("\n Enter the value : ");
            int val;
            scanf(&val);
            insert(&header, val);
            break;
        case 2:
            show(&header);
        default:
            break;
        }

    }
}