//
//  core.c
//  Week 7 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdio.h>

#include "core.h"

// This function should initialize the 
// LinkedList to be a node holing the int "value"
// Make sure to also set the lists "type"
// return FALSE if error, TRUE otherwise
bool create_integer_node(LinkedList * list, int value) {
    if (list == NULL) {
        return FALSE;
    }
    
    list->type = Integer;
    list->value.i = value;
    
    return TRUE;
}

// This function should initialize the 
// LinkedList to be a node holing the char "value"
// Make sure to also set the lists "type"
// return FALSE if error, TRUE otherwise
bool create_character_node(LinkedList * list, char value) {
    if (list == NULL) {
        return FALSE;
    }
    
    list->type = Character;
    list->value.c = value;
    
    return TRUE;
}

// This function should initialize the 
// LinkedList to be a node holing the float "value"
// Make sure to also set the lists "type"
// return FALSE if error, TRUE otherwise
bool create_float_node(LinkedList * list, float value) {
    if (list == NULL) {
        return FALSE;
    }
    
    list->type = Float;
    list->value.f = value;
    
    return TRUE;
}

// This function should sum *only* the nodes
// which hold an integer. All other nodes should
// be ignored.
// return 0 if no list is provided
int sum_integer_nodes(LinkedList * list) {
    if (list == NULL) {
        return 0;
    }
    
    int total = 0;
    while (list != NULL) {
        if (list->type == Integer) {
            total += list->value.i;
        }
        list = list->next;
    }
    
    return total;
}

// This function should sum *only* the nodes
// which hold a float. All other nodes should
// be ignored.
// return 0.0 if no list is provided
float sum_float_nodes(LinkedList * list) {
    if (list == NULL) {
        return 0.0;
    }
    
    float total = 0.0;
    while (list != NULL) {
        if (list->type == Float) {
            total += list->value.f;
        }
        list = list->next;
    }
    
    return total;
}

// Nothing needs to be done in core_main
int core_main(int argc, const char * argv[]) {
    return 0;
}
