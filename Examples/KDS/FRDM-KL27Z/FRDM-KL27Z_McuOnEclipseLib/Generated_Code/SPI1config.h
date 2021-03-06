/**
 * \file
 * \brief Configuration header file for GenericSWI2C
 *
 * This header file is used to configure settings of the software (bit-banging) I2C module.
 */

#ifndef __SPI1_CONFIG_H
#define __SPI1_CONFIG_H

#ifndef SPI1_CONFIG_CLOCK_POLARITY
  #define SPI1_CONFIG_CLOCK_POLARITY  0
    /*!< 0: clock is low if idle; 1: clock is high if idle */
#endif

#ifndef SPI1_CONFIG_CLOCK_EDGE
  #define SPI1_CONFIG_CLOCK_EDGE  0
    /*!< 0: data is shifted on falling clock edge; 1: data is shifted on rising clock edge */
#endif


#endif /* __SPI1_CONFIG_H */

