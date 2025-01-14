#include <stdio.h>
#include <stdlib.h>

// Define the structure of a polynomial term
struct Term {
    int coeff;         // Coefficient
    int expo;          // Exponent
    struct Term* next; // Pointer to the next term
};

// Function to create a new term
struct Term* createTerm(int coeff, int expo) {
    struct Term* newTerm = (struct Term*)malloc(sizeof(struct Term));
    if (!newTerm) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newTerm->coeff = coeff;
    newTerm->expo = expo;
    newTerm->next = NULL;
    return newTerm;
}

// Function to add a term to the polynomial
void insertTerm(struct Term** poly, int coeff, int expo) {
    struct Term* newTerm = createTerm(coeff, expo);
    if (*poly == NULL) {
        // If the polynomial is empty
        *poly = newTerm;
    } else {
        // Insert at the end of the polynomial
        struct Term* temp = *poly;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newTerm;
    }
}

// Function to add two polynomials
struct Term* addPolynomials(struct Term* poly1, struct Term* poly2) {
    struct Term* result = NULL;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->expo > poly2->expo) {
            insertTerm(&result, poly1->coeff, poly1->expo);
            poly1 = poly1->next;
        } else if (poly1->expo < poly2->expo) {
            insertTerm(&result, poly2->coeff, poly2->expo);
            poly2 = poly2->next;
        } else {
            // Exponents are the same; add coefficients
            int sumCoeff = poly1->coeff + poly2->coeff;
            if (sumCoeff != 0) { // Avoid inserting terms with 0 coefficients
                insertTerm(&result, sumCoeff, poly1->expo);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    // Add remaining terms from poly1 or poly2
    while (poly1 != NULL) {
        insertTerm(&result, poly1->coeff, poly1->expo);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        insertTerm(&result, poly2->coeff, poly2->expo);
        poly2 = poly2->next;
    }

    return result;
}

// Function to display a polynomial
void displayPolynomial(struct Term* poly) {
    if (poly == NULL) {
        printf("0\n");
        return;
    }

    struct Term* temp = poly;
    while (temp != NULL) {
        printf("%d*x^%d", temp->coeff, temp->expo);
        temp = temp->next;
        if (temp != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

// Main function
int main() {
    struct Term *poly1 = NULL, *poly2 = NULL, *result = NULL;

    // Insert terms into the first polynomial (3x^3 + 5x^2 + 6)
    insertTerm(&poly1, 3, 3);
    insertTerm(&poly1, 5, 2);
    insertTerm(&poly1, 6, 0);

    // Insert terms into the second polynomial (4x^3 + 2x^2 + 7x + 1)
    insertTerm(&poly2, 4, 3);
    insertTerm(&poly2, 2, 2);
    insertTerm(&poly2, 7, 1);
    insertTerm(&poly2, 1, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    // Add the two polynomials
    result = addPolynomials(poly1, poly2);

    printf("Sum of the polynomials: ");
    displayPolynomial(result);

    return 0;
}
