#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <time.h>

#include "../define/dll.c"

bool is_odd(int l, int c){
    return l % 2 != 0 && c % 2 != 0;
}

int **create_matrix(int l, int c){
    int **p = (int**)malloc(l*sizeof(int*));
    for(int i = 0; i < l; i ++){
        p[i] = (int*)malloc(c*sizeof(int));
        for(int j = 0; j < c; j++)  p[i][j] = 1;   
    }
    return p;
    
}

void print_matrix(int **p, int l, int c){
        for(int i = 0; i < l; i ++){
            for(int j = 0; j < c; j++)  printf(" %d", p[i][j]);
            printf("\n");
    }
}

void move(int **p, int l, int c){
    srand(time(NULL)); 
    int head_pos_x = rand() % l;
    int head_pos_y = rand() % c; 

    int direction_down = 2;

    // while(true){
    //     if(head_pos_y + direction_down < c) 
    // }

    
    
}


int main(){

    // int l;
    // int c;
    // printf("insert an odd number of lines and collums: \n");
    // scanf("%d", &l);
    // scanf("%d", &c);
    // while(!is_odd(l, c)){
    //     printf("insert an odd number of lines and collums: \n");
    //     scanf("%d", &l);
    //     scanf("%d", &c);
    // }
    
    // int **m = create_matrix(l, c);
    // print_matrix(m, l, c);



    struct Dll lista;

    for(int i = 0; i < 10; i++) insertAtTail(&lista, i);

    printList(&lista);

    return 0;
}