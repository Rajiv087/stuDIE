#include <stdio.h>
// void go_south_east(int lat , int lon)
// {
//     lat = lat - 1 ; 
//     lon = lon + 1 ;
// }
// int main()
// {
//     int latitude = 32;
//     int longitude = -64;
//     go_south_east(latitude,longitude);
//     printf("Avast! Now at: [%i,%i]\n", latitude , longitude);
//     return 0;
// }
// This code will not work as intended because when i pass the latitude and longitude variables as arguments , 
//these do not actually pass as arguments , its just their value that is passed so 
// here we will have to use pointers .


// Enhanced version of the above code using pointers 
// #include <stdio.h>
// void go_south_east(int *lat , int *lon)
// {
//     *lat = *lat - 1 ;
//     *lon = *lon + 1 ;
// }

// int main()
// {
//     int latitude = 32;
//     int longitude = -64;
//     go_south_east(&latitude,&longitude);
//     printf("Avast! Now at: [%i,%i]\n", latitude , longitude);
//     return 0;
// }

