// vectors         ( 1st container )
// list             ( 2nd container )
// Deque           ( 3rd container )
// Stack (LIFO)    ( 4th container )
// Queue (FIFO)    ( 5th container )
// Priority Queue  ( 6th container )
// Set             ( 7th container )
// Multiset        ( 8th container )
// Unordered set   ( 9th container )
// Map             ( 10th container )
// Multimap        ( 11th container )
// Unordered map   ( 12th container )


#include<bits/stdc++.h>
using namespace std;

int main(){
  
  // pairs  
  
  pair<int,int>p={1,2};// pair syntax
  cout<<"pair"<<endl;
  cout<<p.first<<endl<<p.second<<endl;

  pair<int,pair<int,int>>p1={1,{2,3}}; //nested pair
  cout<<"nested pair"<<endl;
  cout<<p1.first<<endl<<p1.second.first<<endl<<p1.second.second<<endl;
 
  pair<int,int>arr[]={{1,23},{2,46},{3,69}};//mutilpe pair /array of pair.
  cout<<"multiple pair"<<endl;
  cout<<arr[1].first<<endl; 

//Vector (1st)

vector<int>v={1,2,3,4,5};  // vector intialization
vector<int>::iterator it; //use of iterator
cout<<"iterator"<<endl;
for(it=v.begin();it!=v.end();it++){   //begin()-->0 , end() --> last element +1
  cout<<*it<<endl;; // iterator store the the address of element
}
cout<<"auto:-"<<endl; //auto is used to simply the the syntax of iterator.
for(auto it=v.begin();it!=v.end();it++){
  
  cout<<*it<<endl;;
}

v.push_back(6);  //insert the element at the last positionwith duplicate value or address of the element.

cout<<"after push"<<endl;
for(auto it=v.begin();it!=v.end();it++){
  cout<<*it<<endl;
}

v.pop_back();    //remove the element which is present at the last.
cout<<"Pop"<<endl;
for(auto it=v.begin();it!=v.end();it++){
  cout<<*it<<endl;
}

v.emplace_back(7);  //insert the elemet at the last position with the original value..,
cout<<"emplace"<<endl;
for(auto it=v.begin();it!=v.end();it++){
  cout<<*it<<endl;
}

vector<pair<int,int>>vec;
vec.push_back({100,200}); //insertion of value in pair
vec.emplace_back(300,400); // insertion of value in pair using emplace (it store orginal value). 

vector<int>num(5,100); //here 5 is the no. oof iteration and the 100 is the value of itertion.
cout<<"num"<<endl;
for(auto it=num.begin();it!=num.end();it++){
  cout<<*it<<endl;
}
vector<int>num2(6);     // here 6 is the size of vector. and the value  will be default assigh=ned as 0 or any garbage value.

cout<<"num2:"<<endl;
for(auto it=num2.begin();it!=num2.end();it++){
  cout<<*it<<endl;
}
cout<<"each loop"<<endl;
for(auto it:num){  // Each loop 
  cout<<it<<endl;
}

vector<int> vect(num2); //copy of vector
cout<<"vect"<<endl;
for(auto it:vect){
  cout<<it<<endl;
}
 
v.erase(v.begin()+1);  //erase  the element from the given index
cout<<"erase"<<endl;

for(auto it:v){ 
  cout<<it<<endl;
}

vector<int>vect2(2,23);  //insert the vector
cout<<"insert vect2"<<endl;    
for(auto it:vect2){
  cout<<it<<endl;
}

vect2.insert(vect2.begin(),2,11);{           //insert the vector
  cout<<"insert vect2"<<endl;
  for(auto it:vect2){
  cout<<it<<endl;
}
}

vect2.insert(vect2.begin()+2,10,12);  {      // insert the value in the given position with
  cout<<"insert 12 in vect 2"<<endl; 
  for(auto it:vect2){
  cout<<it<<endl;
  }
}

vector<int>copy(2,200);                     //copy the vector in the another vector
  cout<<"copy 200 in vect2"<<endl;
  vect2.insert( vect2.begin(), copy.begin(),copy.end());
  for(auto it:vect2){
    cout<<it<<endl;
  }


  cout<<"size of vect2: "<<endl <<vect.size()<<endl;   // size of the vector 

  vect2.pop_back();   //remove the element
  cout<<"pop"<<endl;

  for(auto it:vect2){   
    cout<<it<<endl;
  }

vect.swap(vect2);// swapping the vector 1 with vector
cout<<"after swap"<<endl;

     for(auto it:vect2);{
      cout<<&(*it)<<endl;

     }
cout<<"Vect2"<<endl;
 for(auto it:vect);{
  cout<<&(*it)<<endl;
}
vect.clear() ;       // clear all elements from  the vector
vect2.clear();
vec.clear();

cout<<v.empty();

//list(2nd)

    list <int>l;   
    l.push_back(10);  //inserting the element in the list
    cout<<"push back"<<endl;
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<endl;
    }
   
     l.emplace_back(20); // emplace back, it insert the direct value of the element in the list 
    cout<<"emplace back"<<endl;{
        for(auto it=l.begin();it!=l.end();it++){
       cout<<*it<<endl;
        }
    }

    l.push_front(30); //insert at beginning of the list 
    cout<<"push front"<<endl;{
        for(auto it=l.begin();it!=l.end();it++){
       cout<<*it<<endl;
        }
    }

    l.emplace_front(40); //insert at beginning of the list with the orginal value.
    cout<<"emplace front"<<endl;{
        for(auto it=l.begin();it!=l.end();it++){
       cout<<*it<<endl;
        }
    }

     
    cout<<"reverse"<<endl;{  //reverse sequence of the list 
        for(auto it=l.rbegin();it!=l.rend();it++){
       cout<<*it<<endl;
        }
    }

    l.clear();              //clear all the element of the list 
    cout<<"clear"<<endl;{
        for(auto it=l.begin();it!=l.end();it++){
       cout<<*it<<endl;
        }
    }

    list<int>l2(2,13);
    l.insert(l.begin(),l2.begin(),l2.end());  //insert at the particular position in the list, it is very cheaper than vector to insert in it(time complexity) 
        cout<<"insert from another list "<<endl;
        for(auto it=l.begin();it!=l.end();it++){
       cout<<*it<<endl;
    }

    
    

   
   
    l2.swap(l);
     
    cout<<"swapping"<<endl;{   // swap the list  with other list 
        for(auto it=l.begin();it!=l.end();it++){
            cout<<*it<<endl;
        }
    }   
        
        
 for(auto it=l2.begin();it!=l2.end();it++){
       cout<<*it<<endl;
        }
    
 


