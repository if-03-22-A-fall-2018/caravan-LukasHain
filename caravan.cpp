
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
#include "caravan.h"
#include <stdlib.h>
#include "general.h"

struct _node {
   Node* next;
   PackAnimal pack_animal;
};

struct CaravanImplementation {
  Node* head;
};


Caravan new_caravan()
{
  Caravan caravan = (Caravan)malloc(sizeof(struct CaravanImplementation));
  caravan->head = 0;
  return caravan;
}

int get_length(Caravan caravan)
{
  int count = 0;
  Node* curr = caravan->head;

  while(curr != 0){
    count++;
    curr = curr->next;
  }
  return count;
}

void delete_caravan(Caravan caravan)
{
  Node* curr = caravan->head;
  while(curr !=0){
    Node* head = caravan->head;
    caravan->head = head->next;
    sfree(head);
  }

  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
  if((animal == 0) || (get_caravan(animal) == caravan)){
    return;
  }
  if(get_caravan(animal) != 0){
    remove_pack_animal(get_caravan(animal), animal);
  }

  add_to_caravan(animal, caravan);
  Node* new_node = (Node*)malloc(sizeof(Node));

  new_node->pack_animal = animal;
  new_node->next = caravan->head;
  caravan->head = new_node;
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
  Node* crnt_node = caravan->head;

  if(crnt_node == 0 || animal == 0){
    return;
  }

  remove_from_caravan(animal, caravan);
  if(crnt_node->pack_animal == animal){
    caravan->head = crnt_node->next;
    sfree(crnt_node);
    return;
  }

  while((crnt_node->next != 0) && (crnt_node->next->pack_animal != animal)){
    crnt_node = crnt_node->next;
  }

  if(crnt_node->next == 0){
    return;
  }

  Node* node_next = crnt_node->next;
  crnt_node->next = node_next->next;
  sfree(node_next);
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
