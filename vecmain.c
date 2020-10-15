/* Custom Library Imports */
#include "veclib.h"

/* Function for taking input. */
void inputVector(vector vecA) {
	printf("Enter four space seprated values for the vector in R^4:\n");
	for (int i=0;i<4;i++)
		scanf("%f",&vecA[i]);
}

/* Print vector */
void print(vector vecA) {
	printf("[ ");
	for (int i=0;i<4;i++)
		printf("%f ",vecA[i]);
	printf("]");
	printf("\n");
}

/* Main Function */
int main() {
	/* Vector Declaration */
	vector vecA, vecB, vecC;
	/* Input Vector 1 */
	inputVector(vecA);
	/* Input Vector 2 */
	inputVector(vecB);

	add(vecA, vecB, vecC);
	printf("Addition of two vectors:\n");
	print(vecC);

	/* Norm of two vectors*/
	float normv = norm(vecA, vecB);
	printf("norm of two vectors: %f\n", normv);	

	/* Dot product of two vectors */
	float dotp = dotprod(vecA, vecB);
	printf("Dot product of two vectors: %f\n", dotp);

	return 0;
}