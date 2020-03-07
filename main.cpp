#include <iostream>
#include <algorithm> // for random_shuffle
#include <cstdlib>
#include <ctime>
#include <vector>
#include "card.h"
#include "main.hpp"


using namespace std;

void printDeck(vector<Card> &deck) {
  for (int i = 0; i < 52; i++) {
    std::cout << deck[i] << ", ";
  }
  std::cout << std::endl;
}

void deckSort (vector<Card> & deck) {
  /* In this function add the code for answering the Question 1 in the assignment.
  The sorted deck of cards should be present in the parameter deck passed to this function.
  */
   int i = 0;
   
    for(i; i < 52; i++) {
        if(i<=13) {
            deck[i].Suit = 'C'; //Clubs
        }
        else if (i<=26){
            deck[i].Suit = 'D'; //Diamonds
            }
        else if (i<=39){
            deck[i].suit = 'H'; //Hearts
        }
        else if (i<=52){
            deck[i].suit = 'S'; //Spades
        }
}
    for (i = 0; i < 52; i++) {
        deck[i].rank = i % 13;
    }
	
	
	
	
  }
  


void inverseDeckSort (vector<Card> & deck) {
  /* In this function add the code for answering the Question 3 in the assignment.
  The sorted deck of cards should be present in the parameter deck passed to this function.
  */
  
}

void deckSort2 (vector<Card> & deck) {
  /* In this function add the code for answering the Question 2 in the assignment.
  The sorted deck of cards should be present in the parameter deck passed to this function.
  */
  
}

bool linearSearchSO(vector<int> & inputArr, int searchKey) {
  
  
  return false;
}

void printArray (vector<int> inputArr) {
  for (int i = 0; i < inputArr.size(); i++) {
    cout << inputArr[i] << ", ";
  }
  cout << endl;
}
