// // /*Analyze if the stack isempty, isfull, and if elements are present then return top element in the stack using templates
// // and also program push and pop operation in stack*/

// // /*#include <bits/stdc++.h>
// // using namespace std;

// // template <typename T>
// // class Stack {
// // public:
// //     vector<T> st; 
// //     int maxSize; 

// //     Stack(int size) : maxSize(size) {}

// //     bool isEmpty() {
// //         return st.empty();
// //     }

// //     bool isFull() {
// //         return st.size() == maxSize;
// //     }

// //     void push(const T& element) {
// //         if (isFull()) {
// //             cout << "Stack overflow. \n";
// //         } else {
// //             st.push_back(element);
// //         }
// //     }

// //     void pop() {
// //         if (isEmpty()) {
// //             cout << "Stack underflow.\n";
// //         } else {
// //             st.pop_back();
// //         }
// //     }

// //     T top() {
// //         if (isEmpty()) {
// //             cout << "Stack is empty. \n";
// //             return T(); 
// //         } else {
// //             return st.back();
// //         }
// //     }
// // };

// // int main() {
// //     Stack<int> s(5);

// //     s.push(10); 
// //     s.push(20); 
// //     s.push(30); 

// //     cout << "Top element: " << s.top() << endl; 
// //     s.pop(); 
// //     cout << "Top element after pop: " << s.top() << endl;
// //     cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl; 
// //     cout << "Is stack full? " << (s.isFull() ? "Yes" : "No") << endl; 

// //     return 0;
// // }



// // */
// // // // develop a program for implementation of power function and determine that complexity should be o(log n) 
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // double func(double a, int b) {
// // //     // Handle the case when the exponent is 0
// // //     if (b == 0) {
// // //         return 1;
// // //     }

// // //     // Convert b to positive for calculations and remember if it's negative
// // //     bool flag = b < 0;
// // //     b = abs(b);
    
// // //     // Recursive call to calculate the power
// // //     double n = func(a, b / 2);
    
// // //     // Compute the result based on even or odd exponent
// // //     double result;
// // //     if (b % 2 == 0) {
// // //         result = n * n;
// // //     } else {
// // //         result = a * n * n;
// // //     }

// // //     // If the original exponent was negative, return the reciprocal
// // //     if (flag) {
// // //         return 1 / result;
// // //     } else {
// // //         return result;
// // //     }
// // // }

// // // int main() {
// // //     cout << " power function: "<< func(4, -6) << endl; 
// // //     cout << " power function: "<<func(-2, 6) << endl;
// // //     cout << " power function: "<<func(4, 2) << endl;
// // //     cout << " power function: "<<func(-4, 4) << endl;
// // //     return 0;
// // // }

// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int max_score(vector<int> a ,vector<int> b, int maxSum) {
// // //     int i = 0, j = 0;
// // //     int currentSum = 0;
// // //     int maxScore = 0;

// // //     // Take elements from stack a until reaching maxSum
// // //     while (i < a.size() && currentSum + a[i] <= maxSum) {
// // //         currentSum += a[i];
// // //         i++;
// // //     }

// // //     // Set the initial maxScore to the number of elements taken from a
// // //     maxScore = i;

// // //     // Now, try to take elements from stack b
// // //     while (j < b.size() && (i >= 0)) {
// // //         currentSum += b[j];
// // //         j++;

// // //         // Remove elements from a if the currentSum exceeds maxSum
// // //         while (i > 0 && currentSum > maxSum) {
// // //             i--;
// // //             currentSum -= a[i];
// // //         }

// // //         // If the currentSum is within maxSum, update maxScore
// // //         if (currentSum <= maxSum) {
// // //             maxScore = max(maxScore, i + j);
// // //         }
// // //     }

// // //     return maxScore;
// // // }

// // // int main() {
// // //     vector<int> a = {4, 2, 4, 6, 1};
// // //     vector<int> b = {2, 1, 8, 5};
// // //     int maxSum = 10;
    
// // //     cout << "Maximum Score: " << max_score(a, b, maxSum) << endl; // Output: 4

// // //     return 0;
// // // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // class Node {
// // public:
// //     int data;
// //     Node* next;
// //     Node* prev;
    
// //     Node(int value) : data(value), next(nullptr), prev(nullptr) {}
// // };

// // class DoublyLinkedList {
// // public:
// //     Node* head;
// //     Node* tail;
    
// //     DoublyLinkedList() : head(nullptr), tail(nullptr) {}

// //     void insertAtBeginning(int value);
// //     void insertAtEnd(int value);
// //     void deleteAtBeginning();
// //     void deleteAtEnd();
// //     void printList();
// // };

// // // Insert at the beginning
// // void DoublyLinkedList::insertAtBeginning(int value) {
// //     Node* newNode = new Node(value);
// //     if (!head) {
// //         head = tail = newNode;
// //     } else {
// //         newNode->next = head;
// //         head->prev = newNode;
// //         head = newNode;
// //     }
// // }

// // // Insert at the end
// // void DoublyLinkedList::insertAtEnd(int value) {
// //     Node* newNode = new Node(value);
// //     if (!tail) {
// //         head = tail = newNode;
// //     } else {
// //         tail->next = newNode;
// //         newNode->prev = tail;
// //         tail = newNode;
// //     }
// // }

