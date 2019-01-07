#include "caravan.h"
#include <stdlib.h>
/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/

struct _node {
   Node* next;
  void* data;
};

struct CaravanImplementation {
  Node head;
};


Caravan new_caravan()
{
  return (Caravan)malloc(sizeof(List));
}

int get_length(Caravan caravan)
{
  return 0;
}

void delete_caravan(Caravan caravan)
{
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}

void optimize_load(Caravan caravan)
{

}
