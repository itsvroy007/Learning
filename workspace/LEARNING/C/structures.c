#include<stdio.h>
#include<string.h>

// typedef oldName newName; like typedef float realNum;  
// computer will read realNum type as float  , it is used for renaming
/*
typedef struct oldname{
    int a; diff mem
    }; Newname [ new name to be called ] */ 

// struct --> class which stores diff data type 
struct pokemon{ // user defined structure 
    char name;
    int hp;
    int speed; // data members
    int attack;
    char tier;
    }charizard,mewtwo; // instance/objects ; se phele likh kar bhi kar skte hai

typedef struct coders{
    char name[20];
    int age;
    int salary;
}coder;

// strct named cricketer which mem are name,age,matches,avg
typedef struct cricketers{
    char name[20];
    int age;
    int noOfmatches;
    float avgRun;
}crick;
// date structure with date,month,year and compare the two obj
typedef struct dates{
    int date;
    int month;
    int year;
}dates;

// students struct with rollnum name ,dept ,course, year of joining
typedef struct students{
    int rollnum;
    char name[20];
    char dept[15];
    char course[15];
    int joining_year;
}students;

int main(){
        struct pokemon pikachu;// creating instance/objects of class
        printf("Enter hp of pikachu :");
        scanf("%d",&pikachu.hp);
        pikachu.speed=100;
        pikachu.attack=80;
        pikachu.tier='A';
        //struct pokemon charizard; no need if defined above 
        charizard.hp=80;
        charizard.speed=80;
        charizard.attack=130;
        charizard.tier='S';
        printf("hp is :%d\n",pikachu.hp); // accessing attributes through dot operator
        
        mewtwo.hp=180;
        mewtwo.speed=200;
        mewtwo.attack=170;
        mewtwo.tier='G';

        // if attributes of objets matches with others exact then 
        struct pokemon raichu;
        raichu=pikachu; // it means all attck,speed,tier,hp same as pikachu
        // created a deep copy means changes in raichu wont affect pikachu
        raichu.hp=150; // even changes in raichu stats possible
    
    // array of structure 
    
    coder arr1[3];
    strcpy(arr1[0].name,"A");
    strcpy(arr1[1].name,"B");
    strcpy(arr1[2].name,"C");
    /*for(int i=0;i<3;i++){
        printf("enter age:");
        scanf("%d",&arr1[i].age);
        printf("enter salary:");
        scanf("%d",&arr1[i].salary);
    }
    for(int i=0;i<3;i++){
        printf("name:%s\n",arr1[i].name);
        printf("age:%d\n",arr1[i].age);
        printf("salary:%d\n",arr1[i].salary);
    }*/
    /*
    crick arr2[20];
    for(int i=0;i<3;i++){
        printf("enter crick name:");
        scanf("%s",&arr2[i].name);
        printf("enter crick age:");
        scanf("%d",&arr2[i].age);
        printf("enter crick no of matches:");
        scanf("%d",&arr2[i].noOfmatches);
        printf("enter crick avg run:");
        scanf("%f",&arr2[i].avgRun);
    }
    for(int i=0;i<3;i++){
        printf("Name: %s\n",arr2[i].name);// here lastname cant stored so create another char type 
        // for lastname and combine later to print 
        printf("Age: %d\n",arr2[i].age);
        printf("Num of matches : %d\n",arr2[i].noOfmatches);
        printf("Avg run scored: %f\n",arr2[i].avgRun);
    } */ 
    
    /*
    dates arr3[20];
    for(int i=0;i<2;i++){
        printf("enter date: ");
        scanf("%d",&arr3[i].date);
        printf("enter month b/w (1-12): ");
        scanf("%d",&arr3[i].month);
        printf("enter year: ");
        scanf("%d",&arr3[i].year);
    }
    for(int i=0;i<2;i++){
        printf("date  : %d of month %d, %d\n",arr3[i].date,arr3[i].month,arr3[i].year);
    }
    int flag= 1;
    if(arr3[0].date != arr3[1].date) flag=0;
    if(arr3[0].month != arr3[1].month) flag=0;
    if(arr3[0].year != arr3[1].year) flag=0;
    if (flag==0) printf("dates are different");
    else printf("dates are same");
    */

    // nested --> struct in another struct

    students arr4[10];
    for(int i=0;i<5;i++){
        printf("enter the roll num: ");
        scanf("%d",&arr4[i].rollnum);
        printf("enter your name: ");
        char name[20];
        scanf("%s",&name);
        strcpy(arr4[i].name,name);
        printf("enter your dept: ");
        char dept[20];
        scanf("%s",&dept);
        strcpy(arr4[i].dept,dept);
        printf("enter your course: ");
        char course[20];
        scanf("%s",&course);
        strcpy(arr4[i].course,course);
        printf("enter your joining year: ");
        scanf("%d",&arr4[i].joining_year);
    }

    for(int i=0;i<5;i++){
        printf("Roll num: %d\n",arr4[i].rollnum);
        printf("Name: %s\n",arr4[i].name);
        printf("Dept: %s\n",arr4[i].dept);
        printf("Course: %s\n",arr4[i].course);
        printf("Year of Joining: %d\n",arr4[i].joining_year);
    }
    void is_same_dept(students arr){
        for(int i=0;i<4;i++){
            if(strcmp(arr4[i].dept,arr4[i+1].dept)){
                printf("\nyes , %d and %d have same dept",arr4[i].rollnum,arr4[i+1].rollnum);
            }
        }
    return;
    }
    is_same_dept(arr4[10]);
    return 0;
}

// use of strcpy(dest,source); for char array with enough spaces defined 
// as declaring without size would give error or have to enter value one by one or through loops
// struct --> cant be recursive as 1 has to be defined first to recall it 
// struct in a function passed as call by value {doesnt change org value saved in struct }


// continue lecture from 2hr 55min