// // // Delete at the beginning
// // void DoublyLinkedList::deleteAtBeginning() {
// //     if (!head) return;
// //     Node* temp = head;
// //     if (head == tail) {
// //         head = tail = nullptr;
// //     } else {
// //         head = head->next;
// //         head->prev = nullptr;
// //     }
// //     delete temp;
// // }

// // // Delete at the end
// // void DoublyLinkedList::deleteAtEnd() {
// //     if (!tail) return;
// //     Node* temp = tail;
// //     if (head == tail) {
// //         head = tail = nullptr;
// //     } else {
// //         tail = tail->prev;
// //         tail->next = nullptr;
// //     }
// //     delete temp;
// // }

// // // Print the list
// // void DoublyLinkedList::printList() {
// //     Node* temp = head;
// //     while (temp) {
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }
// //     cout <<endl;
// // }


// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node(int d){
//         this->data=d;
//         this->next=NULL;
//     }
// };

// void insert_head(node* &head,int d){
//     node *n = new node(d);
//     n->next=head;
//     head=n;
// }

// void insert_tail(node* &tail,int d){
//     node *n=new node(d);
//     tail->next=n;
//     tail=n;
// }

// void insert_at_pos(node* &head,node* &tail,int data,int pos){
//     if(pos==1){
//         insert_head(head,data);
//     }
//     node* temp=head;
//     int count=1;
//     while (count<pos-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     if (temp->next==NULL)
//     {
//         insert_tail(tail,data);
//     }
//     node* n=new node(data);
//     n->next=temp->next;
//     temp->next=n;
// }

// int dlt(node* &head,int pos){
//     node* temp=head;
//     if (head==NULL) return 1;
//     if (pos==1)
//     {
//         head=temp->next;
//         free (temp);
//     }

//     int c=1;
//     while (c<pos-1)
//     {
//         temp=temp->next;
//         c++;
//     }
//     temp->next=temp->next->next;
// 3    free(temp->next);
// }

// void dply(node* head){
//     node* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<"  ";
//         temp=temp->next;
//     }   
// }

// int main(){
//     int v1,v2,v3,v4;
//     cout<<"Enter values to enter "<<endl;
//     cin>>v1>>v2>>v3>>v4;
//     cout<<endl;
//     int key;
//     node* node1=new node(v1);
//     node* head=node1;
//     node* tail=node1;
//     insert_head(head,v2);
//     insert_head(head,v3);
//     insert_at_pos(head,tail,100,2);
//     insert_tail(tail,v4);
//     dply(head);
//     dlt(head,1);
//     cout<<endl;
//     dply(head);
//     return 0;
// }

    #include <bits/stdc++.h>
    using namespace std;

    class Node {
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int value) : data(value), next(nullptr), prev(nullptr) {}
    };

    class DoublyCircularLinkedList {
    private:
        Node* head;

    public:
        DoublyCircularLinkedList() : head(nullptr) {}

        // Insert at the beginning
        void insertAtBeginning(int data) {
            Node* newNode = new Node(data);
            if (head == nullptr) {
                newNode->next = newNode->prev = newNode;
                head = newNode;
            } else {
                Node* tail = head->prev;
                newNode->next = head;
                newNode->prev = tail;
                head->prev = newNode;
                tail->next = newNode;
                head = newNode;
            }
        }

        // Insert at the end
        void insertAtEnd(int data) {
            Node* newNode = new Node(data);
            if (head == nullptr) {
                newNode->next = newNode->prev = newNode;
                head = newNode;
            } else {
                Node* tail = head->prev;
                newNode->next = head;
                newNode->prev = tail;
                tail->next = newNode;
                head->prev = newNode;
            }
        }

        // Delete at the beginning
        void deleteAtBeginning() {
            if (head == nullptr) {
                cout << "List is empty!" << std::endl;
                return;
            }
            if (head->next == head) { // Only one node
                delete head;
                head = nullptr;
            } else {
                Node* tail = head->prev;
                Node* temp = head;
                head = head->next;
                head->prev = tail;
                tail->next = head;
                delete temp;
            }
        }

        // Delete at the end
        void deleteAtEnd() {
            if (head == nullptr) {
                cout << "List is empty!" << std::endl;
                return;
            }
            if (head->next == head) { // Only one node
                delete head;
                head = nullptr;
            } else {
                Node* tail = head->prev;
                Node* newTail = tail->prev;
                newTail->next = head;
                head->prev = newTail;
                delete tail;
            }
        }

        // Display the list
        void display() const {
            if (head == nullptr) {
                cout << "List is empty!" << endl;
                return;
            }
            Node* temp = head;
            do {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
            cout << endl;
        }
    };

    int main() {
        DoublyCircularLinkedList dll;

        dll.insertAtEnd(10);
        dll.insertAtEnd(20);
        dll.insertAtBeginning(5);

        cout << "List after insertions: ";
        dll.display();

        dll.deleteAtEnd();
        dll.deleteAtBeginning();

        cout << "List after deletions: ";
        dll.display();

        return 0;
    }


