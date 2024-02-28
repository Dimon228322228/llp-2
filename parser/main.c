#include "parser.tab.h"

int main() {
    yyparse();
    print_ast_node(get_root_ast_node());
    free_ast_node(get_root_ast_node());
    return 0;
}