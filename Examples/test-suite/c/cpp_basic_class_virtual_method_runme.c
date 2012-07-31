#include <assert.h>
#include "cpp_basic_class_virtual_method/cpp_basic_class_virtual_method_proxy.h"

int main()
{
    BaseClass *bc = new_BaseClass();
    NonMethodOverwritingClass *noc = new_NonMethodOverwritingClass();
    MethodOverwritingClass *oc = new_MethodOverwritingClass();

    assert(BaseClass_myInt(bc) == 0xba53);
    assert(NonMethodOverwritingClass_myInt(noc) == 0xba53);
    assert(MethodOverwritingClass_myInt(oc) == 0xa173123d);
    
    delete_BaseClass(bc);
    delete_NonMethodOverwritingClass(noc);
    delete_MethodOverwritingClass(oc);
    
    return 0;
}