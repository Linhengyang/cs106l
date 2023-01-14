# cs106l
quick review about C++ based on Stanford cs106l

built-in types

struct new_type_name // define a new type
{
    defined_type field1;
    defined_type field2;
}

new_type_name variable = {v1, v2} // create a new type variable and initialize its value
variable.field1; // access its field

pair: // a template
pair<defined_type, defined_type> new_type_variable = {v1, v2} // create a new type variable and initialize its value
new_type_variable.first, new_type_variable.second // access values
make_pair(v1, v2) // a function returns a pair with (v1, v2)

auto: use auto to claim variables when its type is complex( e.g, template) and determined( e.g, function returned)

struct bind:
when a pair is returned, use
auto [variable1, variable2] = f(args) to receive components separately