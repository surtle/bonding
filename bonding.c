typedef struct Member Member;
typedef struct Connection Connection;

typedef struct Member {
    char name [100];
    Connection * c;
} Member; 

typedef struct Connection {
    Member vertices [2];
} Connection;

char * readRoster( FILE * roster ) {
    char * members []; 
    char * currLine;
    int numMembers = 0; 

    currLine = malloc( BUFSIZ ); 
    fgets( currLine, BUFSIZ, roster );
    while( strncmp( currLine, "\n", BUFSIZ ) != 0 ) {
        members]numMembers] = currLine; 
    } 
}

int main( int argc, char * argv[] ) {
    char * roster = argv[1]; 

    return 0;
};