l.push_front(20); //insert at beginning of the list 
    cout<<"emplace back"<<endl;{
        for(auto it=l.begin();it!=l.end();it++)
       cout<<*it<<endl;
        
    }
//l.size();  //size of the list
l.pop_back(); //delete
cout<<"size"<<endl;{
        for(auto it=l.begin();it!=l.end();it++){
       cout<<*it<<endl;
        }
    }
    
    l.clear();//check


//dequeue(3rd);

cout<<"dequeue"<<endl;
deque<int>dq;

dq.push_back(10);  //insert the element
dq.push_back(30);   

cout<<"Push Back "<<endl;  
for(auto it:dq){
    cout<<it<<endl;    
}

cout<<"pop back"<<endl;
dq.pop_back();          //delete the element
for(auto it:dq){
    cout<<it<<endl;
}
cout<<"push front"<<endl;
dq.push_front(20);
    for(auto it:dq){   //insert at the  front
    cout<<it<<endl;
}

cout<<"pop front"<<endl;
dq.pop_front(); //delete at front
for(auto it:dq){
    cout<<it<<endl;
}

//stack(4th)

cout<<"stack"<<endl;
/*stack 
it has main  operations such as:-
top() //used for the topmost element of the stack
empty() //returns true if the stack is empty
pop()  //removes the top most element from the stack.
push() //insert the into the top.
size()  //return the size of the stack
emplace() // insert an object in the container constructing.
swap() //swapping the two stack.
      
    */

//queue(5th)

 cout<<"Queue"<<endl;
 /*Queue 
it has main  operations such as:-
pop()  //removes the top most element from the stack.
push() //insert the into the top.
size()  //return the size of the stack
emplace() // insert an object in the container constructing.
swap() //swapping the two stack. 
empty() //returns true if the stack is empty.      
 */


//priority queue(6th)

cout<<"priority queue"<<endl;
/*Priority Queue
 it has same operation as i mentioned.
 but in this there is concept of min and max heap.

 min heap 
 1-The parent node should be less than other element of the tree.
 */
priority_queue<int,vector<int>,greater<int>>pq;

pq.push(10);
pq.push(20);
pq.push(15);
pq.push(25);
while(!pq.empty()){
    cout<<pq.top();
    cout<<endl;
    pq.pop();
}

priority_queue<int> pq1;
pq1.push(07);
pq1.push(12);
pq1.push(13);
pq1.push(14);

