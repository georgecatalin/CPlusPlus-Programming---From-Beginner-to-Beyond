#include <iostream>
#include <vector> //always use this include when using vectors with STL

using namespace std;


int main()
{
    //different methods to define a vector

    //vector<char> vowels; // vector is defined , but has no element in it. These elements have to be added with .push_back()
    //vector<char> vowels(5); // vector is defined with 5 elements , and each of the elements is initialized at 0
    vector<char> vowels {'a','e','i','u','o'};
    
    cout<<vowels[0]<<endl;
    cout<<vowels[4]<<endl;
    
    //vector<int> test_scores; //vector is defined, does not contain any element
    //vector<int> test_scores(3); //vector is defined, it contains three elements, each of them is initialized to 0
    //vector<int> test_scores(3,100); // vector is defined and it contains three elements , each of them initialized to 100
    
    vector<int> test_scores {20,33,42};

    cout<<"Reading a vector in an array-syntax:"<<endl;
    cout<<"The first element of an array is: "<<test_scores[0]<<endl;
    cout<<"The second element of an array is: "<<test_scores[1]<<endl;
    cout<<"The third element of an array is: "<<test_scores[2]<<endl;    
    
    cout<<"================================================================"<<endl;
    cout<<"Reading a vector in a vector syntax:"<<endl;
    cout<<"The first element of the vector is: "<<test_scores.at(0)<<endl; //this method has the advantage that it verifies the bound limit
    cout<<"The second element of the vector is: "<<test_scores.at(1)<<endl;
    cout<<"The third element of the vector is: "<<test_scores.at(2)<<endl;
    cout<<endl<<"There are "<<test_scores.size()<<" elements in the vector."<<endl;
    
    
//    cout<<"\nEnter three test scores"<<endl;
//    cin>>test_scores.at(0);
//    cin>>test_scores.at(1);
//    cin>>test_scores.at(2);
//    
//    cout<<"The updated vector is: "<<endl;
//    cout<<test_scores.at(0)<<endl;
//    cout<<test_scores.at(1)<<endl;
//    cout<<test_scores.at(2)<<endl;

      cout<<"\nEnter a new test score to add to the vector."<<endl;
      int test_score{0}; //a good practice is to initialize variables upon declaration
      
      cin>>test_score;
      
      test_scores.push_back(test_score);
      cout<<"\nEnter a new test score to add to the vector."<<endl;
      cin>>test_score;
      test_scores.push_back(test_score);
      
      cout<<"There are now "<<test_scores.size()<<" in the vector."<<endl;
      cout<<test_scores.at(0)<<endl;
      cout<<test_scores.at(1)<<endl;
      cout<<test_scores.at(2)<<endl;
      cout<<test_scores.at(3)<<endl;
      cout<<test_scores.at(4)<<endl;
      
      // bound checking
      
      //cout<<test_scores.at(10)<<endl; //it throws an exception with a clue of what is going on
      cout<<test_scores[10]<<endl;
      
      // Example of a 2d vector
      vector<vector<int>> movie_ratings 
      {
          {100,99,22}, //first reviewer ratings
          {22,3,34},   //second reviewer ratings
          {234,22,211} //third reviewer ratings
      };
      
      cout<<"\nHere are the movie ratings of the first reviewer using ARRAY SYNTAX:"<<endl;
      cout<<movie_ratings[0][0]<<endl;
      cout<<movie_ratings[0][1]<<endl;
      cout<<movie_ratings[0][2]<<endl<<endl;
      
      cout<<"\nHere are the movie ratings of the first reviewer using VECTOR SYNTAX:"<<endl;
      cout<<movie_ratings.at(0).at(0)<<endl;
      cout<<movie_ratings.at(0).at(1)<<endl;
      cout<<movie_ratings.at(0).at(2)<<endl;
      
    return 0;
}