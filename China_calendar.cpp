#include <iostream>
#include <string>
int main()
{
int n=0;
std::cin>> n;
std::string years[12] = {"monkey", "rooster","dog", "pig","rat", "ox", "tiger","rabbit", "dragon","snake","horse","sheep"};
std::string monthday[12]={"capricom", "aquarius", "pisces", "aries", "taurus", "gemine", "cancer", "leo", "virgo","libra", "scorpio", "sugiharius"};
for (int i=0; i<n; ++i )
{
 std::string firsname;
 std::string lastname;
 int year;
 int month;
 int day;
 std::cin>>firsname>>lastname>>year>>month>>day;
 std::cout<<years[year%12]<<", ";
   if (month==12 & day>21  ||  month==1 & day<21)
    std::cout<<monthday[0];
 if (month==1 & day>=21  ||  month==2 & day<=19)
    std::cout<<monthday[1];
 if (month==2 & day>=20  ||  month==3 & day<21)
    std::cout<<monthday[2];
  if (month==3 & day>=21  ||  month==4 & day<21)
    std::cout<<monthday[3];
 if (month==4 & day>=21  ||  month==5 & day<21)
    std::cout<<monthday[4];
  if (month==5 & day>=21  ||  month==6 & day<=21)
    std::cout<<monthday[5];
  if (month==6 & day>21  ||  month==7 & day<23)
    std::cout<<monthday[6];
  if (month==7 & day>22  ||  month==8 & day<24)
    std::cout<<monthday[7];
  if (month==8 & day>23  ||  month==9 & day<24)
    std::cout<<monthday[8];
 if (month==9 & day>23  ||  month==10 & day<24)
    std::cout<<monthday[9];
      if (month==10 & day>23  ||  month==11 & day<23)
    std::cout<<monthday[10];
      if (month==11 & day>22  ||  month==12 & day<=21)
    std::cout<<monthday[11];
    std::cout<<"\n";
}
}
