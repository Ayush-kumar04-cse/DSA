// # include <stdio.h>

// # define MAX 10

// int stack[MAX];

// int top = -1;
// int isEmpty()
// {
//     return top == -1;
// }

// int isFull()
// {
//     return top == MAX - 1;
// }
// void push(int value)
// {
//     if (isFull())
//     {
//         printf("Stack Overflow !!\n");
//         return;
//     }

//     top++;
//     stack[top] = value;
//     printf("Pushed %d to stack\n", value);
// }
// int pop(){
//     if (isEmpty()){
        
//         printf("Stack Underflow !!\n");
//         return -1;
//     }
//     int value = stack[top];
//     printf("Popped %d from stack\n", value);
//     top--;
//     return value ;
// }

// int peak(){
//     if (isEmpty()){
//         printf("Stack is empty !!\n");
//         return -1;
//     }
//     return stack[top];
// }
// void display(){
//     if(isEmpty()){
//         printf("Stack is empty !!\n");
//         return;
//     }
//     printf("Stack elements are: ");
//     for(int i = top; i >= 0; i--){
//         printf("%d ", stack[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     push(10);
//     push(20);
//     push(30);
//     push(40);
//     push(50);
//     pop();
//     pop();
//     pop();
//     peak();
//     display();
//     return 0;
// }




# include <stdio.h>
# include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

int isEmpty(){
    return top == NULL;
}


int isFull(){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("Stack overflow!!");
        return 1;
    }
    free(temp);
    return 0;
}

void push(int value){

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("Stack overflow!!");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;

}
int pop(){
    if(isEmpty()){
        printf("Stack underflow!! \n");
        return -1;
    }
    struct Node *temp = top;
    top = top->next;
    int val = temp->data;
    free(temp);
    return 0;

}
int peak(){
    if(isEmpty()){
        printf("Stake is emputy\n");
        return -1;
    }
    return top->data;
}

void display(){
    struct Node *p = top;
    while(p!= NULL){
        printf("%d",p->data);
        p = p->next;

    }printf("\n");

}

int main() {
    push(12);
    push(34);
    push(143);
    push(122);
    
    
    

    return 0;
}


