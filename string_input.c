#include<stdio.h>
int main (){

    char sen[100];
    char a[1000];

    gets(sen); // for also taking space in the input
      printf("%s\n", sen);

    fgets(a,sizeof(a),stdin); //modern nad professional gets(), must use this
    printf("%s", a);
  



    return 0;
}