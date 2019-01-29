//mmu.h

#include <inttypes.h>


extern bool mmu_enabled;

extern uint8_t mmu_extruder;

extern uint8_t tmp_extruder;

extern int8_t mmu_finda;

extern int16_t mmu_version;
extern int16_t mmu_buildnr;


#define MMU_CMD_NONE 0
#define MMU_CMD_T0   0x10
#define MMU_CMD_T1   0x11
#define MMU_CMD_T2   0x12
#define MMU_CMD_T3   0x13
#define MMU_CMD_T4   0x14
#define MMU_CMD_L0   0x20
#define MMU_CMD_L1   0x21
#define MMU_CMD_L2   0x22
#define MMU_CMD_L3   0x23
#define MMU_CMD_L4   0x24
#define MMU_CMD_C0   0x30
#define MMU_CMD_U0   0x40
#define MMU_CMD_E0   0x50
#define MMU_CMD_E1   0x51
#define MMU_CMD_E2   0x52
#define MMU_CMD_E3   0x53
#define MMU_CMD_E4   0x54
#define MMU_CMD_R0   0x60


extern int mmu_puts_P(const char* str);

extern int mmu_printf_P(const char* format, ...);

extern int8_t mmu_rx_ok(void);


extern void mmu_init(void);

extern void mmu_loop(void);


extern void mmu_reset(void);

extern int8_t mmu_set_filament_type(uint8_t extruder, uint8_t filament);

extern void mmu_command(uint8_t cmd);

extern bool mmu_get_response(void);

extern void manage_response(bool move_axes, bool turn_off_nozzle);

extern void mmu_load_to_nozzle();

extern void mmu_M600_load_filament(bool automatic);
extern void mmu_M600_wait_and_beep();

extern void extr_mov(float shift, float feed_rate);
extern void change_extr(int extr);
extern int get_ext_nr();
extern void display_loading();
extern void extr_adj(int extruder);
extern void extr_unload();
extern void extr_adj_0();
extern void extr_adj_1();
extern void extr_adj_2();
extern void extr_adj_3();
extern void extr_adj_4();
extern void mmu_load_to_nozzle_0();
extern void mmu_load_to_nozzle_1();
extern void mmu_load_to_nozzle_2();
extern void mmu_load_to_nozzle_3();
extern void mmu_load_to_nozzle_4();
extern void load_all();
extern void extr_change_0();
extern void extr_change_1();
extern void extr_change_2();
extern void extr_change_3();
#ifdef SNMM
extern void extr_unload_all();
extern void extr_unload_used();
#endif //SNMM
extern void extr_unload_0();
extern void extr_unload_1();
extern void extr_unload_2();
extern void extr_unload_3();
extern void extr_unload_4();

extern bool mmu_check_version();
extern void mmu_show_warning();
extern void lcd_mmu_load_to_nozzle(uint8_t filament_nr);
extern void mmu_eject_filament(uint8_t filament, bool recover);
extern void mmu_eject_fil_0();
extern void mmu_eject_fil_1();
extern void mmu_eject_fil_2();
extern void mmu_eject_fil_3();
extern void mmu_eject_fil_4();
