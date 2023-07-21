typedef struct student{
char name[20];
int age;
char grade;
}std_t;

void student_print(std_t s);
std_t student_scan(void);
void student_printB(std_t* ps);
void student_printAll(std_t* arr,int size);
