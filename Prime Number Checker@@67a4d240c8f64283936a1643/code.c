// Your code here...
int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime

    for (int i = 2; i * i <= num; i++) { // Optimized loop
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}