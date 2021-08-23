# include <stdio.h>


  main() {

    int opt, a, b;

    printf("Select Option: \n[1] +\n[2] -\n[3] *\n[4] /\n:: ");
    scanf("%d", &opt);

    if (opt > 4){
        printf("Invalid Number");
        return 0;
    }

    else if (opt == 0) {
        printf("Invalid Number");
        return 0;
    }

    printf("Number 1: ");
    scanf("%d", &a);

    printf("Number 2: ");
    scanf("%d", &b);

    if (opt == 1) {
            printf("%d",a+b);
    }

    else if (opt == 2) {
            printf("%d",a-b);
    }

    else if (opt == 3) {
            printf("%d",a*b);
    }

    else if (opt == 4) {
            printf("%d",a/b);
    }

 return 0;
 }