cout<<"max Heap : "<<endl;
while(!pq1.empty()){
  cout<<pq1.top()<<endl;
  pq1.pop();
}


//set  container (7th)
cout<<"set"<<endl;
    set<int> mySet;

    // List of values to insert
    int values[] = {10, 20, 30, 20, 40};

    for (int val : values) {
        auto result = mySet.insert(val);
        if (result.second) {
            // If the insertion was successful, result.second is true
            cout << "Inserted: " << *result.first << std::endl;
        } else {
            // If the element was already in the set, insertion doesn't happen
            cout << "Already exists: " << *result.first << std::endl;
        }


    }

//mutli-set(8th)

cout<<"Multi set"<<endl;
 multiset<int> myMultiset;

    // Inserting elements (including duplicates)
    myMultiset.insert(20);
    myMultiset.insert(10);
    myMultiset.insert(20);
    myMultiset.insert(30);
    myMultiset.insert(20);

    // Iterating over the multiset and printing elements
    for (int elem : myMultiset) {
        cout << elem << " ";
    }
  
    cout << "\nNumber of '20's in the multiset: " << myMultiset.count(20) << std::endl;
   
// unordered set(9th)
    cout<<"Unordered Set"<<endl;
    /*Unordered set (9th)
          insert()      : Adds a new element to the container.
          erase(()      : Removes the element with the specified value.
          find()        : Returns an iterator to the element if found; otherwise, returns an iterator to end().
          size()        : Returns the number of elements in the container.
          empty()       : Checks whether the container is empty.
          bucket_count(): Returns the number of buckets (the size of the underlying hash table).
          max_load_factor(), load_factor(): Get or set the load factor (controls when the container will increase its bucket count and rehash).
    */
   //map(10th)
    cout<<"Map"<<endl;

    /*
    
          insert()    : Inserts a key-value pair into the map. If the key already exists, the insertion is not performed.
          erase()     : Removes the element with the specified key.
          find()      : Finds an element with the specified key and returns an iterator to it. If the key is not found, it returns an iterator to map::end.
          operator[](): Accesses the mapped value associated with the key. If the key does not exist, it inserts a new element with that key.
          size()      : Returns the number of elements in the map.
          empty()     : Checks whether the map is empty.
    
    
    
    */
// multi map(11th)
   cout<<"Multi map";

   /*insert(const value_type& value): Inserts a new element into the container. The value is a pair of key and value. Duplicates are allowed.
erase(const key_type& key): Removes all elements with the specified key.
find(const key_type& key): Finds an element with the specified key. If there are multiple elements with the same key, it returns an iterator to the first such element.
count(const key_type& key): Returns the number of elements with the specified key.
lower_bound(const key_type& key), upper_bound(const key_type& key): Return iterators that bound the range of elements matching a specific key.
equal_range(const key_type& key): Returns a range containing all elements with the given key in the container.
*/
    multimap<int, string> myMultimap;

    // Insert elements (multiple elements can have the same key)
    myMultimap.insert(make_pair(1, "Apple"));
    myMultimap.insert(make_pair(2, "Banana"));
    myMultimap.insert(make_pair(1, "Avocado"));

    // Iterate and print elements
    for (const auto& elem : myMultimap) {
       cout << elem.first << ": " << elem.second << endl;
    }
    // Possible output:
    // 1: Apple
    // 1: Avocado
    // 2: Banana

    // Count elements with key = 1
    cout << "Elements with key = 1: " << myMultimap.count(1) << endl;

//unordered map(12th)
cout<<"unordered map";
/*

     
      insert    : Inserts a new element into the container.
      erase     : Removes an element from the container.
      find      : Searches the container for an element with a given key and returns an iterator to it if found, otherwise it returns an iterator to the end of the container.
      operator[]: Accesses or modifies the mapped value of an element identified with its key.
      size      : Returns the number of elements in the container.
      empty     : Checks if the container is empty.
*/
  unordered_map<string, int> umap;

    // Inserting elements
    umap["Apple"] = 1;
    umap.insert({"Banana", 2});
    umap.insert(make_pair("Cherry", 3));

    // Accessing elements
    cout << "Apple count: " << umap["Apple"] << endl;

    // Checking if key exists
    if (umap.find("Banana") != umap.end()) {
       cout << "Banana found" <<endl;
    }

    // Iterating over all elements
    for (const auto& pair : umap) {
        cout << pair.first << ": " << pair.second << endl;
    }



    return 0;
}










