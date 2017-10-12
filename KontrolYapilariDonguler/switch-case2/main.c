#include <stdio.h>

int main() {

	char operator;
	double firstNumber, secondNumber;

	printf("Enter an operator (+, -, *,): ");
	scanf("%c", &operator);

	printf("Enter two operands: ");
	scanf("%lf %lf", &firstNumber, &secondNumber);

	switch (operator)
	{
	case '+':
		printf("%.4lf + %.4lf = %.4lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
		break;

	case '-':
		printf("%.1lf - %.1lf = %.1lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
		break;

	case '*':
		printf("%.1lf * %.1lf = %.1lf \n", firstNumber, secondNumber, firstNumber * secondNumber);
		break;

	case '/':
		printf("%.1lf / %.1lf = %.1lf \n", firstNumber, secondNumber, firstNumber / firstNumber);
		break;

		// operator doesn't match any case constant (+, -, *, /)
	default:
		printf("Error! operator is not correct");
	}

	return 0;
}