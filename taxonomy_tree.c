#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Taxon {
    char name[50];
    int lifespan;               
    struct Taxon *parent_group; 
} Taxon;

Taxon* create_taxon(const char *name, int lifespan){
    // this function would allocate memory for the structure and set values to the variables inside the function
    Taxon *t = malloc(sizeof(Taxon));
    
    strcpy(t -> name, name);
    t -> lifespan = lifespan;
    t -> parent_group = NULL;
    
    return t;

}






