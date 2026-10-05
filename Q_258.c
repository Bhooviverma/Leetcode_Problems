int addDigits(int num) {
    int rem, rev=0;
    if(num==0)
return 0;
else if (num>0 && num<=2147483647)
{
    while(num!=0){
        rem=num%10;
        rev=rev+rem;
        num=num/10;
    }
    if(rev<10)
    return rev;
    else
   return addDigits(rev);
}
else
return 0;
}
