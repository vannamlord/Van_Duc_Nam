#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdint.h>

typedef struct
{
	int value;
	void* previous_node;
}node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;

void get_len_ll(linked_list_t* ll) {
	printf("len: %d", ll->len);
}
void Add_obj(linked_list_t* ll, int val) {
	node_t* new_node = malloc(sizeof(node_t));

	new_node->value = val;
	new_node->previous_node = ll->last_node;

	ll->last_node = new_node;
	ll->len++;
}
linked_list_t link_list;
void main(){
	Add_obj(&link_list, 1);
	Add_obj(&link_list, 2);
}