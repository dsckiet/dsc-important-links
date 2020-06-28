# Tips & Tricks for Sets 
     
   ### __Set Initialization__
   ```
       set <int> s;
   ```
   
1) <b> Insert an element in set:</b><br>
```
     s.insert(4); 
     s.insert(3); 
     s.insert(6); 
     s.insert(2);  // insert() function adds an element to a set . 
     s.insert(5); 
     s.insert(5);  // only one 5 will be added to the set , Set contains only unique elements. 
     s.insert(1); 
     //Elements in s -> {1,2,3,4,5,6}
```
2) <b>Copy one set to another set:</b><br>
```
     set<int>s1;
     s1=s; 
     //Elements in s1 -> {1,2,3,4,5,6} 
```
3) <b>Delete elements from set:</b><br>
```
     s.erase(0,1) ;
     //  Elements in s -> {3,4,5,6}
``` 
4) <b>To find element equal to given number if not exist then found strictly greater element then given element:</b><br>
```
     auto it = s1.lower_bound(2) ; 
     *it ; // 2 
```

5) <b>To find element strictly greater element then given element:</b><br>
```
     auto it = s1.upper_bound(2) ; 
     *it ; // 3 
```

6) <b>Size of set: </b><br>
```
     s.size(); //4 [Set contains 4 elements]
``` 
7) <b>Resize set: </b><br>
```
     s1.resize(3);
     //Elements in s1 -> {1,2,3}
```  
8) <b>Count the occurence of any element in set:</b><br>
```
     s.count(); //4
```  
9) <b>Delete all elements of a set:</b><br>
```
     s.clear();
     //Elements in s -> {}
```
10) <b>Find the index of a element in a set:</b><br>
```
     auto pos = s1.find(3) ;
     pos - s1.begin() ;  //  2
``` 
11) <b>Check whether set is empty or not:</b><br>
```
     s.empty() ;  // 1 -> True
     s1.empty() ;  //  0 -> False
``` 
