//.write a C program to display the n terms of odd natural numbers and their sum.
int main() {
    int n, i, oddNumber, sum = 0;

    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

   
    for(i = 1; i <= n; i++) {
        oddNumber = 2 * i - 1; 
        printf("%d ", oddNumber);
        sum =sum+oddNumber; 
    }

    printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);

    return 0;
}