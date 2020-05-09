#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char input[100];
static int getInput()
{
    printf("\n -- Enter Command ---> ");
    return fgets(input, sizeof(input), stdin) != NULL;
}

static int parseLowSugar()
{
    int bloodc = 0;
    int needlecaps = (rand() % 10);
    char *verb = strtok(input, " \n");
    char *noun = strtok(NULL, " \n");
    if (verb != NULL);
    {
        //quit command
        if (strcmp(verb, "quit") ==0)
            return 0;

        //look around
        else if (strcmp(verb, "look") == 0)
            printf(" You need to focus of your blood sugar.\n");

        //eating food
        else if (strcmp(verb, "eat") == 0)
            {
                printf(" It takes a few minutes, but you start to feel better.\n");
                bloodc = 0;
                return 0;
            }
        else if (strcmp(verb, "snack") == 0)
            {
                printf(" It takes a few minutes, but you start to feel better.\n");
                bloodc = 0;
                return 0;
            }
        //injecting insulin
        else if (strcmp(verb, "inject") == 0)
            {
                printf("After a while you go into a coma and die. Idiot.\n");
                needlecaps++;
                printf("You now have %d needle caps", needlecaps);
                return 0;
            }
        else if (strcmp(verb, "insulin") == 0)
            {
                printf("After a while you go into a coma and die. Idiot.\n");
                printf("You now have %d needle caps", needlecaps);
                return 0;
            }

        //do nothing
        else if (strcmp(verb, "nothing") == 0)
            {
                printf("You still feel the effects of low blood sugar and if you continue to do nothing you may go into a coma.\n");
                bloodc++;
            }
        else if (strcmp(verb, "none") == 0)
            {
                printf("You still feel the effects of low blood sugar and if you continue to do nothing you may go into a coma.\n");
                bloodc++;
            }
        else if (bloodc == 3)
            {
                printf("After a while you go into a coma and die. Idiot.\n");
                return 0;
            }
        else
            printf("I don't know how to do %s\n", verb);
    }
    return 1;
}


static int parseRoom()
{
    char *verb = strtok(input, " \n");
    if (verb != NULL);
    {
        //look around
        if (verb, "look")
        {
            printf("Looking around the room you can see various things. Today is a 2:00pm on a Sunday, and you have plenty of things to do but you can't remember exactly what you want to do. If you think about it more you may be able to figure out what you want to do.");
        }
        else if(verb, "computer")
        {
            printf(" ");
        }
    }
    return 1;
}






int main(void)
{


    printf("\b----------> WELCOME TO CHRIS' TEXT ADVENTURE <----------\n");
	printf("You are playing as an Electrical Engineering Student that lives on campus at UCF.\n");
	printf("You gain control as you wake up in the morning.\n");
	printf("You check your blood sugar and it's low, do you eat something, inject insulin, or do nothing?\n");
    while (getInput() && parseLowSugar());

    printf(" Now that you feel better you decide to start your day.\n");
    while (getInput() && parseRoom());

}
