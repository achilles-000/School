#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Function Prototypes*/
int partOne(int a);
void partTwo();
void partThree();

/*
FUNTION: This is a control switch function
it prompts the user for input and based on user input
it then calls the appropriate function to complete the task 
IN: no input parameters
OUT: no return variables
*/
int main(){

	srand(0);

	/*Variables*/
	int x;


	/*User Prompts*/
	printf("1. Q1 \n");
	printf("2. Q2 \n");
	printf("2. Q3 \n");
	printf("4. Exit \n");
	
	/*User Input*/

while (1) {
    scanf("%d", &x);
    if (x >= 1 && x <= 4) {
        if (x == 1) {
            printf("\n%d\n", partOne(x));
			//break;
        } else if (x == 2) {
            partTwo();
			//break;
        } else if (x == 3) {
            partThree();
			//break;
        } else if (x == 4) {
            break;
        }
    } else {
        printf("Must be 1-4, try again.\n");
    }
	printf("\n Enter a number 1-4\n");
}


	/*While the User hasn't entered 5*/

		/*If statement control switch -- 
		*If user input is equal to 1 -> call part one 
		*etc...
		*/

	return 0;

}


/*
FUNTION: Takes in a int as a parameter passed in from main
asks the user for a second number, and an operation, preforms the
given operation on both of the numbers
and returns result back to main to be printed
IN: int operand variable
OUT: int sum variable
*/
int partOne(int a){
	int x;
	char p;


	printf("Enter a number to perform an operation: ");
	scanf("%d", &x);
	printf("Enter an operation, +, -, /, *\n");
	scanf(" %c",  &p);

	if(p == '+' ){
		return(a + x);
	}
	else if(p == '-'){
		return(a - x);

	}
	else if(p == '/'){
		return(a / x);

	}
	else if(p == '*'){
		return(a * x);

	}
	else printf("\n Error");
	
	
}

/*
FUNTION: Allocating mem for an array (using malloc) given by the user,
populating it with random values, and outputing it
IN: N/A
OUT: N/A
*/
void partTwo(){
	/*you can use a function called bzero to intialise all 
	the array to zeros when you create it*/
	int x;
	int *array;

	printf("Enter a number to be the size of the array: ");
	scanf("%d", &x);
	
	array = (int*)malloc(sizeof(int) * x);

	if(array == NULL){
		printf("\nMemory failed to allocate.");
		exit(1);
	}
	else {
		//printf("\nMemory allocated.");
		for(int i = 0; i < x; i++ ){
			array[i] = rand();

		}
	}
	for(int i = 0; i < x; i++){
		printf("\nAt index: %d The value is %d: \n", i, array[i]);
	}

	free(array);

}
/*
FUNTION: Allocating mem for a 2D array (using malloc) given by the user,
populating it with random values, and outputing it
IN: N/A
OUT: N/A
*/
void partThree(){

	/*you can use a function called bzero to intialise all 
	the array to zeros when you create it*/


	int row = 3, collumn = 4;

	printf("Enter number of rows: ");
	scanf("%d", &row);
	printf("Enter number of collumns: ");
	scanf("%d", &collumn);

    int* ptr = malloc((row * collumn) * sizeof(int));

    for (int i = 0; i < row * collumn; i++)
        ptr[i] = rand();


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < collumn; j++)
            printf("%d ", ptr[i * collumn + j]);
        printf("\n");
    }

    free(ptr);

	
}



