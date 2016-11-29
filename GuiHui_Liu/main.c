#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main() {

  screen s;
  struct matrix *edges;
  struct matrix *transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);
  
  //add_box(edges,200,200,200,200,200,200);
  parse_file( "script_c_test", transform, edges, s );
  //print_matrix(edges);

  free_matrix( transform );
  free_matrix( edges );
}  
