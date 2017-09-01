#ifndef PIECE_CTRL_H_XQWI1BV4
#define PIECE_CTRL_H_XQWI1BV4

#include <stdio.h>
#include "app_util_platform.h"
#include "piece_ctrl.h"
#include "location.h"
#include "twi.h"

#include "nrf_log.h"
#include "nrf_log_ctrl.h"

typedef struct 
{
  uint8_t   x_coord;
  uint8_t   y_coord;
  uint8_t   id;
} piece_t;

void pieces_init();

ret_code_t update_location();

#endif /* end of include guard: PIECE_CTRL_H_XQWI1BV4 */