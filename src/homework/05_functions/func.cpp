//add include statements
#include"func.h"


//add function code here


double get_gc_content(const std::string& dna) 
{
    int gc_count = 0;

    for (char content : dna) 
    {
       
        if (content == 'G' || content == 'C') 
        {
            gc_count++;
        }
    }

   
    return static_cast<double>(gc_count) / dna.length();
}



std::string get_reverse_string(std::string dna) 
{
    int n = dna.length();
    
   
    for (int i = 0; i < n / 2; ++i) 
    {
        std::swap(dna[i], dna[n - i - 1]);
    }
    return dna;
}


std::string get_dna_complement(std::string dna) 
{

    std::string reverse_dna = get_reverse_string(dna);

    for (char &content : reverse_dna) 
    {
        switch (content) 
        {
            case 'A':
                content = 'T';
                break;
            case 'T':
                content = 'A';
                break;
            case 'C':
                content = 'G';
                break;
            case 'G':
                content = 'C';
                break;
        }
    }
    return reverse_dna;
}