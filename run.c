#include <sys/types.h>
#include <limits.h>

#include "run.h"
#include "util.h"

void *base = 0;

p_meta find_meta(p_meta *last, size_t size) {
  p_meta index = base;
  p_meta result = base;

  switch(fit_flag){
    case FIRST_FIT:
    {
while(index){
if(index->free=1&&index->=size)
{  result=index;
break;
}
index=index->next;
      //FIRST FIT CODE
    }
    break;


    case BEST_FIT:
    {
while(index)
{
if(index->free=1&&index->size>=size&&((lastsize==-1)||(lastsize>index->size)))
{
lastsize=index->size;
result=index;
}
index=index->next;
      //BEST_FIT CODE
    }
}
    break;

    case WORST_FIT:
    {while(index){
if(index->free==1&&index->size>=size){if(best_size==-1||index->size>best_size){
result=index;
best_size=index->size;}
}

index=index->next;
      //WORST_FIT CODE
    }
}
    break;

  }
  return result;
}

void *m_malloc(size_t size) {

}

void m_free(void *ptr) {

}

void*
m_realloc(void* ptr, size_t size)
{

}
