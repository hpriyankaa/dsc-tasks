#include <stdio.h>
#include <stdlib.h> 

#define MAX_SIZE 100 

int stack[MAX_SIZE]; 
int top = -1; 
int n; 

void push();
void pop();
void peek();
void display();
int main() {
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    
    printf("1. Push \n2. Pop \n3. Peek \n4. Display \n5.Exit");

    int choice;

    do {
        printf("Enter the operation to perform: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3: 
                peek();
                break;
            case 4:
                display(); 
                break; 
            case 5:
                exit(0);
                break;
            default:
                printf("wrong choice\n");
        }
    } while (choice != 5); 

    return 0;
}

void push() {
    int val; 
    printf("Enter value to insert: ");
    scanf("%d", &val);
    if (top == n - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = val; 
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Value removed is: %d\n", stack[top]);
        top--; 
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top value is: %d\n", stack[top]); 
    }
}
void display(){
    int i;
    for (i=top;i>=0;i--){
        printf("%d", stack[i]);
    }
}
