#include <stdio.h>

int main()
{
    int c, d, g, h, i, n, partidas, empate, gremio, inter;
    c = 0, d = 0, partidas = 0, empate = 0, gremio = 0, inter = 0;
    
	while (1)
    {
        scanf ("%d%d", &i, &g);
        if (i > g) inter++;
        if (i < g) gremio++;
        if (i == g) empate++;
        c += i;
        d += g;
        partidas++;
        printf ("Novo grenal (1-sim 2-nao)\n");
        scanf ("%d",&n);
        if (n == 1)
            continue;
        if (n == 2)
            break;
    }
    printf ("%d grenais\n", partidas);
    printf ("Inter:%d\n", inter);
    printf ("Gremio:%d\n", gremio);
    printf ("Empates:%d\n", empate);
    if (inter > gremio)
        printf ("Inter venceu mais\n");
    if (inter < gremio)
        printf ("Gremio venceu mais\n");
    if (gremio == inter)
        printf ("Nao houve vencedor\n");
    
	return 0;
}
