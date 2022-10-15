struct Node* addToEmpty(struct Node* last, int data)
{

	if (last != NULL)
		return last;
	struct Node* temp
		= (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	last = temp;
	temp->next = last;

	return last;
}
