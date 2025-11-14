int getProduct(int n)
{
    int product = 1;

    while (n != 0) 
    {
        product = product * (n % 10);
        n = n / 10;
    }

    return product;
}