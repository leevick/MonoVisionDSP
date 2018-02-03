#ifndef CONFIG_H
#define CONFIG_H

#define PI 3.14159265358979323846

#define IMG_ACTUAL_WIDTH 876
#define IMG_ACTUAL_HEIGHT 876
#define IMG_ACTUAL_SIZE 767376
#define IMG_WIDTH 864
#define IMG_HEIGHT 864
#define IMG_SIZE 746496
#define IMG_THRES 50

#define IMG_BUFFER_SIZE 8

#define TARGET_NUM 4

#define CORE_NUM 8
#define CLOCK_TICK_TIMEOUT 250000

#define EMIF_IMG 0x74000000;
#define EMIF_POSE 0x74000000;
#define EMIF_FLAG 0x78000000;

#define MIN_AREA 100
#define MAX_AREA 16384
#define LINE_DETECT_THRESHOLD 0.98

#define POSE_CALC_METHOD_MLE
#define POSE_CALC_METHOD_OI_EPSILON 10e5*DBL_EPSILON

//#define DEBUG_IMG
#define POSE_CALC_TEST_PITCH_LOW  -60
#define POSE_CALC_TEST_PITCH_HIGH 60
#define POSE_CALC_TEST_PITCH_DEV  10

#define POSE_CALC_TEST_ROLL_LOW   -60
#define POSE_CALC_TEST_ROLL_HIGH  60
#define POSE_CALC_TEST_ROLL_DEV   10

#define POSE_CALC_TEST_YAW_LOW    -60
#define POSE_CALC_TEST_YAW_HIGH   60
#define POSE_CALC_TEST_YAW_DEV    10

#define POSE_CALC_TEST_X_LOW      0
#define POSE_CALC_TEST_X_HIGH     0
#define POSE_CALC_TEST_X_DEV      1

#define POSE_CALC_TEST_Y_LOW      0
#define POSE_CALC_TEST_Y_HIGH     0
#define POSE_CALC_TEST_Y_DEV      1

#define POSE_CALC_TEST_Z_LOW      1500
#define POSE_CALC_TEST_Z_HIGH     1500
#define POSE_CALC_TEST_Z_DEV      1

//#define PC_DEBUG

#define FOCUS 12.5f
#define DX 11e-3
#define DY 11e-3

#endif
