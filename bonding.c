#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Member Member;
typedef struct Connection Connection;

typedef struct Member {
    char * name;
    Connection * c;
} Member; 

typedef struct Connection {
    Member vertices [2];
} Connection;

struct Member * addMember( char * name ) {
    Member *newMember = malloc( sizeof(Member) ); 
    newMember->name = name; 

    return newMember;
}

char ** readRoster( FILE * roster, int * numMembers, Member ** mems ) {
    char ** members = malloc( 100 * sizeof(char *) );
    char * currLine = malloc( BUFSIZ );

    printf("%d\n", 3);

    while( fgets( currLine, BUFSIZ, roster ) != NULL ) {

        printf("%d\n", 4);

        (*mems)[*numMembers] = addMember( currLine );   

        printf("%d\n", 5);
        (*numMembers)++; 

        printf("%d\n", 6);
        fprintf(stdout, "%s\n", members[*numMembers]);
    } 

    free( currLine );
    return members;
}

int main( int argc, char * argv[] ) {
    int numMembers = 0;
    Member members [100]; 

    printf("%d\n", 1); 

    FILE * rosterfile = fopen( argv[1], "r" );

    printf("%d\n", 2); 

    char ** roster = readRoster( rosterfile, &numMembers, &members ); 

    fprintf(stdout, "%d\n", numMembers); 

    int i;
    for (i = 0; i < numMembers; i++) {
        fprintf( stdout, "%s\n", roster[i] ); 
    }

    return 0;
};

