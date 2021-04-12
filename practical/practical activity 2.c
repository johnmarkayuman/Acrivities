#include <stdio.h>
#include <stdlib.h> // needed for exit(0); function

void checkCredintials(int, int);    // same as    void checkCredintials(int id, int pin);
void checkLoginStatus(int, int);    // same as    void checkLoginStatus(int id, int status);

// predefined id and pin
int account[][2] = {
    {1234, 1111},   //account1
    {8888, 2222},   //account2
    {4438, 3333}    //account3
};

int main() {
    int id;
    int pin;

    printf("Enter ID number: ");
    scanf("%d", &id);
    printf("Enter PIN: ");
    scanf("%d", &pin);

    checkCredintials(id, pin);

    return 0;
}

void checkCredintials(int id, int pin){
    // Looping the array
    for(int i = 0; i <= 2; i++) {
            // Checking if ID and PIN is valid
        if(account[i][0] == id && account[i][1] == pin) {
            checkLoginStatus(id, 1);
            exit(0); // to terminate the program after the credential is valid
        }
    }
    checkLoginStatus(id, 0);
}

// Checking if credential is valid
void checkLoginStatus(int id, int status) {
    if(status == 1) {
        printf("\n\nYou have successfully logged in!\n");
        printf("ID#: %d\n\n", id);
    } else if(status == 0)
        printf("\n\nInvalid ID/Pin!\n\n");
}
