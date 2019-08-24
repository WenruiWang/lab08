#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){

string s3="";
 for(int i=0;i<s1.length();i++){
	 if (isalpha(s1[i])){
		  s3+=tolower( s1[i]);
	 }
	  }     
 sort(s3.begin(),s3.end()};
string s4="";
 for(int j=0;j<s2.length();j++){
if(isalpha(s2[j])){
		s4+=tolower( s2[i]);
	}}
	sort(s4.begin(),s4.end());

return s3==s4;



}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
      if(s1.length()<2){
      return true;}


  	      if(tolower(s1[0])]!=tolower(s1[s1.length()-1]){
		      return false;}
             else	{ 
	   return  isPalindrome(s1.substr(1,s1.length()-2));

}
}

