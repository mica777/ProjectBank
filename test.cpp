#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define ld long double

// alif ardika - 2501990470

//Struct

struct Money{
    double uangUser;


};
struct Data{
    char name[255];
    char pass[13];
    Money m;
};


//create

Data* createUser(const char *name, const char *pass, double uangUser){

    Data *newUser = (Data*) malloc(sizeof(Data));
    strcpy(newUser->name,name);
    strcpy(newUser->pass,pass);
    newUser->m.uangUser = uangUser;



    return newUser;
}

//read
void read(Data *s){
    printf("Nama : %s\n", s->name);
    printf("Pass : %s\n", s->pass);
    printf("Uang : Rp%.2lf\n", s->m.uangUser);

}
//write
void write(){
    char x[255]; scanf("%[^\n]",x);
    char z[255]; scanf("%s",z);
    double uang; scanf("%lf", &uang);
    Data *s = createUser(x,z,uang);
}

void pAscii(){
    char art;
    FILE *fp = fopen("bank.txt", "r");
    while(fscanf(fp , "%c", &art)){
        if(art != '0') printf("%c", art);
        else break;
    }
}

//function




int main(){
    
    pAscii();
    write();
    // read(s);
    
    return 0;
}