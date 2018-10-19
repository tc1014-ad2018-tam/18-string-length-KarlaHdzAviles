/* This program help to the user to find the length of the string that he/she enter}
 *
 * Author:Karla Alexandra Hernandez Aviles
 * Email:A01411843@itesm.mx
 * Date:18/10/2018
 *
 */

 //The program use this library
#include <stdio.h>

int main() {
    // Declaration of variables
    char string[250];
    int k;

    //In thir part the program ask to the user for a string
    printf("Welcome user,this program will help you. Please write a text:");
    fgets(string, sizeof(string), stdin);

    // In this part the program determines the length of the string entered by the user.
    for (k = 0; string[k] != '\n'; k++);
    printf("The size of your string is: %d", k);

    return 0;
}