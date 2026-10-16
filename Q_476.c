int findComplement(int num) {
   int bin=0;
   int temp=num;

   while(temp>0){
    bin=(bin<<1)|1;
    temp=temp>>1;
   } 
   return num^bin;
}
