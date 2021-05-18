%module libWaifu2x
%{
#include "wrapper.h"
%}

#if _WIN32
%include "std_wstring.i"
typedef std::wstring path_t;
#else
%include "std_string.i"
typedef std::string path_t;
#endif

%include "std_vector.i"
namespace std {
        %template(IntVector) vector<int>;
}
%include "wrapper.h"
