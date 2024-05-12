#include<stdio.h>
#include<stdlib.h>

int n, top = -1, *stack;

void push(int x){
	if(top==n) return;
	stack[++top]=x;
}

int pop(){
	if(top==-1) return -1;
	return stack[top--];
}

int peek(){
	if(top==-1) return -1;
	return stack[top];
}

void display(){
	for(int i=top ; i>-1 ; i--) printf("%d ",stack[i]);
	printf("\n\n");
}

int main(){
	
	n = 10;
	
	printf("Initializing  10\n\n");
	
	stack = (int*)malloc(n*sizeof(int));
	
	printf("Pushing elements\n1\n2\n3\n\n");
	
	push(1);
	push(2);
	push(3);
	
	printf("Displaying elements of the stack -\n");
	
	display();
	
	printf("The top is = %d\n\n",peek());
	
	printf("Pop the top = %d\n\n",pop());
	
	printf("Pop the top = %d\n\n",pop());
	
	printf("Displaying stack -\n");
	
	display();
	
	return 0;
}
