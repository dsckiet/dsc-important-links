# Tips & Tricks for Vectors 
     
   ### __Vector Initialization__
   ```
      vector <int> v;
   ```
   
1) <b>Insert an element (At last index) in vector:</b><br>
```
     v.push_back(5); 
     v.push_back(-2);
     v.push_back(5);
     v.push_back(10);
     v.emplace_back(4);  // similar to 'push_back' but it is more faster and it allocates memory directly in container.
     v.emplace_back(1);
     //Elements in v -> {5,-2,5,10,4,1}
```
2) <b>Copy one vector to another vector:</b><br>
```
     vector<int>v1;   
     v1=v; 
     //Elements in v1 -> {5,-2,5,10,4,1} 
```
3) <b>Delete element from vector(from last):</b><br>
```
     v.pop_back();
     //Elements in v -> {5,-2,5,10,4}
``` 
4) <b>Erase all elements from vector:</b><br>
```
     v.erase(v.begin(),v.end());
     //Elements in v -> {}
```
5) <b>Size of vector: </b><br>
```
     v.size(); //0 [Vector is empty]
     v1.size(); //6 [Vector contains 6 elements in it]
``` 
6) <b>Resize vector: </b><br>
```
     v1.resize(5);
     //Elements in v1 -> {5,-2,5,10,4}
```  
7) <b>Find the distance between two iterators:</b><br>
```
     distance(v1.begin(),v1.end()); //5
```  
8) <b>Sort a vector:</b><br>
```
     sort(v1.begin(),v1.end()); 
     //Elements in v1 -> {-2,4,5,5,10}
```  
9) <b>Reverse a vector:</b><br>
```
     reverse(v1.begin(),v1.end());
     //Elements in v1 -> {10,5,5,4,-2}
```  
10) <b>Count the occurence of any element in vector:</b><br>
```
     count(v1.begin(),v1.end(),5); //2
```  
11) <b>Check whether any element is present or not in vector:</b><br>
```
     binary_search(v1.begin(),v1.end(),10); //1 -> Present
     binary_search(v1.begin(),v1.end(),0);  //0 -> Not present
```  
12) <b>Find the index of element in vector:</b><br>
```
     auto itr = find(v1.begin(),v1.end(),4);
     itr - v1.begin(); //3
```  
13) <b>Find only unique elements in vector:</b><br>
```
     First we have to sort the vector then,
     auto itr = unique(v1.begin(),v1.end());
     //Elements in v1 -> {-2,4,5,10,5}
     v1.resize(distance(v1.begin(), itr)); //Resizing the vector to remove elements after iterator
     //Elements in v1 -> {-2,4,5,10} 
```  
14) <b>Function to check that if vector is sorted:</b><br>
```
     is_sorted((v1.begin(),v1.end()) //0 -> False
``` 
15) <b>Function to check that if all elements satisfies the given condition:</b><br>
```
     all_of((v1.begin(),v1.end(), [](int x) { return x>0; }) //0 -> False
     all_of((v1.begin(),v1.end(), [](int x) { return x!=0;}) //1 -> True
```  
16) <b>Function to check that if any element satisfies the given condition:</b><br>
```
     any_of((v1.begin(),v1.end(), [](int x) { return x>0; }) //1 -> True
     any_of((v1.begin(),v1.end(), [](int x) { return x==0;}) //0 -> False
``` 
17) <b>Function to check that if elements not satisfies the given condition:</b><br>
```
     none_of((v1.begin(),v1.end(), [](int x) { return x>0; }) //0 -> False
     none_of((v1.begin(),v1.end(), [](int x) { return x!=0;}) //1 -> True
``` 

 
