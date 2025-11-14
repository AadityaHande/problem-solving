bool checkHarshad(int n) 
{ 
    int sum = 0; 
    for (int temp = n; temp > 0; temp /= 10) 
        sum += temp % 10; 
  
    return (n % sum == 0); 
} 