#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Formula {
    int serial_no;
    char category[30];
    char formula_name[50];
    char formula[100];
    char description[150];
};

void displayMenu();
void displayAllFormulas(struct Formula *f, int n);
void displayByCategory(struct Formula *f, int n, char *cat);
void searchFormula(struct Formula *f, int n);
void displayHeader();

int main() {
    struct Formula formulas[25];
    int total = 25;
    int choice;
    char cat[30];

    formulas[0].serial_no = 1;       strcpy(formulas[0].category,"Algebra");
    strcpy(formulas[0].formula_name,"Square of Sum"); strcpy(formulas[0].formula,"(a + b)^2 = a^2 + 2ab + b^2");
    strcpy(formulas[0].description,"Used to expand the square of a binomial sum");

    formulas[1].serial_no = 2;
    strcpy(formulas[1].category, "Algebra");
    strcpy(formulas[1].formula_name, "Square of Difference"); strcpy(formulas[1].formula, "(a - b)^2 = a^2 - 2ab + b^2");
    strcpy(formulas[1].description, "Used to expand the square of a binomial difference");

    formulas[2].serial_no = 3;
    strcpy(formulas[2].category, "Algebra");
    strcpy(formulas[2].formula_name, "Difference of Squares"); strcpy(formulas[2].formula, "a^2 - b^2 = (a + b)(a - b)");
    strcpy(formulas[2].description, "Factorization of difference of two squares");
    formulas[3].serial_no = 4;
    strcpy(formulas[3].category, "Algebra");
    strcpy(formulas[3].formula_name, "Cube of Sum");
    strcpy(formulas[3].formula, "(a + b)^3 = a^3 + 3a^2b + 3ab^2 + b^3");
    strcpy(formulas[3].description, "Expansion of cube of sum of two terms");

    formulas[4].serial_no = 5; strcpy(formulas[4].category,"Algebra");
    strcpy(formulas[4].formula_name,"Quadratic Formula");
    strcpy(formulas[4].formula, "x = [-b ± sqrt(b^2 - 4ac)] / 2a");
    strcpy(formulas[4].description, "Solution for quadratic equation ax^2 + bx + c = 0");

    formulas[5].serial_no = 6; strcpy(formulas[5].category,"Trigonometry");
    strcpy(formulas[5].formula_name,"Sine Definition");
    strcpy(formulas[5].formula, "sin(θ) = Opposite / Hypotenuse");
    strcpy(formulas[5].description, "Basic sine ratio in right triangle");

    formulas[6].serial_no = 7; strcpy(formulas[6].category,"Trigonometry");
    strcpy(formulas[6].formula_name,"Cosine Definition");
    strcpy(formulas[6].formula,"cos(θ) = Adjacent / Hypotenuse");
    strcpy(formulas[6].description, "Basic cosine ratio in right triangle");

    formulas[7].serial_no = 8; strcpy(formulas[7].category, "Trigonometry");
    strcpy(formulas[7].formula_name, "Tangent Definition");
    strcpy(formulas[7].formula, "tan(θ) = Opposite / Adjacent");
    strcpy(formulas[7].description, "Basic tangent ratio in right triangle");

    formulas[8].serial_no = 9; strcpy(formulas[8].category, "Trigonometry");
    strcpy(formulas[8].formula_name, "Pythagorean Identity");
    strcpy(formulas[8].formula,"sin^2(θ) + cos^2(θ) = 1");
    strcpy(formulas[8].description, "Fundamental trigonometric identity");

    formulas[9].serial_no = 10; strcpy(formulas[9].category,"Trigonometry");
    strcpy(formulas[9].formula_name,"Sine Rule");
    strcpy(formulas[9].formula,"a/sin(A) = b/sin(B) = c/sin(C)");
    strcpy(formulas[9].description,"Used for solving triangles");

    formulas[10].serial_no = 11; strcpy(formulas[10].category,"Calculus");
    strcpy(formulas[10].formula_name,"Power Rule");
    strcpy(formulas[10].formula,"d/dx(x^n) = n*x^(n-1)");
    strcpy(formulas[10].description,"Derivative of power function");

    formulas[11].serial_no = 12; strcpy(formulas[11].category,"Calculus");
    strcpy(formulas[11].formula_name,"Product Rule");
    strcpy(formulas[11].formula,"d/dx(uv) = u(dv/dx) + v(du/dx)");
    strcpy(formulas[11].description,"Derivative of product of functions");

    formulas[12].serial_no = 13; strcpy(formulas[12].category,"Calculus");
    strcpy(formulas[12].formula_name,"Chain Rule");
    strcpy(formulas[12].formula,"d/dx[f(g(x))] = f'(g(x)) * g'(x)");
    strcpy(formulas[12].description,"Derivative of composite function");

    formulas[13].serial_no = 14; strcpy(formulas[13].category,"Calculus");
    strcpy(formulas[13].formula_name,"Integration Power Rule");
    strcpy(formulas[13].formula,"∫x^n dx = x^(n+1)/(n+1) + C");
    strcpy(formulas[13].description,"Integration of power function");

    formulas[14].serial_no = 15; strcpy(formulas[14].category,"Calculus");
    strcpy(formulas[14].formula_name,"Integration of Sin");
    strcpy(formulas[14].formula,"∫sin(x) dx = -cos(x) + C");
    strcpy(formulas[14].description,"Integration of sine function");

    formulas[15].serial_no = 16; strcpy(formulas[15].category,"Geometry");
    strcpy(formulas[15].formula_name,"Area of Circle");
    strcpy(formulas[15].formula,"A = π * r^2");
    strcpy(formulas[15].description,"Area of circle with radius r");

    formulas[16].serial_no = 17; strcpy(formulas[16].category,"Geometry");
    strcpy(formulas[16].formula_name,"Circumference of Circle");
    strcpy(formulas[16].formula,"C = 2 * π * r");
    strcpy(formulas[16].description,"Perimeter of circle with radius r");

    formulas[17].serial_no = 18; strcpy(formulas[17].category,"Geometry");
    strcpy(formulas[17].formula_name,"Area of Triangle");
    strcpy(formulas[17].formula,"A = (1/2) * base * height");
    strcpy(formulas[17].description,"Area of triangle");

    formulas[18].serial_no = 19; strcpy(formulas[18].category,"Geometry");
    strcpy(formulas[18].formula_name,"Volume of Sphere");
    strcpy(formulas[18].formula,"V = (4/3) * π * r^3");
    strcpy(formulas[18].description,"Volume of sphere with radius r");

    formulas[19].serial_no = 20; strcpy(formulas[19].category,"Geometry");
    strcpy(formulas[19].formula_name,"Volume of Cylinder");
    strcpy(formulas[19].formula,"V = π * r^2 * h");
    strcpy(formulas[19].description,"Volume of cylinder with radius r and height h");

    formulas[20].serial_no = 21; strcpy(formulas[20].category,"Algebra");
    strcpy(formulas[20].formula_name,"Sum of Cubes");
    strcpy(formulas[20].formula,"a^3 + b^3 = (a + b)(a^2 - ab + b^2)");
    strcpy(formulas[20].description,"Factorization of sum of cubes");

    formulas[21].serial_no = 22; strcpy(formulas[21].category,"Trigonometry");
    strcpy(formulas[21].formula_name,"Cosine Rule");
    strcpy(formulas[21].formula,"c^2 = a^2 + b^2 - 2ab*cos(C)");
    strcpy(formulas[21].description,"Used for solving triangles");

    formulas[22].serial_no = 23; strcpy(formulas[22].category,"Calculus");
    strcpy(formulas[22].formula_name,"Integration of Cos");
    strcpy(formulas[22].formula,"∫cos(x) dx = sin(x) + C");
    strcpy(formulas[22].description,"Integration of cosine function");

    formulas[23].serial_no = 24; strcpy(formulas[23].category,"Geometry");
    strcpy(formulas[23].formula_name,"Pythagorean Theorem");
    strcpy(formulas[23].formula,"a^2 + b^2 = c^2");
    strcpy(formulas[23].description,"Relationship in right triangle");

    formulas[24].serial_no = 25; strcpy(formulas[24].category,"Geometry");
    strcpy(formulas[24].formula_name,"Area of Rectangle");
    strcpy(formulas[24].formula,"A = length * width");
    strcpy(formulas[24].description,"Area of rectangle");

    do {
        displayMenu();
        printf("Enter your choice: "); 
        scanf("%d", &choice);

        struct Formula *ptr = formulas;
        switch(choice) {
            case 1:
                displayHeader();
                displayAllFormulas(ptr, total);
                break;
            case 2:
                printf("\n-- Algebra Formulas --\n");
                strcpy(cat, "Algebra"); displayByCategory(ptr, total, cat); break;
            case 3:
                printf("\n-- Trigonometry Formulas --\n");
                strcpy(cat, "Trigonometry"); displayByCategory(ptr, total, cat); break;
            case 4:
                printf("\n-- Calculus Formulas --\n");
                strcpy(cat, "Calculus"); displayByCategory(ptr, total, cat); break;
            case 5:
                printf("\n-- Geometry Formulas --\n");
                strcpy(cat, "Geometry"); displayByCategory(ptr, total, cat); break;
            case 6:
                searchFormula(ptr, total); break;
            case 7:
                printf("\nThanks for using Formula Generator!\n"); break;
            default:
                printf("Wrong choice, try again.\n");
        }
        if(choice != 7) {
            printf("Press Enter to continue...");
            getchar(); getchar();
        }
    } while(choice != 7);

    return 0;
}


