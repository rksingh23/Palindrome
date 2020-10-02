#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>

void CPPLib::permute(std::string str, std::string out, std::vector<std::string> &strvec) 
{ 
    // When size of str becomes 0, out has a 
    // permutation (length of out is n) 
    if (str.size() == 0) 
    { 
        strvec.push_back(out);
        //std::cout << out << std::endl; 

        return; 
    } 
  
    // One be one move all characters at 
    // the beginning of out (or result) 
    for (unsigned int i = 0; i < str.size(); i++) 
    { 
        // Remove first character from str and 
        // add it to out 
        permute(str.substr(1), out + str[0],strvec); 
  
        // Rotate string in a way second character 
        // moves to the beginning. 
        rotate(str.begin(), str.begin() + 1, str.end()); 
    } 
} 

// Function to find all unique palindromic substrings of given string
bool CPPLib::canBePalindrome(const std::string &str)
{
    if(str.size()==1) return false;
    std::vector<std::string>strvec{};
    permute(str, "",strvec); 


    for(auto i: strvec)
     {

     int n=i.length()-1;
     std::cout<<"The returned permutation values "<<i<<std::endl;
     int start=0, end=n;
     int notpal=0;
     while(start<end)
     {
         if (tolower(i[start])!= tolower(i[end])) notpal++;
         start++;
         end--;
         if((start==end)&&(notpal==0))
         {
             std::cout<<i<<std::endl;
          return true;
         }

     }
     }
     return false;
}