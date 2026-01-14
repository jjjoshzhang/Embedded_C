// storage class specifiers in C

// extern
// used to access golbal variales or functions defined out side the current file
    // in file1.c
    int counter = 0;
    // in file2.c
    extern int counter; // declaration, can be accessed through linker
    void increment(){
        counter ++;
    }
    
// static
// make variables or functions private to the file they are defined in
    // with variables

    // in main.c
    static int counter; // only accessible within this file(privacy)
    // in file1.c
    extern int counter; 
    int counter = 0; // Error: counter is not visible here

    // with functions
    // in main.c
    static void helperFunction(){ // only accessible within this file
        // do something
    }
    void publicFunction(){// accessible from other files
        // do something
        helperFunction(); // valid call
    }
    // in file1.c
    void publicFunction(); // valid dont really need extern, it's assumed
    void helperFunction(); // Error: helperFunction is not visible here

// unsigned
    //only positive values
    unsigned int a = 10; // valid
    unsigned int b = -5; // invalid, negative value assigned to unsigned variable