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

void read_taxon_info(const char *label, char *name_out, int *lifespan_out){
    printf("Enter name for species: ");
    scanf("%s", name_out );
    printf("Enter the lifespan of the species: ");
    scanf("%d", lifespan_out);

}

void link_parent(Taxon *child, Taxon *parent){
    child -> parent_group = parent;
}

void print_taxonomy(Taxon *species_list, int species_count){
    printf("=== SPECIES CLASSIFICATION HIERARCHY ===\n");
    printf("SPECIES 1: %s \n", species_list -> parent_group -> parent_group -> name);
    printf("- Average Lifespan: %d \n", species_list -> parent_group -> parent_group -> lifespan);
    printf("- Belongs to Genus: %s (Lifespan: %d) \n", species_list -> parent_group ->name, species_list -> parent_group -> lifespan );
    printf("- Belongs to Family: %s (Lifespan: %d)", );
}

int main(){


}





