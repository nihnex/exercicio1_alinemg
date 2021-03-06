//#define EIGENLIB			// uncomment to use Eigen linear algebra library
//#define NO_POINTER_INIT	// uncomment to disable pointer checking

#include "fun_head_fast.h"

// do not add Equations in this area

MODELBEGIN

// insert your equations here, between the MODELBEGIN and MODELEND words




//Exemplo aula 01
/*
<<<<<<< Updated upstream
EQUATION("X")
//Vari�vel X
RESULT(VL("X",1)+V("c"))
*/

/*
//Exercicio 01 - passeio aleatorio
EQUATION("X")
RESULT(VL("X",1)+RND)
*/


//Exercicio 01 - passeio aleatorio opcao 2
EQUATION("X")
RESULT(VL("X",1)+V("c"))
EQUATION("c")
v[0] = V("min");
v[1] = V("max");
v[2] = uniform(v[0], v[1]);
RESULT(v[2])


/*
//Exercicio 01 - passeio aleatorio opcao 3
EQUATION("X")
v[0] = CURRENT;
v[1] = V("c");
v[2] = v[0]+v[1];
RESULT(v[2])
*/

MODELEND

// do not add Equations in this area

void close_sim( void )
{
	// close simulation special commands go here
}
