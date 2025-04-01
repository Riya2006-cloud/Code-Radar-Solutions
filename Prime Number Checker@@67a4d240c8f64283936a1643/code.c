// Your code here...
int isPrime(int num){
    for(int i=2; i<num; i++){
        if(num==0 || num==1){
            return 0;
        }
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}