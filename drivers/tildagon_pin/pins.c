// This file was automatically generated by make-pins.py
//
// --prefix /firmware/micropython/ports/esp32/boards/pins_prefix.c

#include "py/obj.h"
#include "extmod/modmachine.h"
#include "machine_pin.h"
#include "pins.h"

const tildagon_pin_obj_t tildagon_pin_obj_table[GPIO_EXT_NUM_MAX] = {
    [GPIO_EXT_NUM_0_0] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_1] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_2] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_3] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_4] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_5] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_6] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_7] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_8] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_9] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_10] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_11] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_12] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_13] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_14] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_0_15] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_0] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_1] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_2] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_3] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_4] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_5] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_6] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_7] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_8] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_9] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_10] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_11] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_12] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_13] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_14] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_1_15] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_0] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_1] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_2] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_3] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_4] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_5] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_6] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_7] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_8] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_9] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_10] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_11] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_12] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_13] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_14] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
    [GPIO_EXT_NUM_2_15] = { .base = { .type = &tildagon_pin_type }, .irq = { .base = { .type = &tildagon_pin_irq_type } } },
};


static const mp_rom_map_elem_t tildagon_pin_board_pins_locals_dict_table[] = {
};
MP_DEFINE_CONST_DICT(tildagon_pin_board_pins_locals_dict, tildagon_pin_board_pins_locals_dict_table);