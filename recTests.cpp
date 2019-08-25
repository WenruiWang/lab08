#include "strFuncs.h"
#include "linkedListFuncs.h"
#include "recLinkedListFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    std::cerr << "Usage: " << argv[0] << " [num of test to run]" << std::endl;
    return 1;
  } else {
    int testNum = atoi(argv[1]);
    if (testNum == 1) {

      START_TEST_GROUP("IS_ANAGRAM");

      assertTrue(isAnagram("Eleven plus two","Twelve plus one"),"isAnagram(Eleven plus two,Twelve plus one)");
      assertTrue(isAnagram("Rats and Mice","in cat’s dream"),"isAnagram(Rats and Mice,in cat’s dream)");
      assertTrue(isAnagram("abc","cba"),"isAnagram(abc,cba)");
      assertTrue(isAnagram("abc","abc"),"isAnagram(abc,abc)");
      assertTrue(isAnagram("abc","bac"),"isAnagram(abc,bac)");
      assertTrue(isAnagram("PiZzA","PiZzA"),"isAnagram(PiZzA,PiZzA)");
      assertTrue(isAnagram("PiZzA","ZapiZ"),"isAnagram(PiZzA,ZapiZ)");
      assertEquals(0, isAnagram("abc","ccba"),"isAnagram(abc,ccba)");
      assertEquals(0, isAnagram("cba","ccba"),"isAnagram(cba,ccba)");
      assertEquals(0, isAnagram("hello","helo"),"isAnagram(hello,helo)");
      assertEquals(0, isAnagram("hello","PiZzA"),"isAnagram(hello,PiZzA)");
      assertEquals(0, isAnagram("bac","helo"),"isAnagram(bac,helo)");

    } else if (testNum == 2) {

      START_TEST_GROUP("IS_PALINDROME");

      assertTrue(isPalindrome("detartrated"),"isPalindrome(detartrated)");
      assertTrue(isPalindrome("abccba"),"isPalindrome(Aabccba)");
      assertTrue(isPalindrome("AbCcBa"),"isPalindrome(AbcCBa)");
      assertEquals(0, isPalindrome("petartrated"),"isPalindrome(petartrated)");
      assertEquals(0, isPalindrome("detarlated"),"isPalindrome(detarlated)");

    } else if (testNum == 3) {

      START_TEST_GROUP("RECURSIVE_SUM");
      
      int l1[3]={9,3,61};
      LinkedList *list1 = arrayToLinkedList(l1,3);
      int l2[3] = {-7, -10, -11};
      LinkedList* list2 = arrayToLinkedList(l2,3);
      int l3[4] = {1,2,3,0};
      LinkedList* list3 = arrayToLinkedList(l3,4);
      int l4[3] = {5,-5,3};
      LinkedList* list4 = arrayToLinkedList(l4,3);

      ASSERT_EQUALS(73, recursiveSum(list1->head));
      ASSERT_EQUALS(-28, recursiveSum(list2->head));
      ASSERT_EQUALS(6, recursiveSum(list3->head));
      ASSERT_EQUALS(3, recursiveSum(list4->head));
      
    } else if (testNum == 4) {

      START_TEST_GROUP("RECURSIVE_LARGEST_VALUE");

      int highestFirst[3]={73,57,61};
      LinkedList *list1 = arrayToLinkedList(highestFirst,3);
      int highestSecond[3] = {-7, -4, -11};
      LinkedList* list2 = arrayToLinkedList(highestSecond,3);
      int highestLast[4] = {1,2,3,4};
      LinkedList* list3 = arrayToLinkedList(highestLast,4);
      int tied[3] = {1,3,3};
      LinkedList* list4 = arrayToLinkedList(tied,3);

      ASSERT_EQUALS(73, recursiveLargestValue(list1->head));
      ASSERT_EQUALS(-4, recursiveLargestValue(list2->head));
      ASSERT_EQUALS(4, recursiveLargestValue(list3->head));
      ASSERT_EQUALS(3, recursiveLargestValue(list4->head));

    } 
  }
  
  return 0;
}

