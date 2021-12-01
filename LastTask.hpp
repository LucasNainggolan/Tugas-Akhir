#ifndef LASTTASK_HPP
#define LASTTASK_HPP

int maxab (int a, int b);
void tukar (int *a, int *b);

typedef struct
{
    int *tab;
    int N;
} TabInt;
/* prototype */
void incTab (TabInt *T );

typedef struct
{
    int HH;
    int MM;
    int SS;
}jam;

/* prototype */
void ResetJam (jam * J);
/* Mengisi sebuah jam J dengan 00:00:00 */

int JamToDetik (jam J);
/* konversi jam ke detik */

jam DetikToJam (int d);
/* konversi dari detik menjadi jam */

typedef struct
{
    int T[10];
    /* isi tabel */
    int N;
/* ukuran efektif */
} TabInt2;

void geser (TabInt2 * TT, int (*f) (int));

int succ(int i);

int pred(int i);

void succI (int *i);

void predI (int *i);

void succC (char *c);

void predC (char *c);

void Pros1 (int i, int j, int *h);

int fungsi1 ();

#endif /* LASTTASK_HPP */
