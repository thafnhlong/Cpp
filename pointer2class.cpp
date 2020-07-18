Syntax for Declaration :

=> datatype class_name :: *pointer_name;

Syntax for Assignment:

=> pointer_name = &class_name :: datamember_name;

Both declaration and assignment can be done in a single statement too.

=> datatype class_name::*pointer_name = &class_name::datamember_name ;

For accessing normal data members we use the dot . operator with object and -> qith pointer to object.
But when we have a pointer to data member, we have to dereference that pointer to get what its pointing to, hence it becomes,

=> Object.*pointerToMember
and with pointer to object, it can be accessed by writing,

=> ObjectPointer->*pointerToMember

Pointers can be used to point to class's Member functions.

Syntax:

=> return_type (class_name::*ptr_name) (argument_type) = &class_name::function_name;
