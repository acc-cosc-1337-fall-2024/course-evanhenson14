#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"func.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}



TEST_CASE("Testing GC Content Calculation") 
{
    REQUIRE(get_gc_content("AGCTATAG") == Approx(0.375));
    REQUIRE(get_gc_content("CGCTATAG") == Approx(0.50));
    REQUIRE(get_gc_content("AATT") == Approx(0.0));
    REQUIRE(get_gc_content("GGGG") == Approx(1.0));
    REQUIRE(get_gc_content("") == Approx(0.0));
}


TEST_CASE("Testing DNA String Reversal") 
{
    REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
    REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
    REQUIRE(get_reverse_string("AAAACCCGGT") == "TGGCCAAAA");
    REQUIRE(get_reverse_string("A") == "A");
    REQUIRE(get_reverse_string("") == "");
}


TEST_CASE("Testing DNA Complement Calculation") 
{
    REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
    REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
    REQUIRE(get_dna_complement("AGCT") == "TCGA");
    REQUIRE(get_dna_complement("A") == "T");
    REQUIRE(get_dna_complement("") == "");                     
}

