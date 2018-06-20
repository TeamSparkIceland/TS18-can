
#ifndef CAN_ID_h
#define CAN_ID_h

// Aflmælir
#define PM_VOLTAGE      0x100
#define PM_CURRENT      0x101
#define PM_TEMP         0x102
#define PM_POWER        0x103
#define PM_TOTALENERGY  0x104

// Datalogger 
#define DL_YAW          0x120
#define DL_PITCH        0x121
#define DL_ROLL         0x122
#define DL_XACC         0x123
#define DL_YACC         0x124
#define DL_ZACC         0x125
#define DL_SPEED        0x126
#define DL_STEER        0x127
#define DL_SUSP1        0x128
#define DL_SUSP2        0x129
#define DL_SUSP3        0x12A
#define DL_SUSP4        0x12B

// Þannembar fyrir fjöðrunarkerfið
#define STRAIN1         0x4E2
#define STRAIN2         0x4E3
#define STRAIN3         0x4E4
#define STRAIN4         0x4E5
#define STRAIN5         0x4E6

// Hitamælar og flæðimælir fyrir kælikerfið
#define COOL_TEMP0      0x130
#define COOL_TEMP1      0x131
#define COOL_TEMP2      0x132
#define COOL_TEMP3      0x133
#define COOL_TEMP4      0x134
#define COOL_FLOWTEMP   0x135
#define COOL_FLOW       0x136

// MC mælingar frá dSpace, ekki tæmandi listi
#define MC_I_CMD_RAMP   0x150
#define MC_I_ACT_FILT   0x151
#define MC_N_CMD_RAMP   0x152
#define MC_N_ACT_FILT   0x153
#define MC_T_MOTOR      0x154
#define MC_T_IGBT       0x155
#define MC_RPM          0x156
#define MC_STATES       0X157

// Hiti og spenna á sellum í batterýboxi
#define ACC0            0x200
#define ACC1            0x201
#define ACC2            0x202
#define ACC3            0x203
#define ACC4            0x204
#define ACC5            0x205
#define ACC6            0x206
#define ACC7            0x207
#define ACC8            0x208
#define ACC9            0x209
#define ACC10           0x20A
#define ACC11           0x20B
#define ACC12           0x20C
#define ACC13           0x20D
#define ACC14           0x20E
#define ACC15           0x20F
#define ACC16           0x210



#endif

