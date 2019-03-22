# Big O Notation
**Big O notation** is a representation which is used to represent the upper bound of execution time of an algorithm.
We usually measure the running time of an algorithm by taking the running time of hotspots in the code i.e nested loops and other time expensive operations.We consider only the time taken by the hotspots because they take a large fraction of the execution time of the program and optimising such parts can increase the efficiency of code.

### Order of Complexities : O($n!$) >> O($2^n$) >> O($n^3$) >> O($n^2logn$) >> O($n^2$) >> O($nlogn$) >> O($nlog(logn)$) >> O($n$) >> O($logn$) >> O(1)

### Average Running time of Complexities
| InputSize     | $n!$                | $2^n$             | $n^2$        | $nlogn$      | $n$         | $logn$       |
|---------------|---------------------|-------------------|--------------|--------------|-------------|--------------|
| 10            | 3.63ms              | $1\mu s$          | $0.1\mu s$   | $0.033\mu s$ | $0.01\mu s$ | $0.003\mu s$ |
| 20            | 77.1 years          | $1ms$             | $0.4\mu s$   | $0.086\mu s$ | $0.02\mu s$ | $0.004\mu s$ |
| 30            | $8.4*10^{15}$ years | $1$ sec           | $0.9\mu s$   | $0.147\mu s$ | $0.03\mu s$ | $0.005\mu s$ |
| 40            |                     | $18.3$  min       | $1.6\mu s$   | $0.213\mu s$ | $0.04\mu s$ | $0.005\mu s$ |
| 50            |                     | $13$ days         | $2.5\mu s$   | $0.282\mu s$ | $0.05\mu s$ | $0.006\mu s$ |
| 100           |                     | $4*10^{13}$ years | $10\mu s$    | $0.644\mu s$ | $0.1\mu s$  | $0.007\mu s$ |
| 1,000         |                     |                   | $1ms$        | $9.966\mu s$ | $1\mu s$    | $0.010\mu s$ |
| 10,000        |                     |                   | $100ms$      | $130\mu s$   | $10\mu$     | $0.013\mu s$ |
| 100,000       |                     |                   | $10s$        | $1.67ms$     | $0.10ms$    | $0.017\mu s$ |
| 1,000,000     |                     |                   | $16.7min$    | $19.93ms$    | $1ms$       | $0.020\mu s$ |
| 10,000,000    |                     |                   | $1.16 days$  | $0.23sec$    | $0.01sec$   | $0.023\mu s$ |
| 100,000,000   |                     |                   | $115.7 days$ | $2.66 sec$   | $0.10sec$   | $0.027\mu s$ |
| 1,000,000,000 |                     |                   | $31.7 years$ | $29.90 sec$  | $1 sec$     | $0.030\mu s$ |

# Problems
Generate the prime numbers from 2 to a number n

## Input
An integer n which is strictly greater than 2.

## Output
The prime numbers from 2 to the number n 

## Algorithms
1. **Brute force algorithm** 
    - Step 1: Take a number from 2 to n
    - Step 2: Check if the number is prime by dividing it with an integer from 2 to $\sqrt{n}$
    - Step 3: If the number is divisible then the number is not prime 
    - Step 4: If the number is not divisible by any other number then the number is prime
    - Step 5: Repeat this for all the integers from 2 to n
    ### Complexity : O(n$\sqrt{n}$)
2. **Sieve Of Eratosthenes**
   - Step 1: Initialise a boolean array of size n with the value true
   - Step 2: Take a number i from the sequence 2 to n and check if array[i] is true
   - Step 3: If array[i] is true then set all positions with index that are multiples of i as false
   - Step 4: Repeat this process for all numbers from 2 to n
    ### Complexity : O(n*log(log(n)))
3. **Dividing by Prime Factors**
    - Step 1: Create an array to store prime numbers and add the value 2 to the array
    - Step 2: Then for a number i in the sequence 3 to n check if i is divisible by by any primes in the array
    - Step 3: If i is not divisible by any number then i is prime and add the value i to the array
    - Step 4: Repeat this for all the numbers in the sequence 3 to n  
    ### Complexity : O(n$\sqrt{n}$)