// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"

// along.cpp
cpp11::writable::data_frame numeric_along_interpolator(cpp11::doubles data, cpp11::integers group, cpp11::doubles time, bool history, bool keep_last, cpp11::doubles frames, cpp11::strings ease);
extern "C" SEXP _tweenr_numeric_along_interpolator(SEXP data, SEXP group, SEXP time, SEXP history, SEXP keep_last, SEXP frames, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numeric_along_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<bool>>(history), cpp11::as_cpp<cpp11::decay_t<bool>>(keep_last), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(frames), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// along.cpp
cpp11::writable::data_frame colour_along_interpolator(cpp11::doubles_matrix data, cpp11::integers group, cpp11::doubles time, bool history, bool keep_last, cpp11::doubles frames, cpp11::strings ease);
extern "C" SEXP _tweenr_colour_along_interpolator(SEXP data, SEXP group, SEXP time, SEXP history, SEXP keep_last, SEXP frames, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(colour_along_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<bool>>(history), cpp11::as_cpp<cpp11::decay_t<bool>>(keep_last), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(frames), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// along.cpp
cpp11::writable::data_frame constant_along_interpolator(cpp11::strings data, cpp11::integers group, cpp11::doubles time, bool history, bool keep_last, cpp11::doubles frames, cpp11::strings ease);
extern "C" SEXP _tweenr_constant_along_interpolator(SEXP data, SEXP group, SEXP time, SEXP history, SEXP keep_last, SEXP frames, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(constant_along_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<bool>>(history), cpp11::as_cpp<cpp11::decay_t<bool>>(keep_last), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(frames), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// along.cpp
cpp11::writable::data_frame list_along_interpolator(cpp11::list data, cpp11::integers group, cpp11::doubles time, bool history, bool keep_last, cpp11::doubles frames, cpp11::strings ease);
extern "C" SEXP _tweenr_list_along_interpolator(SEXP data, SEXP group, SEXP time, SEXP history, SEXP keep_last, SEXP frames, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(list_along_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<bool>>(history), cpp11::as_cpp<cpp11::decay_t<bool>>(keep_last), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(frames), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// along.cpp
cpp11::writable::data_frame numlist_along_interpolator(cpp11::list_of<cpp11::doubles> data, cpp11::integers group, cpp11::doubles time, bool history, bool keep_last, cpp11::doubles frames, cpp11::strings ease);
extern "C" SEXP _tweenr_numlist_along_interpolator(SEXP data, SEXP group, SEXP time, SEXP history, SEXP keep_last, SEXP frames, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numlist_along_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::doubles>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<bool>>(history), cpp11::as_cpp<cpp11::decay_t<bool>>(keep_last), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(frames), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// along.cpp
cpp11::writable::data_frame phase_along_interpolator(cpp11::integers group, cpp11::doubles time, bool history, bool keep_last, cpp11::doubles frames);
extern "C" SEXP _tweenr_phase_along_interpolator(SEXP group, SEXP time, SEXP history, SEXP keep_last, SEXP frames) {
  BEGIN_CPP11
    return cpp11::as_sexp(phase_along_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<bool>>(history), cpp11::as_cpp<cpp11::decay_t<bool>>(keep_last), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(frames)));
  END_CPP11
}
// at.cpp
cpp11::doubles numeric_at_interpolator(cpp11::doubles from, cpp11::doubles to, cpp11::doubles at, cpp11::strings ease);
extern "C" SEXP _tweenr_numeric_at_interpolator(SEXP from, SEXP to, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numeric_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(from), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(to), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// at.cpp
cpp11::doubles_matrix colour_at_interpolator(cpp11::doubles_matrix from, cpp11::doubles_matrix to, cpp11::doubles at, cpp11::strings ease);
extern "C" SEXP _tweenr_colour_at_interpolator(SEXP from, SEXP to, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(colour_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix>>(from), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix>>(to), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// at.cpp
cpp11::strings constant_at_interpolator(cpp11::strings from, cpp11::strings to, cpp11::doubles at, cpp11::strings ease);
extern "C" SEXP _tweenr_constant_at_interpolator(SEXP from, SEXP to, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(constant_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(from), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(to), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// at.cpp
cpp11::list list_at_interpolator(cpp11::list from, cpp11::list to, cpp11::doubles at, cpp11::strings ease);
extern "C" SEXP _tweenr_list_at_interpolator(SEXP from, SEXP to, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(list_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(from), cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(to), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// at.cpp
cpp11::list numlist_at_interpolator(cpp11::list_of<cpp11::doubles> from, cpp11::list_of<cpp11::doubles> to, cpp11::doubles at, cpp11::strings ease);
extern "C" SEXP _tweenr_numlist_at_interpolator(SEXP from, SEXP to, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numlist_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::doubles>>>(from), cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::doubles>>>(to), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element.cpp
cpp11::writable::data_frame numeric_element_interpolator(cpp11::doubles data, cpp11::integers group, cpp11::integers frame, cpp11::strings ease);
extern "C" SEXP _tweenr_numeric_element_interpolator(SEXP data, SEXP group, SEXP frame, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numeric_element_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(frame), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element.cpp
cpp11::writable::data_frame colour_element_interpolator(cpp11::doubles_matrix data, cpp11::integers group, cpp11::integers frame, cpp11::strings ease);
extern "C" SEXP _tweenr_colour_element_interpolator(SEXP data, SEXP group, SEXP frame, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(colour_element_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(frame), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element.cpp
cpp11::writable::data_frame constant_element_interpolator(cpp11::strings data, cpp11::integers group, cpp11::integers frame, cpp11::strings ease);
extern "C" SEXP _tweenr_constant_element_interpolator(SEXP data, SEXP group, SEXP frame, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(constant_element_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(frame), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element.cpp
cpp11::writable::data_frame list_element_interpolator(cpp11::list data, cpp11::integers group, cpp11::integers frame, cpp11::strings ease);
extern "C" SEXP _tweenr_list_element_interpolator(SEXP data, SEXP group, SEXP frame, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(list_element_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(frame), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element.cpp
cpp11::writable::data_frame numlist_element_interpolator(cpp11::list_of<cpp11::doubles> data, cpp11::integers group, cpp11::integers frame, cpp11::strings ease);
extern "C" SEXP _tweenr_numlist_element_interpolator(SEXP data, SEXP group, SEXP frame, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numlist_element_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::doubles>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(frame), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element.cpp
cpp11::writable::data_frame phase_element_interpolator(cpp11::strings data, cpp11::integers group, cpp11::integers frame, cpp11::strings ease);
extern "C" SEXP _tweenr_phase_element_interpolator(SEXP data, SEXP group, SEXP frame, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(phase_element_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(frame), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element_at.cpp
cpp11::writable::doubles numeric_element_at_interpolator(cpp11::doubles data, cpp11::integers group, cpp11::doubles time, double at, cpp11::strings ease);
extern "C" SEXP _tweenr_numeric_element_at_interpolator(SEXP data, SEXP group, SEXP time, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numeric_element_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<double>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element_at.cpp
cpp11::writable::data_frame colour_element_at_interpolator(cpp11::doubles_matrix data, cpp11::integers group, cpp11::doubles time, double at, cpp11::strings ease);
extern "C" SEXP _tweenr_colour_element_at_interpolator(SEXP data, SEXP group, SEXP time, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(colour_element_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<double>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element_at.cpp
cpp11::writable::strings constant_element_at_interpolator(cpp11::strings data, cpp11::integers group, cpp11::doubles time, double at, cpp11::strings ease);
extern "C" SEXP _tweenr_constant_element_at_interpolator(SEXP data, SEXP group, SEXP time, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(constant_element_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<double>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element_at.cpp
cpp11::writable::list list_element_at_interpolator(cpp11::list data, cpp11::integers group, cpp11::doubles time, double at, cpp11::strings ease);
extern "C" SEXP _tweenr_list_element_at_interpolator(SEXP data, SEXP group, SEXP time, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(list_element_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<double>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element_at.cpp
cpp11::writable::list numlist_element_at_interpolator(cpp11::list_of<cpp11::doubles> data, cpp11::integers group, cpp11::doubles time, double at, cpp11::strings ease);
extern "C" SEXP _tweenr_numlist_element_at_interpolator(SEXP data, SEXP group, SEXP time, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numlist_element_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::doubles>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<double>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// element_at.cpp
cpp11::writable::strings phase_element_at_interpolator(cpp11::strings data, cpp11::integers group, cpp11::doubles time, double at, cpp11::strings ease);
extern "C" SEXP _tweenr_phase_element_at_interpolator(SEXP data, SEXP group, SEXP time, SEXP at, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(phase_element_at_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(group), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(time), cpp11::as_cpp<cpp11::decay_t<double>>(at), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// fill.cpp
cpp11::doubles numeric_fill_interpolator(cpp11::doubles data, cpp11::strings ease);
extern "C" SEXP _tweenr_numeric_fill_interpolator(SEXP data, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numeric_fill_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// fill.cpp
cpp11::doubles_matrix colour_fill_interpolator(cpp11::doubles_matrix data, cpp11::strings ease);
extern "C" SEXP _tweenr_colour_fill_interpolator(SEXP data, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(colour_fill_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// fill.cpp
cpp11::strings constant_fill_interpolator(cpp11::strings data, cpp11::strings ease);
extern "C" SEXP _tweenr_constant_fill_interpolator(SEXP data, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(constant_fill_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// fill.cpp
cpp11::list list_fill_interpolator(cpp11::list data, cpp11::strings ease);
extern "C" SEXP _tweenr_list_fill_interpolator(SEXP data, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(list_fill_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// fill.cpp
cpp11::list numlist_fill_interpolator(cpp11::list_of<cpp11::doubles> data, cpp11::strings ease);
extern "C" SEXP _tweenr_numlist_fill_interpolator(SEXP data, SEXP ease) {
  BEGIN_CPP11
    return cpp11::as_sexp(numlist_fill_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::doubles>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::strings>>(ease)));
  END_CPP11
}
// state.cpp
cpp11::doubles numeric_state_interpolator(cpp11::list_of<cpp11::doubles> data, cpp11::data_frame states);
extern "C" SEXP _tweenr_numeric_state_interpolator(SEXP data, SEXP states) {
  BEGIN_CPP11
    return cpp11::as_sexp(numeric_state_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::doubles>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::data_frame>>(states)));
  END_CPP11
}
// state.cpp
cpp11::doubles_matrix colour_state_interpolator(cpp11::list_of<cpp11::doubles_matrix> data, cpp11::data_frame states);
extern "C" SEXP _tweenr_colour_state_interpolator(SEXP data, SEXP states) {
  BEGIN_CPP11
    return cpp11::as_sexp(colour_state_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::doubles_matrix>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::data_frame>>(states)));
  END_CPP11
}
// state.cpp
cpp11::strings constant_state_interpolator(cpp11::list_of<cpp11::strings> data, cpp11::data_frame states);
extern "C" SEXP _tweenr_constant_state_interpolator(SEXP data, SEXP states) {
  BEGIN_CPP11
    return cpp11::as_sexp(constant_state_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::strings>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::data_frame>>(states)));
  END_CPP11
}
// state.cpp
cpp11::list list_state_interpolator(cpp11::list_of<cpp11::list> data, cpp11::data_frame states);
extern "C" SEXP _tweenr_list_state_interpolator(SEXP data, SEXP states) {
  BEGIN_CPP11
    return cpp11::as_sexp(list_state_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::list>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::data_frame>>(states)));
  END_CPP11
}
// state.cpp
cpp11::list numlist_state_interpolator(cpp11::list_of<cpp11::list> data, cpp11::data_frame states);
extern "C" SEXP _tweenr_numlist_state_interpolator(SEXP data, SEXP states) {
  BEGIN_CPP11
    return cpp11::as_sexp(numlist_state_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::list>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::data_frame>>(states)));
  END_CPP11
}
// state.cpp
cpp11::strings phase_state_interpolator(cpp11::list_of<cpp11::strings> data, cpp11::data_frame states);
extern "C" SEXP _tweenr_phase_state_interpolator(SEXP data, SEXP states) {
  BEGIN_CPP11
    return cpp11::as_sexp(phase_state_interpolator(cpp11::as_cpp<cpp11::decay_t<cpp11::list_of<cpp11::strings>>>(data), cpp11::as_cpp<cpp11::decay_t<cpp11::data_frame>>(states)));
  END_CPP11
}

extern "C" {
/* .Call calls */
extern SEXP _tweenr_colour_along_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_colour_at_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_colour_element_at_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_colour_element_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_colour_fill_interpolator(SEXP, SEXP);
extern SEXP _tweenr_colour_state_interpolator(SEXP, SEXP);
extern SEXP _tweenr_constant_along_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_constant_at_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_constant_element_at_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_constant_element_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_constant_fill_interpolator(SEXP, SEXP);
extern SEXP _tweenr_constant_state_interpolator(SEXP, SEXP);
extern SEXP _tweenr_list_along_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_list_at_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_list_element_at_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_list_element_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_list_fill_interpolator(SEXP, SEXP);
extern SEXP _tweenr_list_state_interpolator(SEXP, SEXP);
extern SEXP _tweenr_numeric_along_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_numeric_at_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_numeric_element_at_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_numeric_element_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_numeric_fill_interpolator(SEXP, SEXP);
extern SEXP _tweenr_numeric_state_interpolator(SEXP, SEXP);
extern SEXP _tweenr_numlist_along_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_numlist_at_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_numlist_element_at_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_numlist_element_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_numlist_fill_interpolator(SEXP, SEXP);
extern SEXP _tweenr_numlist_state_interpolator(SEXP, SEXP);
extern SEXP _tweenr_phase_along_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_phase_element_at_interpolator(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_phase_element_interpolator(SEXP, SEXP, SEXP, SEXP);
extern SEXP _tweenr_phase_state_interpolator(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_tweenr_colour_along_interpolator",        (DL_FUNC) &_tweenr_colour_along_interpolator,        7},
    {"_tweenr_colour_at_interpolator",           (DL_FUNC) &_tweenr_colour_at_interpolator,           4},
    {"_tweenr_colour_element_at_interpolator",   (DL_FUNC) &_tweenr_colour_element_at_interpolator,   5},
    {"_tweenr_colour_element_interpolator",      (DL_FUNC) &_tweenr_colour_element_interpolator,      4},
    {"_tweenr_colour_fill_interpolator",         (DL_FUNC) &_tweenr_colour_fill_interpolator,         2},
    {"_tweenr_colour_state_interpolator",        (DL_FUNC) &_tweenr_colour_state_interpolator,        2},
    {"_tweenr_constant_along_interpolator",      (DL_FUNC) &_tweenr_constant_along_interpolator,      7},
    {"_tweenr_constant_at_interpolator",         (DL_FUNC) &_tweenr_constant_at_interpolator,         4},
    {"_tweenr_constant_element_at_interpolator", (DL_FUNC) &_tweenr_constant_element_at_interpolator, 5},
    {"_tweenr_constant_element_interpolator",    (DL_FUNC) &_tweenr_constant_element_interpolator,    4},
    {"_tweenr_constant_fill_interpolator",       (DL_FUNC) &_tweenr_constant_fill_interpolator,       2},
    {"_tweenr_constant_state_interpolator",      (DL_FUNC) &_tweenr_constant_state_interpolator,      2},
    {"_tweenr_list_along_interpolator",          (DL_FUNC) &_tweenr_list_along_interpolator,          7},
    {"_tweenr_list_at_interpolator",             (DL_FUNC) &_tweenr_list_at_interpolator,             4},
    {"_tweenr_list_element_at_interpolator",     (DL_FUNC) &_tweenr_list_element_at_interpolator,     5},
    {"_tweenr_list_element_interpolator",        (DL_FUNC) &_tweenr_list_element_interpolator,        4},
    {"_tweenr_list_fill_interpolator",           (DL_FUNC) &_tweenr_list_fill_interpolator,           2},
    {"_tweenr_list_state_interpolator",          (DL_FUNC) &_tweenr_list_state_interpolator,          2},
    {"_tweenr_numeric_along_interpolator",       (DL_FUNC) &_tweenr_numeric_along_interpolator,       7},
    {"_tweenr_numeric_at_interpolator",          (DL_FUNC) &_tweenr_numeric_at_interpolator,          4},
    {"_tweenr_numeric_element_at_interpolator",  (DL_FUNC) &_tweenr_numeric_element_at_interpolator,  5},
    {"_tweenr_numeric_element_interpolator",     (DL_FUNC) &_tweenr_numeric_element_interpolator,     4},
    {"_tweenr_numeric_fill_interpolator",        (DL_FUNC) &_tweenr_numeric_fill_interpolator,        2},
    {"_tweenr_numeric_state_interpolator",       (DL_FUNC) &_tweenr_numeric_state_interpolator,       2},
    {"_tweenr_numlist_along_interpolator",       (DL_FUNC) &_tweenr_numlist_along_interpolator,       7},
    {"_tweenr_numlist_at_interpolator",          (DL_FUNC) &_tweenr_numlist_at_interpolator,          4},
    {"_tweenr_numlist_element_at_interpolator",  (DL_FUNC) &_tweenr_numlist_element_at_interpolator,  5},
    {"_tweenr_numlist_element_interpolator",     (DL_FUNC) &_tweenr_numlist_element_interpolator,     4},
    {"_tweenr_numlist_fill_interpolator",        (DL_FUNC) &_tweenr_numlist_fill_interpolator,        2},
    {"_tweenr_numlist_state_interpolator",       (DL_FUNC) &_tweenr_numlist_state_interpolator,       2},
    {"_tweenr_phase_along_interpolator",         (DL_FUNC) &_tweenr_phase_along_interpolator,         5},
    {"_tweenr_phase_element_at_interpolator",    (DL_FUNC) &_tweenr_phase_element_at_interpolator,    5},
    {"_tweenr_phase_element_interpolator",       (DL_FUNC) &_tweenr_phase_element_interpolator,       4},
    {"_tweenr_phase_state_interpolator",         (DL_FUNC) &_tweenr_phase_state_interpolator,         2},
    {NULL, NULL, 0}
};
}

extern "C" void R_init_tweenr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
