#include <stdio.h>
void read_ints (const char* file1_name, const char* file2_name)
{
    FILE* file2 = fopen (file2_name, "w");
    FILE* file1 = fopen (file1_name, "r");
    int i = 0;

    fscanf (file1, "%d", &i);
    while (!feof (file1))
    {
       if(i>0){
        printf("%d",i);
        printf(" ");
           fprintf(file2, "%d",i);
           fprintf(file2," ");
        }
        fscanf (file1, "%d", &i);
    }
    fclose(file2);
    fclose (file1);
}
int main() {
    read_ints("C:\\Users\\User\\CLionProjects\\untitled1\\lol.txt","C:\\Users\\User\\CLionProjects\\untitled1\\kek.txt");
    FILE *f;
    char kek [10];
    f = fopen("C:\\Users\\User\\CLionProjects\\untitled1\\lol.txt","r");
    fgets(kek,1,f);

  //  printf(kek);
    printf("Hello, World!\n");
    return 0;
}