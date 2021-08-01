Node *mergeLists(Node *first_node, Node *second_node);{
    Node head;
    Node *res = &head;

    while(first_node || second_node){
        Node **cur_min = &second_node;
        if (first_node == NULL){
            cur_min = &second_node;
        }
        else if (second_node == NULL){
            cur_min = &first_node;
        }
        else if (first_node -> data  < (*second_node).data){
            cur_min = &first_node;
        }

        res -> next = *cur_min;
        *cur_min = (*cur_min) -> next;
        res -> next -> next = NULL;
        res = res -> next;
    }
    res -> next = NULL;
    return head.next;
}
