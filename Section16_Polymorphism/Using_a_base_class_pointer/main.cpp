//USING A BASE CLASS POINTER

/*
To achieve dynamic polymorphism we must have:
* inheritance
* Base class pointer or Base class reference
* virtual functions
* 
* 
* An example of of using dynamic binding, using a base class pointer
* 
*  Account<-Savings<-Trust
*  Account<-Checking
* 
*  Account *p1=new Account(); //p1 is a pointer to an Account object. p1 holds the address of an Account object on the Heap
*  Account *p2=new Savings(); //p2 is a pointer to an Account object. p2 holds the address on a Savings object on the heap
*  Account *p3=new Trust(); //p3 is a pointer to an Account object. p2 holds the address of a Trust object on the heap
*  Account *p4=new Checking(); //p4 is a pointer to an Account object. p4 holds the address of a Checking object on the heap
* 
*  p1->withdraw();  Account::withdraw is appealed to
*  p2->withdraw();  Savings::withdraw is appealed to
*  p3->withdraw();  Trust::withdraw is appealed to
*  p4->withdraw();  Checking::withdraw is appealed to
* 
* delete pointers as good practice
* 
*/

/*
Another example to use dynamic binding
 * 
 *  Account *p1=new Account();
 *  Account *p2=new Savings();
 *  Account *p3=new Trust();
 *  Account *p4=new Checking();
 * 
 *  Account *array[] ={ p1,p2,p3,p4}; //define an array of pointers to Account objects
 * 
 * for (auto i=0;i<4;==i)
 * {
 *   array[i]->withdraw(1000);  //the member function is appeared for each individual class Account::withdraw(); Savings::withdraw()...and so on

 } 
  * 
  * delete pointers
*/ 

/*
 * Another example using dynamic binding and base class pointer
 * 
 *  Account *p1= new Account();
 *  Account *p2=new Savings();
 *  Account *p3=new Trust();
 *  Account *p4=new Checking();
 * 
 *  vector<Account *> my_vector{p1,p2,p3,p4} ;  //define a vector of pointers to account objects
 * 
 * for (auto ptr: my_vector)
 * {
 *  ptr->withdraw(1000); //the functions is appealed as per class specifics
 * } 
 * 
 * delete p1;
 * delete p2;
 * delete p3;
 * delete p4
 * */
 
 






*/