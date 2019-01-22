#include <iostream>
using namespace std;

int main() {
    
    /*
    
    Since all possible solutions can be solved the following way
    
    
    |||     |||
    |||     |c|
    |||  == |c| 
    |||     |c|
    |||     |c|
    
    I've concluded that the maximun number of cuts will always be (--N)*(--M)
    
    */
    
    int TestCases;
    int N, M;
    
    
    std::cin >> TestCases;
    
    
    while(TestCases>0){
        
        cin >> N >> M;
        std::cout << (--N)*(--M) << std::endl;
        --TestCases;
    }
    
    
	// your code goes here
	return 0;
}
