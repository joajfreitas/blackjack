typedef struct stack {
	void *payload;
	struct stack *next;
} stack;

void stack_push(stack **sp, void *payload);
void stack_pop(stack **sp);