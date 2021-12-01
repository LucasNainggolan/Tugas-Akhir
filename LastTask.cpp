#include "LastTask.hpp"

// Subbab Prosedur dan Fungsi

int maxab (int a, int b)
{
    /* mencari maksimum dua bilangan bulat */
    return ((a >= b) ? a : b);
}

void tukar (int *a, int *b)
{
    /* menukar dua bilangan bulat */
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Subbab Program dalam Beberapa Modul

void ResetJam (jam *J)
/* Mengisi sebuah jam J dengan 00:00:00 */
{
    /* KAMUS LOKAL */
    /* ALGORITMA */
    (*J).HH = 0;
    (*J).MM = 0;
    (*J).SS = 0;
}

void incTab (TabInt * T)
/* increment setiap element tabel */
{
    /* Kamus lokal */
    int i;
    /* Algoritma */
    /* traversal: print */
    for (i = 0; i < (*T).N; i++)
    {
        (*T).tab[i] = (*T).tab[i] + 1;
    }
}

int JamToDetik (jam J)
/* konversi jam ke detik */
{
    /* KAMUS LOKAL */
    /* ALGORITMA */
    return (J.HH * 3600 + J.MM * 60 + J.SS);
}

jam DetikToJam (int d)
/* konversi dari detik ke struktur jam */
{
    /* KAMUS LOKAL */
    jam J;
    int sisa;
    /* ALGORITMA */
    J.HH = d / 3600;
    sisa = d % 3600;
    J.MM = sisa / 60;
    J.SS = sisa % 60;
    return J;
}

// Subbab Pointer to Function

int succ (int i)
{
    return (i + 1);
}

int pred (int i)
{
    return (i - 1);
}

void geser (TabInt2 * TT, int (*f) (int)) // saya mengubah nama fungsi dari TabInt menjadi TabInt2 
//untuk membedakannya dengan fungsi TabInt yang ada di atas
{
    int i;
    for (i = 0; i < (*TT).N; i++)
    {
        (*TT).T[i] = f ((*TT).T[i]);
    }
}

void succI (int *i)
{
    *i = *i + 1;
}
void predI (int *i)
{
    *i = *i - 1;
}
void succC (char *c)
{
    *c = *c + 1;
}
void predC (char *c)
{
    *c = *c - 1;
}

// Subbab Scope dan Lifetime

void Pros1 (int i, int j, int *h)
{
    /* KAMUS LOKAL */
    int k;
    /* ALGORITMA */
    k = i + j;
    *h = i + j;
}
int fungsi1 ()
{
    /* KAMUS LOKAL */
    int i=0;
    static int j = 0;
    /* ALGORITMA */
    i= i+ 1;
    j = j + 1;
    return j;
}