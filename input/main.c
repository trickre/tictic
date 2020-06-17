#include <stdio.h>

static int var1 ;
static int is_on ;

void Interval_func();

int main(){
  int i = 0;

  for (i ;i<100;i++){
    Interval_func() ;
  }
}

void Interval_func(){
  
  if(is_on){
    var1++ ;
  }
  
}
