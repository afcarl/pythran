#ifndef PYTHONIC_GENERATOR_H
#define PYTHONIC_GENERATOR_H
namespace pythonic {

    template <class T>
        struct generator_iterator : std::iterator_traits<std::forward_iterator_tag, typename T::return_type> {
            T * the_generator;
            generator_iterator() : the_generator(nullptr) {}
            generator_iterator(T* a_generator) : the_generator(a_generator) {}
            generator_iterator& operator++() { assert(the_generator); the_generator->next(); return *this; }
            typename T::return_type operator*() { assert(the_generator); return *the_generator; }
            bool operator!=(generator_iterator<T> const & other) { return other.the_generator and (*the_generator) != (*other.the_generator); }
        };
}
#endif
