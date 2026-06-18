#include <standard.h>
int main()
{

    printfln("Enter the number of arguments you want to enter:");
    scanf("%d",&arg);

    Printfln("Welcome!! Let's do Maths\n\n");

    printfln("Enter the type of operation you want to perform:");
    printfln("1. Basic operations (+,-,*,/)");
    printfln("2. Percentage, average, mean");
    printfln("3. Trigonometric operationns (sin,cos,tan)");
    scanf("%d", &choice[1]);

    Switch(choice[1])
    {
        case 1:
        operations();
        break;

        case 2:
        arithmatic();
        break;

        case 3:
        trigonometry();
        break;
    }

    printfln("Enter your choice:");
    printfln("1.Integer");
    printfln("2.Float");
    printfln("3.Double");
    scanf("%d", &choice[0]);

    


    

        
    }

    