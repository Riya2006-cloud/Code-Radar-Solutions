// Your code here...
isPrime(num){
    for(i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}