#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push();
void pop();
void display();
void peek();

void main() {
    int ch;
    printf("1. Push \n2. Pop \n3. Display \n4. Peek \n5. End\n");

    do {
        printf("Enter choice: \n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("Program ended.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (ch != 5);
}

void push() {
    int val;
    if (top == MAX - 1) {
        printf("Stack is full!\n");
    } else {
        printf("Enter element to push: \n");
        scanf("%d", &val);
        top++;
        stack[top] = val;
        printf("Element pushed: %d\n", val);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Element popped: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: \n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Topmost element is: %d\n", stack[top]);
    }
}
