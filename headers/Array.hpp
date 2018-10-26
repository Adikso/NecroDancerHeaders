// ***** Array *****
#ifndef _Array
#define _Array

#include "Object.hpp"
template<class T> class Array;

gc_object *gc_object_alloc( int size );

template<class T> T *t_memcpy( T *dst,const T *src,int n ){
    memcpy( dst,src,n*sizeof(T) );
    return dst+n;
}

template<class T> T *t_memset( T *dst,int val,int n ){
    memset( dst,val,n*sizeof(T) );
    return dst+n;
}

template<class T> int t_memcmp( const T *x,const T *y,int n ){
    return memcmp( x,y,n*sizeof(T) );
}

template<class T> int t_strlen( const T *p ){
    const T *q=p++;
    while( *q++ ){}
    return q-p;
}

template<class T> T *t_create( int n,T *p ){
    t_memset( p,0,n );
    return p+n;
}

template<class T> T *t_create( int n,T *p,const T *q ){
    t_memcpy( p,q,n );
    return p+n;
}

template<class T> void t_destroy( int n,T *p ){
}

template<class T> void gc_mark_elements( int n,T *p ){
}

template<class T> void gc_mark_elements( int n,T **p ){
    for( int i=0;i<n;++i ) gc_mark( p[i] );
}

template<class T> class Array{
public:
    Array():rep( &nullRep ){
    }

    //Uses default...
//	Array( const Array<T> &t )...

    Array( int length ):rep( Rep::alloc( length ) ){
        t_create( rep->length,rep->data );
    }

    Array( const T *p,int length ):rep( Rep::alloc(length) ){
        t_create( rep->length,rep->data,p );
    }

    ~Array(){
    }

    //Uses default...
//	Array &operator=( const Array &t )...

    int Length()const{
        return rep->length;
    }

    T &At( int index ){
//        if( index<0 || index>=rep->length ) dbg_error( "Array index out of range" );
        return rep->data[index];
    }

    const T &At( int index )const{
//        if( index<0 || index>=rep->length ) dbg_error( "Array index out of range" );
        return rep->data[index];
    }

    T &operator[]( int index ){
        return rep->data[index];
    }

    const T &operator[]( int index )const{
        return rep->data[index];
    }

    Array Slice( int from,int term )const{
        int len=rep->length;
        if( from<0 ){
            from+=len;
            if( from<0 ) from=0;
        }else if( from>len ){
            from=len;
        }
        if( term<0 ){
            term+=len;
        }else if( term>len ){
            term=len;
        }
        if( term<=from ) return Array();
        return Array( rep->data+from,term-from );
    }

    Array Slice( int from )const{
        return Slice( from,rep->length );
    }

    Array Resize( int newlen )const{
        if( newlen<=0 ) return Array();
        int n=rep->length;
        if( newlen<n ) n=newlen;
        Rep *p=Rep::alloc( newlen );
        T *q=p->data;
        q=t_create( n,q,rep->data );
        q=t_create( (newlen-n),q );
        return Array( p );
    }

private:
    struct Rep : public gc_object{
        int length;
        T data[0];

        Rep():length(0){
            flags=3;
        }

        Rep( int length ):length(length){
        }

        ~Rep(){
            t_destroy( length,data );
        }

        void mark(){
            gc_mark_elements( length,data );
        }

        static Rep *alloc( int length ){
            if( !length ) return &nullRep;
            void *p=gc_object_alloc( sizeof(Rep)+length*sizeof(T) );
            return ::new(p) Rep( length );
        }

    };
    Rep *rep;

    static Rep nullRep;

    template<class C> friend void gc_mark( Array<C> t );
    template<class C> friend void gc_mark_q( Array<C> t );
    template<class C> friend Array<C> gc_retain( Array<C> t );
    template<class C> friend void gc_assign( Array<C> &lhs,Array<C> rhs );
    template<class C> friend void gc_mark_elements( int n,Array<C> *p );

    Array( Rep *rep ):rep(rep){
    }
};

template<class T> typename Array<T>::Rep Array<T>::nullRep;

template<class T> Array<T> *t_create( int n,Array<T> *p ){
    for( int i=0;i<n;++i ) *p++=Array<T>();
    return p;
}

template<class T> Array<T> *t_create( int n,Array<T> *p,const Array<T> *q ){
    for( int i=0;i<n;++i ) *p++=*q++;
    return p;
}

template<class T> void gc_mark( Array<T> t ){
    gc_mark( t.rep );
}

template<class T> void gc_mark_q( Array<T> t ){
    gc_mark_q( t.rep );
}

template<class T> Array<T> gc_retain( Array<T> t ){
#if CFG_CPP_GC_MODE==2
    gc_retain( t.rep );
#endif
    return t;
}

template<class T> void gc_assign( Array<T> &lhs,Array<T> rhs ){
    gc_mark( rhs.rep );
    lhs=rhs;
}

template<class T> void gc_mark_elements( int n,Array<T> *p ){
    for( int i=0;i<n;++i ) gc_mark( p[i].rep );
}

#endif