void displayMenu() {
    printf("\n----------------------\n");
    printf("1. All Formulas\n");
    printf("2. Algebra Only\n");
    printf("3. Trigonometry Only\n");
    printf("4. Calculus Only\n");
    printf("5. Geometry Only\n");
    printf("6. Search Formula by Name\n");
    printf("7. Exit\n");
    printf("----------------------\n");
}

void displayHeader() {
    printf("\n==== ALL FORMULAS ====\n");
}

void displayAllFormulas(struct Formula *f, int n) {
    int i; struct Formula *ptr;
    for(i=0;i<n;i++) {
        ptr = f + i;
        printf("\n%2d) %s\n", ptr->serial_no, ptr->formula_name);
        printf("Category: %s\n", ptr->category);
        printf("Formula: %s\n", ptr->formula);
        printf("Info: %s\n", ptr->description);
        printf("----------------------\n");
    }
}

void displayByCategory(struct Formula *f, int n, char *cat) {
    int i, found = 0; struct Formula *ptr;
    printf("Category: %s\n-------------\n", cat);
    for(i=0;i<n;i++) {
        ptr = f+i;
        if(strcmp(ptr->category,cat)==0) {
            printf("%2d. %s: %s\n   %s\n", ptr->serial_no, ptr->formula_name, ptr->formula, ptr->description);
            found++;
        }
    }
    if(!found)
        printf("No formulas in this category.\n");
    else
        printf("Total in %s: %d\n", cat, found);
}

