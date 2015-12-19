/*
 * Stack (LIFO) - Optimized for 8 bits uP
 * Copyright (C) 2015 - Luigi E. Sica Nery
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _STACK_H_
#define _STACK_H_

typedef struct stack stack_t; ///< @typedef Stack type definition

struct stack {
    unsigned char* stckv; ///<Stack vector
    unsigned char size; ///<Stack size
    unsigned char now; ///<Stack top pointer
};

/**
 * @brief Initialize a previously declared stack
 *
 * Assing a vector and size to a stack and empty the stack
 *
 * @param stck Stack pointer
 * @param stckv Pointer to a char vector to compose the stack
 * @param size Size of stack
 *
 * @warning Actually, the final stack capacity is size minus 1
 */
void stackInit(stack_t* stck, unsigned char* stckv, unsigned char size);

/**
 * @brief Add one element to stack
 *
 * @param stck Stack pointer
 * @param element New element to stack
 */
void stackPush(stack_t* stck, unsigned char element);

/**
 * @brief Get and remove the element from top stack
 *
 * @param stck Stack pointer
 *
 * @return Returns element from stack top
 */
unsigned char stackPop(stack_t* stck);

/**
 * @brief Get the element from top stack
 *
 * @param stck Stack pointer
 *
 * @return Returns element from stack top
 */
unsigned char stackTop(stack_t* stck);

/**
 * @brief Return if stack is full
 *
 * @param stck Stack pointer
 *
 * @return Returns 1 if full
 */
unsigned char stackFull(stack_t* stck);

/**
 * @brief Return if stack is empty
 *
 * @param stck Stack pointer
 *
 * @return Returns 1 if empty
 */
unsigned char stackEmpty(stack_t* stck);

#endif // _STACK_H_
