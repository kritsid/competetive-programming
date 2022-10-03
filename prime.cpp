Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.
  
   
void calculatePrime(bool isPrime[],int num){
    
    for(int i=2;i*i<num;i++){
        if(isPrime[i]==true){
            for(int j=i*i;j<num;j=j*i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=1;i<=num;i++){
        cout<<isPrime[i]<<" ";
    }
    cout<<endl;
}
bool checkPrime(bool isPrime[],int i){
    if(isPrime[i]==true){
        return true;
    }
    return false;
}
vector<int> Solution::primesum(int a) {
    int num=a;
    bool isPrime[a+1];//marking all numbers as prime
    for(int i=1;i<=num;i++){
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    isPrime[2]=true;
    calculatePrime(isPrime,a);
    int x = a-2;
    for(int i=2;i<a;i++){
        if(checkPrime(isPrime,i)){
            if(checkPrime(isPrime,a-i)){
                vector<int>v;
                v.push_back(i);
                v.push_back(a-i);
                return v;
            }
        }
    }
    
}