void searchFormula(struct Formula *f, int n) {
    char search[50]; int i, found=0; struct Formula *ptr;
    printf("Enter keyword for formula name: ");
    scanf(" %[^\n]", search);
    printf("Results:\n");
    for(i=0;i<n;i++) {
        ptr = f+i;
        if(strstr(ptr->formula_name,search)!=NULL) {
            printf("%2d. %s (in %s): %s\n  Desc: %s\n", ptr->serial_no, ptr->formula_name, ptr->category, ptr->formula, ptr->description);
            found++;
        }
    }
    if(!found)
        printf("No match for '%s'.\n", search);
    else
        printf("Total found: %d\n", found);
}

/*----------------------
1. All Formulas
2. Algebra Only
3. Trigonometry Only
4. Calculus Only
5. Geometry Only
6. Search Formula by Name
7. Exit
----------------------
Enter your choice:
Enter your choice: 3

-- Trigonometry Formulas --
Category: Trigonometry
-------------
 6. Sine Definition: sin(╬╕) = Opposite / Hypotenuse
   Basic sine ratio in right triangle
 7. Cosine Definition: cos(╬╕) = Adjacent / Hypotenuse
   Basic cosine ratio in right triangle
 8. Tangent Definition: tan(╬╕) = Opposite / Adjacent
   Basic tangent ratio in right triangle
 9. Pythagorean Identity: sin^2(╬╕) + cos^2(╬╕) = 1
   Fundamental trigonometric identity
10. Sine Rule: a/sin(A) = b/sin(B) = c/sin(C)
   Used for solving triangles
22. Cosine Rule: c^2 = a^2 + b^2 - 2ab*cos(C)
   Used for solving triangles
Total in Trigonometry: 6
Press Enter to continue...*/