#include <bits/stdc++.h> 
using namespace std; 

/*Funcion recursiva que comprueba que str es un palindromo*/
bool isPalRec(string str, 
			int s, int e) 
{ 
	
	// si solo hay un caracter
	if (s == e) 
	return true; 

	//Si el primer y el ultimo caracter coinciden
	if (str[s] != str[e]) 
	return false; 

	//Comprobar si el substring del medio es un palindromo o no
	if (s < e + 1) 
	return isPalRec(str, s + 1, e - 1); 

	return true; 
} 

bool isPalindrome(string str) 
{ 
	int n = str.length(); 
	
	//Un string vacio lo considero como palindromo
	if (n == 0) 
		return true; 
	
	return isPalRec(str, 0, n - 1); 
} 

// Driver Code 
int main() 
{ 

	string str; 
	cin >> str;

	return isPalindrome(str); 
} 

// This code is contributed by shivanisinghss2110 
