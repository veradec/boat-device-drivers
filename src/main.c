#include <linux/module.h>
#include <linux/init.h>
#include <stdio.h>

int boat_init(void) {
  printf("boat: Everything works!\n");
  return 0;
}

int boat_exit(void) {
  printf("boat: Ending works!\n");
  return 0;
}

module_init(boat_init);
module_exit(boat_exit);

MODULE_LICENSE("MIT");
