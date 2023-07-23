// distance between sun to planets
#include <stdio.h>
void main()
{
    int sun = 1391400, ans, option;

    printf("Mercury 1: \n Venus 2: \n Earth 3: \n Mars 4: \n Jupiter 5: \n Saturn 6: \n Uranus 7: \n Neptune 8: ");
    printf("\n selcet the number of planets list:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        ans = sun - (-57900000);
        printf("sun to Mercury %d", ans);
        break;
    case 2:
        ans = sun - (-108200000);
        printf("sun to Venus %d", ans);
        break;
    case 3:
        ans = sun - (-149600000);
        printf("sun to Earth %d", ans);
        break;

    case 4:
        ans = sun - (-227900000);
        printf("sun to Mars %d", ans);
        break;
    case 5:
        ans = sun - (-778600000);
        printf("sun to Jupiter %d", ans);
        break;
    case 6:
        ans = sun - (-1433500000);
        printf("sun to Saturn %d", ans);
        break;
    case 7:
        ans = sun -(+2872500000) ;
        printf("sun to Uranus %d", ans);
        break;
        case 8:
        ans = sun - (-4495100000);
        printf("sun to Neptune %d", ans);
        break;

    default:
    printf("\n invalid option");
        break;
    }
    printf("\ngood bye");
}