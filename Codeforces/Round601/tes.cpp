#include <iostream> 
#include <utility> 
using namespace std; 
  
int main() 
{ 
    pair <int, char> PAIR1[10] ; 
    pair <string, double> PAIR2 ("GeeksForGeeks", 1.23) ; 
    pair <string, double> PAIR3 ; 
  
    PAIR1[0].first = 100; 
     PAIR1[0].second = 'G' ; 
  
    PAIR3 = make_pair ("GeeksForGeeks is Best",4.56); 
  
    cout <<  PAIR1[0].first << " " ; 
    cout <<  PAIR1[0].second << endl ; 
  
    cout << PAIR2.first << " " ; 
    cout << PAIR2.second << endl ; 
  
    cout << PAIR3.first << " " ; 
    cout << PAIR3.second << endl ; 
  
    return 0; 
} 
