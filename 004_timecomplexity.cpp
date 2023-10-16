//Rate at which the time taken increases with respect to the input size is known as time complexity.

// Every piece of code takes time in terms of Big-O Notaion.

/*
The 3 rules to write time complexity are: 
1) Compute time complexity in terms of worst case scenario.
2) Avoid constants
3) Avoid lower values
*/ 


// QUESTION 1
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        /* code */
    }
}

Time Complexity : O(N^2)

// QUESTION 2
for (int i = 0; i < N; i++)
{
    for (int j = 0; j<=i; j++)
    {
        /* code */
    }
}

Time Complexity : O(N^2)