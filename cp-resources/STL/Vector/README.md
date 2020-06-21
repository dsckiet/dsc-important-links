# Tips & Tricks for Vectors 

vector<int>v; //Vector Initialization
     
     v.push_back(5); // Adds an element at last of vector.
     v.push_back(-2);
     v.push_back(5);
     v.push_back(10);
     v.emplace_back(4);  // similar to push_back but it is more faster and it allocates memory directly in container.
     v.emplace_back(1);

     v // {5,-2,5,10,4,1}

      vector<int>v1;
         
      v1=v;  //Copy all elements of vector v to v1.
      v1 // {5,-2,5,10,4,1}    
    
      v.pop_back() // Deletes last element of vector.
      v  // {5,-2,5,10,4}
      
      v.erase(v.begin(),v.end()) // Erase all the elements from first_iterator to last_iterator.
      v // {}

      int a = v1.size() // return number of elements present in vector.
      cout << a  // 6 

      v1.resize() // S is any number which is new size of vector. If S=2 then v={5,-2}.
      v1.resize(5) // {5,-2,5,10,4}
      
      int b = distance(v1.begin(),v1.end()) // If we have two iterators and we want to find the total no. of elements between the two iterators
      cout << b // 5
           
      unique((v1.begin(),v1.end()) // Deletes all the duplicates elements in vector.
      v1 // {5,-2,10,4}
      
      reverse((v1.begin(),v1.end()) // Reverse all vector elements in the given range.
      v1 // {4,10,-2,5}
     
      sort((v1.begin(),v1.end()) // sort vector in given range.
      v1 // {-2,4,5,10}
     
      count((v1.begin(),v1.end(), N ) // Return number of occurences of N.
      int c = count((v1.begin(),v1.end(), 4 )
      cout << c // 1
     
      binary_search((v1.begin(),v1.end(), N) // Search given number N and return 1 if element is present otherwise return 0.
      int d = binary_search((v1.begin(),v1.end(), 10)
      cout << d // 1 
     
      find((v1.begin(),v1.end(), N ) // If element is present then return iterator pointing to that value otherwise iterator points to vector size. 
      auto it=find(v1.begin(),v1.end(),5)
      cout<<it-v1.begin() // 2
    
      int y = all_of((v1.begin(),v1.end(), [](int x) { return x>0; })   // This function checks that if all elements satisfies the given condition then return 1 otherwise 0. 
      cout << y // 0
  
      int k = any_of((v1.begin(),v1.end(), [](int x) { return x<0; })    // This function checks that if any element satisfies the given condition then return 1 otherwise 0. 
      cout << k // 1
     
      int w = none_of((v1.begin(),v1.end(), [](int x) { return x>0; })   // This function returns 1 if none of elements satisfies the given condition else returns 0.
      cout << w // 0
     
     int n = is_sorted((v1.begin(),v1.end())  // Return 1 if given vector is sorted otherwise 0.
     cout << n // 0
