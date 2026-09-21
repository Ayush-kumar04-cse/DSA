# include <stdio.h>

# define MAX 10

int stack[MAX];

int top = -1;
int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX - 1;
}
void push(int value)
{
    if (isFull())
    {
        printf("Stack Overflow !!\n");
        return;
    }

    top++;
    stack[top] = value;
    printf("Pushed %d to stack\n", value);
}
int pop(){
    if (isEmpty()){
        
        printf("Stack Underflow !!\n");
        return -1;
    }
    int value = stack[top];
    printf("Popped %d from stack\n", value);
    top--;
    return value ;
}

int peak(){
    if (isEmpty()){
        printf("Stack is empty !!\n");
        return -1;
    }
    return stack[top];
}
void display(){
    if(isEmpty()){
        printf("Stack is empty !!\n");
        return;
    }
    printf("Stack elements are: ");
    for(int i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    pop();
    pop();
    peak();
    display();
    return 0;
}
