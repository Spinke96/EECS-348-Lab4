#include <stdio.h>
//idk how to get the fahrenheit to celsius to work


float celsius_to_fahrenheit(float temp){
    temp = (((float)(9)/5)*temp)+32;
    return temp;
}

float fahrenheit_to_celsius(float temp){
    // printf("%f\n", temp);
    temp = (temp-32)*((float)(5)/9);
    // printf("%f\n", temp);
    return temp;
}

float celsius_to_kelvin(float temp){
    temp = temp+273.15;
    return temp;
}

float kelvin_to_celsius(float temp){
    temp = temp - 273.15;
    return temp;
}

int printing(float new_temperature, float temp, int temp_type){
    // printf("%f, %f, %d\n", new_temperature, temp, temp_type);
    float comparing_temp;
    if(temp_type == 1){
        comparing_temp = temp;                                  //this puts it into cel for next step
    }
    if(temp_type == 2){
        comparing_temp = fahrenheit_to_celsius(temp);           //this puts it into cel for next step
    }
    if(temp_type == 3){
        comparing_temp = kelvin_to_celsius(temp);               //this puts it into cel for next step
    }
    // printf("%f, %f, %f, %d", comparing_temp, new_temperature, temp, temp_type);
    printf("\nConverted temperature: %f\n" , new_temperature);
    if(comparing_temp<0){
        printf("Temperature category: Freezing\n");
        printf("Wear heavy coats\n");
    }
    if(comparing_temp>=0 && comparing_temp<10){
        printf("Temperature category: Cold\n");
        printf("Wear a Jacket\n");
    }
    if(comparing_temp>=10 && comparing_temp<25){
        printf("Temperature category: Comfortable\n");
        printf("You should feel comfortable\n");
    }
    if(comparing_temp>=25 && comparing_temp<35){
        printf("Temperature category: Hot\n");
        printf("Wear sports clothes\n");
    }
    if(comparing_temp>=35){
        printf("Temperature category: Extreme Heat\n");
        printf("Stay inside in the A/C\n");
    }

    return 0;
}

int main() {
    float temp;
    int temp_type;
    int temp_target;
    int bingus = 1;
    while(bingus == 1){
        bingus = 0;
        printf("Enter the temperature:\n");
        scanf("%f", &temp);
        printf("Choose the current scale (1)Celius, (2)Fahrenheit, (3)Kelvin:\n");
        scanf("%d", &temp_type); 
        if(temp_type!=1 && temp_type!=2 &&temp_type!=3){
            printf("Current type gave not supported\n");
            bingus = 1;
        } 
        printf("Convert to (1)Celsius, (2)Fahrenheit, (3)Kelvin:\n");
        scanf("%d", &temp_target);
        if(temp_target!=1 && temp_target!=2 &&temp_target!=3){
            printf("Converting type gave not supported\n");
            bingus = 1;
        }
    }
    float comparing_temp;
    if(temp_type == 1){
        comparing_temp = temp;                                  //this puts it into cel for next step
    }
    if(temp_type == 2){
        comparing_temp = fahrenheit_to_celsius(temp);           //this puts it into cel for next step
    }
    if(temp_type == 3){
        comparing_temp = kelvin_to_celsius(temp);               //this puts it into cel for next step
    }
    // comparing_temp is in c
    if(comparing_temp <- 50){
        printf("Invalid Input, The temperature is too low\n");
        return 0;
    }
    if(comparing_temp > 150){
        printf("Invalid Input, The temperature is too high\n");
        return 0;
    }
    if(temp_target == 1){
        if(temp_type == 1){           //checkes to see if current temp is the wanted temp
            float new_temperature = temp;
            printing(new_temperature,temp,temp_type);               //placeholder for what im going to print
        }
        if(temp_type == 2){           //checks if current temp is fahrenheit
            float new_temperature = fahrenheit_to_celsius(temp);       //converts
            // printf("%f, %f, %d\n", new_temperature, temp, temp_type);
            printing(new_temperature,temp,temp_type);              //prints stuff
        }
        if(temp_type == 3){           //checks if current temp is kelvin
            float new_temperature = kelvin_to_celsius(temp);            //converts
            printing(new_temperature,temp,temp_type);
        }
    }
    if(temp_target == 3){                 //if wanted type is kel
          if(temp_type == 3){           //checkes to see if current temp is the wanted temp
            float new_temperature = temp;
            printing(new_temperature,temp,temp_type);               //placeholder for what im going to print
        }
        if(temp_type == 1){           //checks if current temp is cel
            float new_temperature = celsius_to_kelvin(temp);       //converts
            printing(new_temperature,temp,temp_type);              //prints stuff
        }
        if(temp_type == 2){           //checks if current temp is fah
            float first_new_temperature = fahrenheit_to_celsius(temp);            //converts fah to cel
            float second_new_temperature = celsius_to_kelvin(first_new_temperature); //converts cel to kel
            printing(second_new_temperature,temp,temp_type);
        }
    }
    if(temp_target == 2){                 //if wanted type is fah
          if(temp_type == 2){           //checkes to see if current temp is the wanted temp
            float new_temperature = temp;
            printing(new_temperature,temp,temp_type);               //placeholder for what im going to print
        }
        if(temp_type == 1){           //checks if current temp is fahrenheit
            float new_temperature = celsius_to_fahrenheit(temp);       //converts
            printing(new_temperature,temp,temp_type);              //prints stuff
        }
        if(temp_type == 3){           //checks if current temp is kelvin
            float first_new_temperature = kelvin_to_celsius(temp);            //converts kelvin to cel
            float second_new_temperature = celsius_to_fahrenheit(first_new_temperature); //converts cel to fah
            printing(second_new_temperature,temp,temp_type);
    }
}
}
