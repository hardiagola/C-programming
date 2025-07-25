#include<stdio.h>
void main()
{
   long long total_population=1441981744;
   double litarecy_overall=85.95;
   double litarecy_rate_in_men=80.95;
   double litarecy_rate_in_women=62.84;

   long long population_of_women=total_population*(48.8/100);
   long long population_of_men=total_population-population_of_women;
   long long total_lit_rate = total_population*(85.95/100);
   long long litaret_women=(long long)(population_of_women*litarecy_rate_in_women/100.0);
   long long litaret_men=(long long)(population_of_men*(litarecy_rate_in_men/100.0));
   long long illitaret_men=population_of_men-litarecy_rate_in_men;
   long long illitaret_women=population_of_women-litarecy_rate_in_women;

   printf("Total population is: %lld\n",total_population);
   printf("Total women population is: %lld\n",population_of_women);
   printf("Total men population is: %lld\n",population_of_men);
   printf("Total literacy Rate of Population: %lld\n",total_lit_rate);
   printf("Total litaret women: %lld\n",litaret_women);
   printf("Total litaret men: %lld\n",litaret_men);
   printf("Total illitaret women: %lld\n",illitaret_women);
   printf("Total illitaret men: %lld\n",illitaret_men);
}


