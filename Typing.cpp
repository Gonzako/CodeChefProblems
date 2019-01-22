#include <iostream>
#include <set>
using namespace std;

int timeCount(string palabra, bool alreadyDone){
    
    
    int multiplier = 2;
    bool leftHandLast;
    int resultado = 0;
    
    if(alreadyDone) multiplier = 1;
    
    if(palabra[0]=='d' || palabra[0]=='f'){
        leftHandLast = true;
        
        } else {
        
        leftHandLast = false;
    }
    resultado += multiplier;
    
    for(int c = 1; c<palabra.length(); c++){
        if(palabra[c]=='d' || palabra[c]=='f'){
            if(leftHandLast) resultado+= multiplier*2;
            else resultado += multiplier;
            leftHandLast = true;
            
        } else{
            if(!leftHandLast) resultado+= multiplier*2;
            else resultado += multiplier;
            leftHandLast = false;
            
        }
        
    }
    
    return resultado;
    
}

int main() {
    
    int testCases;
    int numberWords;
    string actWord;
    set<string> letrasAnteriores;
    string currentLine;
    
    cin>> testCases;
    
    while(testCases>0){
        cin>>numberWords;
        int resultado = 0;
        
        while(numberWords>0){
            cin >> actWord;
            
            bool repetido = letrasAnteriores.find(actWord) != letrasAnteriores.end();
            if(!repetido) letrasAnteriores.insert(actWord);
            resultado += timeCount(actWord, repetido);
            numberWords--;
        }
        
        std::cout << resultado << std::endl;
        letrasAnteriores.clear();
        testCases--;
    }
    
    
	// your code goes here
	return 0;
}
