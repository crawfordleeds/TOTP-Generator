

#ifndef __GENERATOR_H
#define __GENERATOR_H

#include <stdio.h>


#define CONFIG_FILE ".totp.conf"


typedef _Bool bool





bool check_configuration( File * configFile);
void generate_config( configFile);



#endif