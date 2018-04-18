#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "stack.h"
#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct stack *cstack;
  struct matrix * polygons;
  // struct matrix * transform;

  edges = new_matrix(4, 4);
  // transform = new_matrix(4, 4);
  cstack = new_stack();
  polygons = new_matrix(4, 4);

  if ( argc == 2 )
    parse_file( argv[1], cstack, edges, polygons, s );
  else
    parse_file( "stdin", cstack, edges, polygons, s );

  free_matrix( edges );
  //free_matrix( transform );
  free_stack(cstack);
  free_matrix( polygons );

}
