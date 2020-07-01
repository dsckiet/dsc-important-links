# Tips & Tricks for Bit Manipulation


1) Left Shift Operator (<<) <br>
   <b> ```(a << n) -> a*2^n [n is power of 2]``` </b>
   
2) Right Shift Operator (>>) <br>
   <b> ```(a >> n) -> a/2^n [n is power of 2]``` </b>

3) Not Operator (~) <br>
   <b> ```Flips all the bits. 0 to 1 or 1 to 0.``` </b>
   
4) Count the number of set bits in number
   * Using in-built function <br>
      <b> ```__builtin_popcount(n)``` </b> <br>
   * By making separate function <br>
      <b>
      ```
      int count=0;
      while(n>0){
         count += (n&1);
         n = (n>>1);
      }
      return count;
      ```
      </b>
          
5) Number of leading zeroes: <b> ```__builtin_clz(x)``` </b><br>
   Number of trailing zeroes : <b> ```__builtin_ctz(x)``` </b> 
      
6) Remove last set bit from number: <br> <b>
   ``` Take & of n and n-1 ``` </b>

7) XOR Swapping: <br>
   <b>
   ```
   a = a^b
   b = a^b //(a^b^b == a)
   a = a^b //(a^b^a == b)
   ```
   </b>
   
8) Extract i-th bit of number using bit-mask: <br>
   <b>
   ```
   First, Create the mask with (1 << i-th) or (2^i)
   and then & with number n.
   ```
   </b>

9) Change string into Lower Case: <br>
   <b>
   ```
   string s = "AbCd";
   for(int i=0;i<s.length();i++){
      s[i] |= ' ';
   }
   cout << s;
   ```
   </b>

10) Change string into Upper Case: <br>
    <b>
    ```
    string s = "AbCd";
    for(int i=0;i<s.length();i++){
       s[i] &= '_';
    }
    cout << s;
    ```
    </b>
  
