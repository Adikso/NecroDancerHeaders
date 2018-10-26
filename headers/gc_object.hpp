#ifndef COMMUNITYDLC_GC_OBJECT_HPP
#define COMMUNITYDLC_GC_OBJECT_HPP

#include <cstdio>
#include <cstdlib>

typedef __SIZE_TYPE__ size_t;

struct gc_object;

void * gc_malloc(size_t size) {
    return ((void * (*)(size_t)) 0x80b3860)(size);
}

void * gc_free(gc_object* obj) {
    return ((void * (*)(gc_object*)) 0x80c1b60)(obj);
}

struct gc_object {
    gc_object *succ;
    gc_object *pred;
    int flags;

    virtual ~gc_object(){
    }

    virtual void mark(){
    }

    void *operator new(size_t size) {
        return gc_malloc(size);
    }

    void operator delete(void *p) {
        gc_free((gc_object*)p);
    }
};

#endif //COMMUNITYDLC_GC_OBJECT_HPP
