#include <gtest/gtest.h>
#include <stdlib.h>
#include "../LastTask.hpp"

TEST(LastTask_maxab_Test, maxab){
    int a = 5;
    int b = 10;
    int expectedMaxab = 10;
    EXPECT_EQ(expectedMaxab, maxab(a,b));
}

TEST(LastTask_tukar_Test, tukar){
    int *x, *y;
    int p = 4;
    int q = 5;
    x = &p;
    y = &q;
    int expectedTukarx = 5;
    int expectedTukary = 4;
    tukar(x, y);
    EXPECT_EQ(expectedTukarx, p);
    EXPECT_EQ(expectedTukary, q);
}

TEST(LastTask_resetJam_Test, ResetJam){
    jam *J;
    jam expectedReset, a;
    expectedReset.HH = 0;
    expectedReset.MM = 0;
    expectedReset.SS = 0;
    J = &a;
    ResetJam(J);
    EXPECT_EQ(expectedReset.HH, a.HH);
    EXPECT_EQ(expectedReset.MM, a.MM);
    EXPECT_EQ(expectedReset.SS, a.SS);
}

TEST(LastTask_incTab_Test, incTab){
    TabInt T;
    T.tab = (int*) malloc(3*sizeof(int));
    *(T.tab) = 5;
    *(T.tab + 1) = 4;
    *(T.tab + 2) = 3;
    T.N = 3;
    int expectedT[3] = {6,5,4};
    incTab(&T);
    for(int i = 0; i < T.N; i++){
        EXPECT_EQ(expectedT[i], *(T.tab + i));
    }
}

TEST(LastTask_jamToDetik_Test, JamToDetik){
    jam J;
    J.HH = 2;
    J.MM = 3;
    J.SS = 4;
    int expectedDetik = 7384;
    EXPECT_EQ(expectedDetik, JamToDetik(J));
}

TEST(LastTask_detikToJam_Test, DetikToJam){
    int d = 7384;
    jam expectedJam;
    expectedJam.HH = 2;
    expectedJam.MM = 3;
    expectedJam.SS = 4;
    jam result = DetikToJam(d);
    EXPECT_EQ(expectedJam.HH, result.HH);
    EXPECT_EQ(expectedJam.MM, result.MM);
    EXPECT_EQ(expectedJam.SS, result.SS);
}

TEST(LastTask_succ_Test, succ){
    int i = 4;
    int expectedSucc = 5;
    EXPECT_EQ(expectedSucc, succ(i));
}

TEST(LastTask_pred_Test, pred){
    int i = 9;
    int expectedPred = 8;
    EXPECT_EQ(expectedPred, pred(i));
}

TEST(LastTask_geser_Test, geser){
    TabInt2 T;
    T.N = 10;
    for(int i = 0; i<10; i++){
        T.T[i] = i;
    }
    geser(&T, succ);
    int expectedGeser[10];
    for(int i = 0; i<10; i++){
        expectedGeser[i] = i+1;
        EXPECT_EQ(expectedGeser[i], T.T[i]);
    }
}

TEST(LastTask_succI_Test, succI){
    int *i,p;
    i = &p;
    p = 4;
    int expectedSuccI = 5;
    succI(i);
    EXPECT_EQ(expectedSuccI, p);
}

TEST(LastTask_predI_Test, predI){
    int *i,p;
    i = &p;
    p = 4;
    int expectedSuccI = 3;
    predI(i);
    EXPECT_EQ(expectedSuccI, p);
}

TEST(LastTask_succC_Test, succC){
    char *i,p;
    i = &p;
    p = 'b';
    char expectedSuccC = 'c';
    succC(i);
    EXPECT_EQ(expectedSuccC, p);
}

TEST(LastTask_predC_Test, predC){
    char *i,p;
    i = &p;
    p = 'b';
    char expectedPredC = 'a';
    predC(i);
    EXPECT_EQ(expectedPredC, p);
}

TEST(LastTask_Pros1_Test, Pros1){
    int i, j, k, *h, p;
    i = 3;
    j = 2;
    p = 8;
    h = &p;
    k = 7;
    int expectedK = 7;
    int expectedPtrh = 5;
    Pros1(i,j,h);
    EXPECT_EQ(expectedK, k);
    EXPECT_EQ(expectedPtrh, *h);
}

TEST(LastTask_fungsi1_Test, fungsi1){
    int i, j, result;
    i = 2;
    j = 3;
    result = fungsi1();
    int expectedI = 2;
    int expectedJ = 3;
    int expectedResult = 1;
    EXPECT_EQ(expectedI, i);
    EXPECT_EQ(expectedJ, j);
    EXPECT_EQ(expectedResult, result);
}