/*
// If you do want to write this in C or C++, the following skeletons should help. 
// Relevant system calls you will want to read up on:
//
// fopen: you need to open the file to read in.
// getline: you need to read from the file you just opened.
// fwrite: you need to write to the file you just opened.
// Here is a skeleton which just reads the file from the standard input and writes to the 
// standard output. So that I call the program via :
//
// g++ pgm1_4.cpp -o pgm1_4 
// ./pgm1_4 < infile > outfile
// It just echoes the include lines.
// Here is the code:
*/

/*
#include < iostream >
#include < string >
#include < string.h >

using namespace std;

    bool chkInclude(string in) {
    const char *cs = in.c_str();
    if (strncmp(cs, "#include", 8) == 0)
        return true;
    else
        return false;
                    
}

    int main(int argc, char **argv) {
    
    string s1;
    while (cin >> s1) {
        if (chkInclude(s1))
            cout << s1 << endl;
        }
}
*/

/*
// Here is another skeleton that does the same echo only this time to a given 
// inputfile and output file. So that I call th program via:
//
// g++ openRW.cpp -o openRW
// ./openRW infile outfile
*/

#include < iostream >
#include < stdio.h >
#include < stdlib.h >
#include < unistd.h >

using namespace std;

int main(int argc, char** argv) {
    
    string s;
    ssize_t ssz;
    size_t sz;
    char *buff = NULL;
    
    if (argc != 3) {
        printf("Usage: openRW infile outfile\n");
        
        exit(1);
    }
    FILE *r_fd = fopen(argv[1], "r");
    FILE *w_fd = fopen(argv[2], "w");

    if (r_fd == NULL || w_fd == NULL) {
        printf("Error on open file(s)\n");
    
        exit(1);
    }
    
    while ((ssz = getline(&buff, &sz, r_fd)) > 0) {
        fwrite(buff, ssz, sizeof(char), w_fd);
    }
}

