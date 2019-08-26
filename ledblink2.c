#define RCGCGPIO (*((unsigned int *) 0x400FE608U))
#define RGCGCPIO_DATA (*((unsigned int *)0x400253FCU))
#define RED (1U << 1)
#define BLUE (1U << 2)
#define GREEN (1U << 3)
#define NONE 0x00U

unsigned int delay(unsigned int);

int main(){
  
    RCGCGPIO = 0x20U;
    *((unsigned int *) 0x40025400U) = 0x0EU;
    *((unsigned int *) 0x4002551CU) = 0x0EU;
    unsigned int i = 0;
                          
            for(i=1; i<5;++i){
           
            RGCGCPIO_DATA = RED;
            delay(0);
            RGCGCPIO_DATA = NONE;
            delay(0);
         
            
            RGCGCPIO_DATA = BLUE;
            delay(0);
         
            RGCGCPIO_DATA = NONE;
            delay(0);
         
            RGCGCPIO_DATA = GREEN;
            delay(0);
         
            RGCGCPIO_DATA = NONE;          
            delay(0);
         
            RGCGCPIO_DATA = GREEN;
            RGCGCPIO_DATA |= RED;
            RGCGCPIO_DATA |= BLUE;
            delay(0);
      
            RGCGCPIO_DATA = NONE;
            delay(0);
            }
        
  return 0;
}

unsigned int delay(unsigned int n){
      while(n < 1000000){
        ++n;
       }
       return 0;}
