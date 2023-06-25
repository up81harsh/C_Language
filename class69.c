// C program for reading
// struct from a file
#include <stdio.h>
#include <stdlib.h>

// struct person with 3 fields
struct person {
int id;
char fname[20];
char lname[20];
};

// Driver program
int main()
{
FILE* infile;

// Open person.dat for reading
infile = fopen("person16.bin", "wb+");
if (infile == NULL) {
fprintf(stderr, "\nError opening file\n");
exit(1);
}

struct person write_struct[3] ;
int i;
for( i=0;i<3;i++)
{
scanf("%d",&write_struct[i].id);
scanf("%s",write_struct[i].fname);
scanf("%s",write_struct[i].lname);

}


// writing to file
for(i=0;i<3;i++)
fwrite(&write_struct[i], sizeof(write_struct[i]), 1, infile);

struct person read_struct[3];

// setting pointer to start of the file
rewind(infile);

// reading to read_struct
for(i=0;i<3;i++){
fread(&read_struct[i],sizeof(read_struct[i]), 1, infile);
printf("Name: %s %s \nID: %d\n", read_struct[i].fname,
read_struct[i].lname, read_struct[i].id);
}

// close file
fclose(infile);

return 0;
}
