//
//  main.c
//  Currency Converter
//  Created by shanego416 on 2022-02-17.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float usdIn = 0.0, usdOut, cadIn = 0.0, cadOut;
    float exchangeRate = 0.0;
    int menuSelection;
    
// Get the current exchange rate
    printf("Enter CAD - USD exchage rate: > ");
    scanf(" %f", &exchangeRate);
    
// Make a menu
    printf("     Currency comversion app:\n");
    printf("------------------------------------\n");
    printf("1. Convert CAD to USD\n");
    printf("2. Convert USD to CAD\n");
    printf("3. Exit program\n");
    printf("Enter a menu option number: >");

// Get user input for menu selection
    getchar();
    scanf(" %d", &menuSelection);
    
// Create a switch according to the menu
    switch(menuSelection)
    {
        case 1:
            printf("Enter the CAD amount: ");
            scanf("%f", &cadIn);
            usdOut = cadIn / exchangeRate;
            printf("%.2f in CAD is %.2f in USD\n", cadIn, usdOut);
            break;
        
        case 2:
            printf("Enter the USD amount ");
            scanf("%f", &usdIn);
            cadOut = usdIn * exchangeRate;
            printf("%.2f in USD is %.2f in CAD\n", usdIn, cadOut);
            break;
        
        case 3:
            printf("Thanks for using this program!\n");
            break;
            
        default:
            printf("Invalid input");
            break;
    }
    return 0;
}


