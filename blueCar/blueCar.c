#include <stdio.h>
#include <string.h>

int main()
{
    printf("Blue Car\n");
    printf("========\n\n");
    
    printf("Welcome to Blue's Car Price Simulator\n");
    printf("Today's Date : October 24th 2024\n");
    printf("\n");
    
    
    // JENIS MOBIL
    char carType[21];
    int lengthCarType;
    do {
        printf("Please input your car type [2..20]: ");
        scanf("%s", carType); 
        lengthCarType = strlen(carType);
        
    } while (lengthCarType < 2 || lengthCarType > 20);
    
    printf("\n");
    
    
    // TAHUN MOBIL
    int yearOfCar;
    printf("*we cannot buy 1 year old car:)\n");
    
    do {
        printf("Please input purchasing year of the car [2000 - 2014] : ");
        scanf("%d", &yearOfCar); fflush(stdin);
    } while (yearOfCar < 2000 || yearOfCar > 2014);
    
    printf("\n");
    
    
    // HARGA MOBIL
    int priceOfCar;
    do {
        printf("Please input price of the car when it was purchased in %d [100.000.000 - 300.000.000] :", yearOfCar );
        scanf("%d", &priceOfCar);
    } while (priceOfCar < 100000000 || priceOfCar > 300000000);
    
    // tahun sejak beli
    int yearsSincePurchase = 2016 - yearOfCar;
    double diskonPrice;
    printf("Mobil sudah berusia %d tahun sejak pembelian\n", yearsSincePurchase);
    
    // validasi
    if(yearsSincePurchase < 2) {
        diskonPrice = 0.10;
    } else if (yearsSincePurchase >= 2 && yearsSincePurchase <= 6) {
        diskonPrice = 0.10 - (0.02 * (yearsSincePurchase - 1));
        if (diskonPrice < 0.04) {
            diskonPrice = 0.04; 
        }
    } else {
        diskonPrice = 0.04;
    }
    
    int fixPrice = priceOfCar - (priceOfCar * diskonPrice);
    
    printf("These are the info of your %s car with Rp. %d price\n", carType, priceOfCar);
    // tahun pertama
    printf("In %d Car Price = Rp. %d, because of 10%  Price reduction\n", yearOfCar+1, fixPrice);
    
    for (int i = 2; i <= yearsSincePurchase; i++) {
        if (diskonPrice > 0.04) {
            diskonPrice -= 0.02;
        }
        if (diskonPrice < 0.04) {
            diskonPrice = 0.04; 
        }
        fixPrice = priceOfCar - (priceOfCar * diskonPrice);
        printf("In %d Car Price = Rp. %d, because of %.0f%% Price reduction\n", yearOfCar+i, fixPrice, diskonPrice * 100);
    }
    
    if (yearsSincePurchase > 5) {
        printf("Before selling, your car needs maintenance.\n");
    } else {
        printf("Your car condition is still okay.\n");
    }
    
}