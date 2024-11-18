#include <stdio.h>
int main ()
{
    char player1[20],player2[20];
    printf("player1:\n");
    scanf("%s",player1);
    int score1 = 0;
    for(int i=0;player1[i] != '\0';i++)
    {
        switch(player1[i])
        {
            case 'a':
                score1 += 1;
            break;
            case 'b' :
                case 'c' :
            score1 += 3;
            break;
            case 'd':
                score1 += 2;
            break;
            case 'e':
                score1 += 1;
            break;
            case 'f':
                score1 += 4;
            break;
            case 'g':
                score1 += 2;
            break;
            case 'h':
                score1 += 4;
            break;
            case 'i':
                score1 +=1;
            break;
            case 'j':
                score1 += 8;
            break;
            case 'k':
                score1 += 5;
            break;
            case 'l':
                score1 += 1;
            break;
            case 'm':
                score1 += 3;
            break;
            case 'n':
                case 'o':
            score1 += 1;
            break;
            case 'p':
                score1 += 3;
            break;
            case 'q':
                score1 += 10;
            break;
            case 'r':
                case 's':
            case 't':
            case 'u':
            score1 += 1;
            break;
            case 'v':
                case 'w':
            score1 += 4;
            break;
            case 'x':
                score1 += 8;
            break;
            case 'y':
                score1 += 4;
            break;
            case 'z':
                score1 += 10;
            break;
        }
    }

    int score2 = 0;
    printf("player2:\n");
    scanf("%s",player2);
    for(int j=0;player2[j] !='\0';j++)
    {
        switch(player2[j])
        {
            case 'a':
                score2 += 1;
                break;
            case 'b' :
                    case 'c' :
                score2 += 3;
                break;
                case 'd':
                    score2+= 2;
                break;
                case 'e':
                    score2 += 1;
                break;
                case 'f':
                    score2 += 4;
                break;
                case 'g':
                    score2 += 2;
                break;
                case 'h':
                    score2 += 4;
                break;
                case 'i':
                    score2 +=1;
                break;
                case 'j':
                    score2 += 8;
                break;
                case 'k':
                    score2 += 5;
                break;
                case 'l':
                    score2 += 1;
                break;
                case 'm':
                    score2 += 3;
                break;
                case 'n':
                    case 'o':
                score2 += 1;
                break;
                case 'p':
                    score2 += 3;
                break;
                case 'q':
                    score2 += 10;
                break;
                case 'r':
                    case 's':
                case 't':
                case 'u':
                score2 += 1;
                break;
                case 'v':
                    case 'w':
                score2 += 4;
                break;
                case 'x':
                    score2 += 8;
                break;
                case 'y':
                    score2 += 4;
                break;
                case 'z':
                    score2 += 10;
                break;
            }
        }
    if(score1>score2) {
        printf("player1 wins\n");
    }
    else if(score2>score1) {
        printf("player2 wins\n");
    }
    else {
        printf("draw\n");
    }
    return 0;
}
