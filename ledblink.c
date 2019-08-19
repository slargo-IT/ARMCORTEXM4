#define RCGCGPIO (*((unsigned int *) 0x400FE608U))
#define RGCGCPIO_DATA (*((unsigned int *)0x400253FCU))
#define RED (1U << 1)
#define BLUE (1U << 2)
#define GREEN (1U << 3)
#define NONE 0x00U
#define DELAY while(counter < 1000000){++counter;}



int main()
{
    RCGCGPIO = 0x20U;
    *((unsigned int *) 0x40025400U) = 0x0EU;
    *((unsigned int *) 0x4002551CU) = 0x0EU;
    unsigned int loop = 1;
    

  
  while(loop){  
    
         
           
         while(loop < 4){
           
         RGCGCPIO_DATA = RED;
         int counter = 0;
         DELAY;
         RGCGCPIO_DATA = NONE;
         counter = 0;
         
         DELAY;
         RGCGCPIO_DATA = BLUE;
         counter = 0;
         DELAY;
         
         RGCGCPIO_DATA = NONE;
         counter = 0;
         DELAY;
         
         RGCGCPIO_DATA = GREEN;
         counter = 0;
         DELAY;
         
         RGCGCPIO_DATA = NONE;
         counter = 0;           
         DELAY;
         
         RGCGCPIO_DATA = GREEN;
         RGCGCPIO_DATA |= RED;
         RGCGCPIO_DATA |= BLUE;
         counter = 0;
         DELAY;
      
         RGCGCPIO_DATA = NONE;
         counter = 0;
         DELAY;
         
         ++loop;
        }
  }

  return 0;
}
