/*  version 3.1
 *
 *
 */

#ifndef _rt_spi
#define _rt_spi

#ifdef linux

#include <fcntl.h>      //Needed for SPI port
#include <sys/ioctl.h>  //Needed for SPI port

// incredibly obscure bug in SPI_IOC_MESSAGE macro is fixed by this
#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
extern "C" {
#endif

#include <linux/spi/spidev.h>

#ifdef __cplusplus /* If this is a C++ compiler, use C linkage */
}
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>  //Needed for SPI port

#define K_WORDS_PER_MESSAGE 64

void init_spi();

void spi_send_receive();

void spi_driver_run();

void spi_close();

/*!
 * SPI command message
 */
typedef struct {
    uint16_t mode;
    uint16_t length;
    float q_des[8];
    float qdot_des[8];
    float i_des[8];
    uint32_t flags[6];
    uint32_t checksum;
} spine_cmd_t;

/*!
 * SPI data message
 */
typedef struct {
    float q[8];
    float qdot[8];
    float i[8];
    uint16_t motor_status[8];
    uint32_t flags[3];
    uint32_t checksum;
} spine_data_t;

void set_spine_data(spine_cmd_t &spine_cmd);

void get_spine_data(spine_data_t &spine_data);

uint32_t xor_checksum(uint32_t *data, size_t len);

#endif // END of #ifdef linux

#endif

