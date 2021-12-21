#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define ll long long
#define ld long double

// RADEN MUHAMMAD ALIF ARDIKA RAHARJA - 2501990470
// JED MARIUS MICA TIROL - 2501987974   ?
// MUHAMAD AMIN RAIS - 2501982891   ?

// read();

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

    // read(s);

    return newUser;
}

//read
void read(Data *s){
    printf("Nama : %s\n", s->name);
    printf("Pass : %s\n", s->pass);
    printf("Uang : Rp%.2lf\n", s->m.uangUser);

}
//write
void write(Data **s){
    char x[255]; scanf("%[^\n]",x);
    getchar();
    char z[255]; scanf("%s",z);
    double uang; scanf("%lf", &uang);
    *s = createUser(x,z,uang);
}




//function




int main(){
    
    Data *s;
    
    write(&s);
    read(s);
    
    return 0;
}