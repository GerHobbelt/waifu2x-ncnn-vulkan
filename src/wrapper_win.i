%module libWaifu2x
%{
#include "wrapper.h"
%}

%include "std_wstring.i"
typedef std::wstring path_t;

%include "std_vector.i"
namespace std {
        %template(IntVector) vector<int>;
}
%include "wrapper.h"
