#include "dna.h"
#include<string>
#include<iostream>
#include<iomanip>


using std::string;
using std::cout;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/


double get_gc_content(const string& dna)
{
    double quotient = 0.0;
    int count = 0;
    for(int i = 0; i<dna.length(); i++ )
    {
        if(dna[i] == 'G' || dna[i] == 'C');
        {
            count++;
        }
    }
    quotient = count/dna.length();
    return quotient;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
    string reverse;

    for(int i=dna.length()-1; i >= 0; i--)
    {
        reverse.push_back(dna[i]);
    }
    
    return reverse;
}
/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.*/

string get_dna_complement(string dna)
{
    string reverse = get_reverse_string(dna);

    int length = dna.length();
    //iterate through string dna
    for(int i = 0; i < length; i++)
    {
        // replace A with T
        if(reverse[i] == 'A')
        {
            reverse[i] == 'T';
        }
        // replace T with A
        if(reverse[i] == 'T')
        {
            reverse[i] == 'A';
        }
        // replace C with G
        if(reverse[i] == 'C')
        {
            reverse[i] == 'G';
        }
        // replace G with C
        if(reverse[i] == 'G')d
        {
            reverse[i] == 'C';
        }
    }
    return reverse;
}

/*Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string
*/

