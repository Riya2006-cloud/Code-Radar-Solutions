// Your code here...
int isPrime(int num){
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return 0;
        }
    }
}