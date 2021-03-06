#ifndef MACROLOP_EVAL_REC_UNROLL_1024_TO_2047_H
#define MACROLOP_EVAL_REC_UNROLL_1024_TO_2047_H

#define MACROLOP_PRIVATE_EVAL_REC_1024(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1024_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1024_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1024_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1024_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1025
#define MACROLOP_PRIVATE_EVAL_REC_1024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1025(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1025_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1025_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1025_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1025_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1026
#define MACROLOP_PRIVATE_EVAL_REC_1025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1026(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1026_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1026_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1026_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1026_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1027
#define MACROLOP_PRIVATE_EVAL_REC_1026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1027(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1027_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1027_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1027_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1027_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1028
#define MACROLOP_PRIVATE_EVAL_REC_1027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1028(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1028_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1028_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1028_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1028_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1029
#define MACROLOP_PRIVATE_EVAL_REC_1028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1029(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1029_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1029_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1029_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1029_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1030
#define MACROLOP_PRIVATE_EVAL_REC_1029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1030(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1030_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1030_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1030_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1030_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1031
#define MACROLOP_PRIVATE_EVAL_REC_1030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1031(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1031_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1031_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1031_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1031_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1032
#define MACROLOP_PRIVATE_EVAL_REC_1031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1032(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1032_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1032_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1032_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1032_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1033
#define MACROLOP_PRIVATE_EVAL_REC_1032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1033(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1033_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1033_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1033_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1033_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1034
#define MACROLOP_PRIVATE_EVAL_REC_1033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1034(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1034_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1034_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1034_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1034_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1035
#define MACROLOP_PRIVATE_EVAL_REC_1034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1035(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1035_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1035_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1035_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1035_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1036
#define MACROLOP_PRIVATE_EVAL_REC_1035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1036(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1036_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1036_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1036_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1036_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1037
#define MACROLOP_PRIVATE_EVAL_REC_1036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1037(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1037_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1037_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1037_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1037_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1038
#define MACROLOP_PRIVATE_EVAL_REC_1037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1038(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1038_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1038_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1038_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1038_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1039
#define MACROLOP_PRIVATE_EVAL_REC_1038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1039(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1039_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1039_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1039_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1039_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1040
#define MACROLOP_PRIVATE_EVAL_REC_1039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1040(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1040_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1040_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1040_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1040_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1041
#define MACROLOP_PRIVATE_EVAL_REC_1040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1041(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1041_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1041_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1041_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1041_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1042
#define MACROLOP_PRIVATE_EVAL_REC_1041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1042(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1042_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1042_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1042_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1042_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1043
#define MACROLOP_PRIVATE_EVAL_REC_1042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1043(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1043_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1043_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1043_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1043_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1044
#define MACROLOP_PRIVATE_EVAL_REC_1043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1044(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1044_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1044_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1044_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1044_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1045
#define MACROLOP_PRIVATE_EVAL_REC_1044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1045(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1045_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1045_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1045_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1045_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1046
#define MACROLOP_PRIVATE_EVAL_REC_1045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1046(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1046_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1046_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1046_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1046_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1047
#define MACROLOP_PRIVATE_EVAL_REC_1046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1047(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1047_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1047_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1047_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1047_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1048
#define MACROLOP_PRIVATE_EVAL_REC_1047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1048(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1048_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1048_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1048_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1048_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1049
#define MACROLOP_PRIVATE_EVAL_REC_1048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1049(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1049_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1049_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1049_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1049_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1050
#define MACROLOP_PRIVATE_EVAL_REC_1049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1050(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1050_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1050_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1050_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1050_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1051
#define MACROLOP_PRIVATE_EVAL_REC_1050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1051(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1051_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1051_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1051_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1051_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1052
#define MACROLOP_PRIVATE_EVAL_REC_1051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1052(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1052_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1052_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1052_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1052_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1053
#define MACROLOP_PRIVATE_EVAL_REC_1052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1053(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1053_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1053_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1053_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1053_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1054
#define MACROLOP_PRIVATE_EVAL_REC_1053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1054(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1054_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1054_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1054_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1054_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1055
#define MACROLOP_PRIVATE_EVAL_REC_1054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1055(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1055_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1055_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1055_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1055_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1056
#define MACROLOP_PRIVATE_EVAL_REC_1055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1056(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1056_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1056_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1056_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1056_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1057
#define MACROLOP_PRIVATE_EVAL_REC_1056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1057(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1057_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1057_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1057_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1057_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1058
#define MACROLOP_PRIVATE_EVAL_REC_1057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1058(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1058_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1058_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1058_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1058_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1059
#define MACROLOP_PRIVATE_EVAL_REC_1058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1059(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1059_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1059_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1059_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1059_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1060
#define MACROLOP_PRIVATE_EVAL_REC_1059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1060(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1060_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1060_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1060_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1060_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1061
#define MACROLOP_PRIVATE_EVAL_REC_1060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1061(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1061_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1061_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1061_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1061_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1062
#define MACROLOP_PRIVATE_EVAL_REC_1061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1062(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1062_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1062_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1062_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1062_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1063
#define MACROLOP_PRIVATE_EVAL_REC_1062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1063(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1063_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1063_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1063_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1063_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1064
#define MACROLOP_PRIVATE_EVAL_REC_1063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1064(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1064_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1064_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1064_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1064_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1065
#define MACROLOP_PRIVATE_EVAL_REC_1064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1065(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1065_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1065_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1065_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1065_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1066
#define MACROLOP_PRIVATE_EVAL_REC_1065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1066(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1066_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1066_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1066_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1066_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1067
#define MACROLOP_PRIVATE_EVAL_REC_1066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1067(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1067_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1067_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1067_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1067_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1068
#define MACROLOP_PRIVATE_EVAL_REC_1067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1068(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1068_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1068_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1068_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1068_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1069
#define MACROLOP_PRIVATE_EVAL_REC_1068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1069(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1069_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1069_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1069_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1069_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1070
#define MACROLOP_PRIVATE_EVAL_REC_1069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1070(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1070_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1070_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1070_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1070_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1071
#define MACROLOP_PRIVATE_EVAL_REC_1070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1071(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1071_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1071_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1071_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1071_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1072
#define MACROLOP_PRIVATE_EVAL_REC_1071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1072(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1072_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1072_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1072_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1072_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1073
#define MACROLOP_PRIVATE_EVAL_REC_1072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1073(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1073_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1073_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1073_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1073_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1074
#define MACROLOP_PRIVATE_EVAL_REC_1073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1074(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1074_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1074_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1074_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1074_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1075
#define MACROLOP_PRIVATE_EVAL_REC_1074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1075(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1075_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1075_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1075_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1075_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1076
#define MACROLOP_PRIVATE_EVAL_REC_1075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1076(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1076_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1076_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1076_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1076_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1077
#define MACROLOP_PRIVATE_EVAL_REC_1076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1077(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1077_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1077_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1077_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1077_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1078
#define MACROLOP_PRIVATE_EVAL_REC_1077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1078(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1078_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1078_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1078_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1078_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1079
#define MACROLOP_PRIVATE_EVAL_REC_1078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1079(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1079_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1079_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1079_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1079_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1080
#define MACROLOP_PRIVATE_EVAL_REC_1079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1080(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1080_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1080_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1080_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1080_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1081
#define MACROLOP_PRIVATE_EVAL_REC_1080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1081(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1081_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1081_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1081_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1081_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1082
#define MACROLOP_PRIVATE_EVAL_REC_1081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1082(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1082_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1082_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1082_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1082_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1083
#define MACROLOP_PRIVATE_EVAL_REC_1082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1083(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1083_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1083_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1083_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1083_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1084
#define MACROLOP_PRIVATE_EVAL_REC_1083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1084(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1084_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1084_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1084_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1084_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1085
#define MACROLOP_PRIVATE_EVAL_REC_1084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1085(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1085_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1085_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1085_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1085_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1086
#define MACROLOP_PRIVATE_EVAL_REC_1085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1086(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1086_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1086_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1086_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1086_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1087
#define MACROLOP_PRIVATE_EVAL_REC_1086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1087(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1087_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1087_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1087_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1087_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1088
#define MACROLOP_PRIVATE_EVAL_REC_1087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1088(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1088_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1088_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1088_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1088_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1089
#define MACROLOP_PRIVATE_EVAL_REC_1088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1089(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1089_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1089_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1089_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1089_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1090
#define MACROLOP_PRIVATE_EVAL_REC_1089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1090(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1090_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1090_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1090_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1090_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1091
#define MACROLOP_PRIVATE_EVAL_REC_1090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1091(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1091_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1091_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1091_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1091_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1092
#define MACROLOP_PRIVATE_EVAL_REC_1091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1092(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1092_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1092_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1092_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1092_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1093
#define MACROLOP_PRIVATE_EVAL_REC_1092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1093(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1093_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1093_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1093_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1093_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1094
#define MACROLOP_PRIVATE_EVAL_REC_1093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1094(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1094_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1094_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1094_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1094_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1095
#define MACROLOP_PRIVATE_EVAL_REC_1094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1095(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1095_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1095_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1095_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1095_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1096
#define MACROLOP_PRIVATE_EVAL_REC_1095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1096(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1096_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1096_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1096_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1096_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1097
#define MACROLOP_PRIVATE_EVAL_REC_1096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1097(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1097_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1097_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1097_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1097_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1098
#define MACROLOP_PRIVATE_EVAL_REC_1097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1098(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1098_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1098_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1098_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1098_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1099
#define MACROLOP_PRIVATE_EVAL_REC_1098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1099(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1099_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1099_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1099_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1099_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1100
#define MACROLOP_PRIVATE_EVAL_REC_1099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1100(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1100_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1100_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1100_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1100_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1101
#define MACROLOP_PRIVATE_EVAL_REC_1100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1101(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1101_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1101_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1101_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1101_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1102
#define MACROLOP_PRIVATE_EVAL_REC_1101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1102(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1102_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1102_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1102_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1102_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1103
#define MACROLOP_PRIVATE_EVAL_REC_1102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1103(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1103_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1103_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1103_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1103_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1104
#define MACROLOP_PRIVATE_EVAL_REC_1103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1104(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1104_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1104_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1104_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1104_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1105
#define MACROLOP_PRIVATE_EVAL_REC_1104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1105(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1105_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1105_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1105_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1105_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1106
#define MACROLOP_PRIVATE_EVAL_REC_1105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1106(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1106_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1106_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1106_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1106_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1107
#define MACROLOP_PRIVATE_EVAL_REC_1106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1107(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1107_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1107_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1107_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1107_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1108
#define MACROLOP_PRIVATE_EVAL_REC_1107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1108(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1108_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1108_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1108_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1108_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1109
#define MACROLOP_PRIVATE_EVAL_REC_1108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1109(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1109_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1109_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1109_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1109_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1110
#define MACROLOP_PRIVATE_EVAL_REC_1109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1110(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1110_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1110_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1110_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1110_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1111
#define MACROLOP_PRIVATE_EVAL_REC_1110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1111(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1111_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1111_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1111_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1111_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1112
#define MACROLOP_PRIVATE_EVAL_REC_1111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1112(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1112_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1112_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1112_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1112_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1113
#define MACROLOP_PRIVATE_EVAL_REC_1112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1113(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1113_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1113_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1113_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1113_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1114
#define MACROLOP_PRIVATE_EVAL_REC_1113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1114(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1114_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1114_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1114_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1114_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1115
#define MACROLOP_PRIVATE_EVAL_REC_1114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1115(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1115_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1115_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1115_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1115_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1116
#define MACROLOP_PRIVATE_EVAL_REC_1115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1116(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1116_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1116_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1116_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1116_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1117
#define MACROLOP_PRIVATE_EVAL_REC_1116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1117(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1117_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1117_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1117_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1117_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1118
#define MACROLOP_PRIVATE_EVAL_REC_1117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1118(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1118_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1118_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1118_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1118_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1119
#define MACROLOP_PRIVATE_EVAL_REC_1118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1119(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1119_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1119_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1119_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1119_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1120
#define MACROLOP_PRIVATE_EVAL_REC_1119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1120(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1120_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1120_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1120_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1120_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1121
#define MACROLOP_PRIVATE_EVAL_REC_1120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1121(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1121_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1121_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1121_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1121_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1122
#define MACROLOP_PRIVATE_EVAL_REC_1121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1122(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1122_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1122_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1122_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1122_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1123
#define MACROLOP_PRIVATE_EVAL_REC_1122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1123(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1123_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1123_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1123_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1123_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1124
#define MACROLOP_PRIVATE_EVAL_REC_1123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1124(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1124_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1124_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1124_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1124_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1125
#define MACROLOP_PRIVATE_EVAL_REC_1124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1125(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1125_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1125_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1125_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1125_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1126
#define MACROLOP_PRIVATE_EVAL_REC_1125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1126(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1126_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1126_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1126_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1126_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1127
#define MACROLOP_PRIVATE_EVAL_REC_1126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1127(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1127_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1127_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1127_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1127_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1128
#define MACROLOP_PRIVATE_EVAL_REC_1127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1128(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1128_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1128_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1128_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1128_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1129
#define MACROLOP_PRIVATE_EVAL_REC_1128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1129(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1129_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1129_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1129_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1129_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1130
#define MACROLOP_PRIVATE_EVAL_REC_1129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1130(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1130_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1130_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1130_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1130_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1131
#define MACROLOP_PRIVATE_EVAL_REC_1130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1131(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1131_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1131_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1131_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1131_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1132
#define MACROLOP_PRIVATE_EVAL_REC_1131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1132(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1132_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1132_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1132_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1132_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1133
#define MACROLOP_PRIVATE_EVAL_REC_1132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1133(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1133_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1133_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1133_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1133_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1134
#define MACROLOP_PRIVATE_EVAL_REC_1133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1134(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1134_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1134_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1134_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1134_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1135
#define MACROLOP_PRIVATE_EVAL_REC_1134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1135(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1135_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1135_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1135_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1135_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1136
#define MACROLOP_PRIVATE_EVAL_REC_1135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1136(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1136_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1136_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1136_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1136_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1137
#define MACROLOP_PRIVATE_EVAL_REC_1136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1137(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1137_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1137_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1137_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1137_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1138
#define MACROLOP_PRIVATE_EVAL_REC_1137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1138(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1138_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1138_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1138_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1138_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1139
#define MACROLOP_PRIVATE_EVAL_REC_1138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1139(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1139_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1139_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1139_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1139_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1140
#define MACROLOP_PRIVATE_EVAL_REC_1139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1140(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1140_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1140_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1140_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1140_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1141
#define MACROLOP_PRIVATE_EVAL_REC_1140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1141(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1141_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1141_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1141_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1141_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1142
#define MACROLOP_PRIVATE_EVAL_REC_1141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1142(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1142_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1142_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1142_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1142_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1143
#define MACROLOP_PRIVATE_EVAL_REC_1142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1143(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1143_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1143_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1143_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1143_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1144
#define MACROLOP_PRIVATE_EVAL_REC_1143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1144(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1144_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1144_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1144_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1144_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1145
#define MACROLOP_PRIVATE_EVAL_REC_1144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1145(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1145_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1145_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1145_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1145_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1146
#define MACROLOP_PRIVATE_EVAL_REC_1145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1146(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1146_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1146_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1146_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1146_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1147
#define MACROLOP_PRIVATE_EVAL_REC_1146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1147(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1147_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1147_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1147_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1147_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1148
#define MACROLOP_PRIVATE_EVAL_REC_1147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1148(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1148_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1148_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1148_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1148_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1149
#define MACROLOP_PRIVATE_EVAL_REC_1148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1149(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1149_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1149_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1149_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1149_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1150
#define MACROLOP_PRIVATE_EVAL_REC_1149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1150(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1150_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1150_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1150_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1150_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1151
#define MACROLOP_PRIVATE_EVAL_REC_1150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1151(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1151_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1151_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1151_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1151_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1152
#define MACROLOP_PRIVATE_EVAL_REC_1151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1152(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1152_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1152_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1152_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1152_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1153
#define MACROLOP_PRIVATE_EVAL_REC_1152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1153(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1153_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1153_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1153_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1153_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1154
#define MACROLOP_PRIVATE_EVAL_REC_1153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1154(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1154_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1154_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1154_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1154_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1155
#define MACROLOP_PRIVATE_EVAL_REC_1154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1155(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1155_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1155_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1155_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1155_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1156
#define MACROLOP_PRIVATE_EVAL_REC_1155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1156(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1156_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1156_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1156_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1156_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1157
#define MACROLOP_PRIVATE_EVAL_REC_1156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1157(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1157_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1157_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1157_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1157_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1158
#define MACROLOP_PRIVATE_EVAL_REC_1157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1158(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1158_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1158_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1158_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1158_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1159
#define MACROLOP_PRIVATE_EVAL_REC_1158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1159(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1159_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1159_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1159_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1159_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1160
#define MACROLOP_PRIVATE_EVAL_REC_1159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1160(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1160_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1160_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1160_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1160_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1161
#define MACROLOP_PRIVATE_EVAL_REC_1160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1161(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1161_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1161_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1161_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1161_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1162
#define MACROLOP_PRIVATE_EVAL_REC_1161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1162(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1162_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1162_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1162_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1162_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1163
#define MACROLOP_PRIVATE_EVAL_REC_1162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1163(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1163_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1163_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1163_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1163_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1164
#define MACROLOP_PRIVATE_EVAL_REC_1163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1164(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1164_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1164_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1164_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1164_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1165
#define MACROLOP_PRIVATE_EVAL_REC_1164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1165(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1165_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1165_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1165_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1165_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1166
#define MACROLOP_PRIVATE_EVAL_REC_1165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1166(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1166_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1166_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1166_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1166_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1167
#define MACROLOP_PRIVATE_EVAL_REC_1166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1167(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1167_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1167_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1167_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1167_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1168
#define MACROLOP_PRIVATE_EVAL_REC_1167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1168(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1168_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1168_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1168_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1168_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1169
#define MACROLOP_PRIVATE_EVAL_REC_1168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1169(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1169_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1169_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1169_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1169_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1170
#define MACROLOP_PRIVATE_EVAL_REC_1169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1170(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1170_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1170_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1170_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1170_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1171
#define MACROLOP_PRIVATE_EVAL_REC_1170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1171(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1171_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1171_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1171_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1171_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1172
#define MACROLOP_PRIVATE_EVAL_REC_1171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1172(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1172_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1172_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1172_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1172_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1173
#define MACROLOP_PRIVATE_EVAL_REC_1172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1173(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1173_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1173_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1173_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1173_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1174
#define MACROLOP_PRIVATE_EVAL_REC_1173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1174(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1174_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1174_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1174_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1174_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1175
#define MACROLOP_PRIVATE_EVAL_REC_1174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1175(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1175_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1175_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1175_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1175_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1176
#define MACROLOP_PRIVATE_EVAL_REC_1175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1176(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1176_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1176_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1176_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1176_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1177
#define MACROLOP_PRIVATE_EVAL_REC_1176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1177(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1177_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1177_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1177_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1177_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1178
#define MACROLOP_PRIVATE_EVAL_REC_1177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1178(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1178_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1178_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1178_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1178_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1179
#define MACROLOP_PRIVATE_EVAL_REC_1178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1179(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1179_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1179_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1179_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1179_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1180
#define MACROLOP_PRIVATE_EVAL_REC_1179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1180(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1180_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1180_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1180_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1180_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1181
#define MACROLOP_PRIVATE_EVAL_REC_1180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1181(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1181_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1181_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1181_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1181_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1182
#define MACROLOP_PRIVATE_EVAL_REC_1181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1182(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1182_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1182_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1182_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1182_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1183
#define MACROLOP_PRIVATE_EVAL_REC_1182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1183(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1183_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1183_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1183_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1183_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1184
#define MACROLOP_PRIVATE_EVAL_REC_1183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1184(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1184_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1184_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1184_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1184_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1185
#define MACROLOP_PRIVATE_EVAL_REC_1184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1185(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1185_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1185_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1185_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1185_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1186
#define MACROLOP_PRIVATE_EVAL_REC_1185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1186(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1186_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1186_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1186_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1186_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1187
#define MACROLOP_PRIVATE_EVAL_REC_1186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1187(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1187_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1187_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1187_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1187_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1188
#define MACROLOP_PRIVATE_EVAL_REC_1187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1188(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1188_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1188_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1188_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1188_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1189
#define MACROLOP_PRIVATE_EVAL_REC_1188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1189(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1189_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1189_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1189_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1189_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1190
#define MACROLOP_PRIVATE_EVAL_REC_1189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1190(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1190_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1190_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1190_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1190_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1191
#define MACROLOP_PRIVATE_EVAL_REC_1190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1191(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1191_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1191_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1191_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1191_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1192
#define MACROLOP_PRIVATE_EVAL_REC_1191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1192(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1192_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1192_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1192_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1192_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1193
#define MACROLOP_PRIVATE_EVAL_REC_1192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1193(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1193_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1193_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1193_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1193_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1194
#define MACROLOP_PRIVATE_EVAL_REC_1193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1194(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1194_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1194_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1194_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1194_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1195
#define MACROLOP_PRIVATE_EVAL_REC_1194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1195(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1195_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1195_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1195_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1195_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1196
#define MACROLOP_PRIVATE_EVAL_REC_1195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1196(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1196_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1196_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1196_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1196_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1197
#define MACROLOP_PRIVATE_EVAL_REC_1196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1197(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1197_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1197_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1197_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1197_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1198
#define MACROLOP_PRIVATE_EVAL_REC_1197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1198(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1198_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1198_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1198_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1198_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1199
#define MACROLOP_PRIVATE_EVAL_REC_1198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1199(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1199_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1199_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1199_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1199_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1200
#define MACROLOP_PRIVATE_EVAL_REC_1199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1200(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1200_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1200_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1200_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1200_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1201
#define MACROLOP_PRIVATE_EVAL_REC_1200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1201(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1201_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1201_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1201_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1201_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1202
#define MACROLOP_PRIVATE_EVAL_REC_1201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1202(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1202_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1202_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1202_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1202_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1203
#define MACROLOP_PRIVATE_EVAL_REC_1202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1203(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1203_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1203_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1203_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1203_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1204
#define MACROLOP_PRIVATE_EVAL_REC_1203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1204(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1204_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1204_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1204_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1204_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1205
#define MACROLOP_PRIVATE_EVAL_REC_1204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1205(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1205_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1205_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1205_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1205_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1206
#define MACROLOP_PRIVATE_EVAL_REC_1205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1206(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1206_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1206_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1206_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1206_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1207
#define MACROLOP_PRIVATE_EVAL_REC_1206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1207(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1207_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1207_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1207_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1207_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1208
#define MACROLOP_PRIVATE_EVAL_REC_1207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1208(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1208_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1208_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1208_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1208_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1209
#define MACROLOP_PRIVATE_EVAL_REC_1208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1209(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1209_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1209_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1209_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1209_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1210
#define MACROLOP_PRIVATE_EVAL_REC_1209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1210(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1210_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1210_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1210_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1210_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1211
#define MACROLOP_PRIVATE_EVAL_REC_1210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1211(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1211_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1211_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1211_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1211_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1212
#define MACROLOP_PRIVATE_EVAL_REC_1211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1212(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1212_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1212_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1212_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1212_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1213
#define MACROLOP_PRIVATE_EVAL_REC_1212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1213(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1213_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1213_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1213_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1213_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1214
#define MACROLOP_PRIVATE_EVAL_REC_1213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1214(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1214_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1214_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1214_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1214_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1215
#define MACROLOP_PRIVATE_EVAL_REC_1214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1215(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1215_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1215_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1215_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1215_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1216
#define MACROLOP_PRIVATE_EVAL_REC_1215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1216(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1216_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1216_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1216_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1216_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1217
#define MACROLOP_PRIVATE_EVAL_REC_1216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1217(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1217_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1217_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1217_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1217_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1218
#define MACROLOP_PRIVATE_EVAL_REC_1217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1218(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1218_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1218_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1218_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1218_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1219
#define MACROLOP_PRIVATE_EVAL_REC_1218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1219(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1219_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1219_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1219_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1219_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1220
#define MACROLOP_PRIVATE_EVAL_REC_1219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1220(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1220_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1220_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1220_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1220_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1221
#define MACROLOP_PRIVATE_EVAL_REC_1220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1221(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1221_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1221_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1221_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1221_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1222
#define MACROLOP_PRIVATE_EVAL_REC_1221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1222(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1222_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1222_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1222_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1222_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1223
#define MACROLOP_PRIVATE_EVAL_REC_1222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1223(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1223_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1223_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1223_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1223_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1224
#define MACROLOP_PRIVATE_EVAL_REC_1223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1224(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1224_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1224_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1224_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1224_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1225
#define MACROLOP_PRIVATE_EVAL_REC_1224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1225(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1225_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1225_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1225_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1225_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1226
#define MACROLOP_PRIVATE_EVAL_REC_1225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1226(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1226_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1226_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1226_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1226_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1227
#define MACROLOP_PRIVATE_EVAL_REC_1226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1227(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1227_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1227_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1227_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1227_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1228
#define MACROLOP_PRIVATE_EVAL_REC_1227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1228(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1228_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1228_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1228_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1228_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1229
#define MACROLOP_PRIVATE_EVAL_REC_1228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1229(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1229_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1229_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1229_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1229_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1230
#define MACROLOP_PRIVATE_EVAL_REC_1229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1230(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1230_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1230_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1230_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1230_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1231
#define MACROLOP_PRIVATE_EVAL_REC_1230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1231(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1231_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1231_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1231_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1231_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1232
#define MACROLOP_PRIVATE_EVAL_REC_1231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1232(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1232_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1232_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1232_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1232_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1233
#define MACROLOP_PRIVATE_EVAL_REC_1232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1233(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1233_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1233_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1233_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1233_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1234
#define MACROLOP_PRIVATE_EVAL_REC_1233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1234(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1234_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1234_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1234_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1234_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1235
#define MACROLOP_PRIVATE_EVAL_REC_1234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1235(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1235_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1235_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1235_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1235_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1236
#define MACROLOP_PRIVATE_EVAL_REC_1235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1236(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1236_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1236_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1236_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1236_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1237
#define MACROLOP_PRIVATE_EVAL_REC_1236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1237(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1237_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1237_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1237_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1237_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1238
#define MACROLOP_PRIVATE_EVAL_REC_1237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1238(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1238_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1238_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1238_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1238_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1239
#define MACROLOP_PRIVATE_EVAL_REC_1238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1239(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1239_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1239_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1239_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1239_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1240
#define MACROLOP_PRIVATE_EVAL_REC_1239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1240(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1240_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1240_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1240_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1240_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1241
#define MACROLOP_PRIVATE_EVAL_REC_1240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1241(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1241_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1241_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1241_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1241_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1242
#define MACROLOP_PRIVATE_EVAL_REC_1241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1242(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1242_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1242_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1242_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1242_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1243
#define MACROLOP_PRIVATE_EVAL_REC_1242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1243(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1243_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1243_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1243_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1243_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1244
#define MACROLOP_PRIVATE_EVAL_REC_1243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1244(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1244_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1244_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1244_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1244_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1245
#define MACROLOP_PRIVATE_EVAL_REC_1244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1245(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1245_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1245_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1245_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1245_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1246
#define MACROLOP_PRIVATE_EVAL_REC_1245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1246(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1246_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1246_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1246_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1246_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1247
#define MACROLOP_PRIVATE_EVAL_REC_1246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1247(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1247_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1247_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1247_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1247_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1248
#define MACROLOP_PRIVATE_EVAL_REC_1247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1248(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1248_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1248_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1248_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1248_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1249
#define MACROLOP_PRIVATE_EVAL_REC_1248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1249(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1249_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1249_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1249_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1249_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1250
#define MACROLOP_PRIVATE_EVAL_REC_1249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1250(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1250_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1250_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1250_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1250_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1251
#define MACROLOP_PRIVATE_EVAL_REC_1250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1251(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1251_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1251_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1251_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1251_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1252
#define MACROLOP_PRIVATE_EVAL_REC_1251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1252(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1252_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1252_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1252_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1252_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1253
#define MACROLOP_PRIVATE_EVAL_REC_1252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1253(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1253_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1253_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1253_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1253_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1254
#define MACROLOP_PRIVATE_EVAL_REC_1253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1254(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1254_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1254_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1254_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1254_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1255
#define MACROLOP_PRIVATE_EVAL_REC_1254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1255(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1255_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1255_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1255_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1255_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1256
#define MACROLOP_PRIVATE_EVAL_REC_1255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1256(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1256_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1256_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1256_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1256_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1257
#define MACROLOP_PRIVATE_EVAL_REC_1256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1257(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1257_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1257_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1257_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1257_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1258
#define MACROLOP_PRIVATE_EVAL_REC_1257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1258(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1258_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1258_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1258_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1258_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1259
#define MACROLOP_PRIVATE_EVAL_REC_1258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1259(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1259_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1259_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1259_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1259_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1260
#define MACROLOP_PRIVATE_EVAL_REC_1259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1260(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1260_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1260_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1260_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1260_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1261
#define MACROLOP_PRIVATE_EVAL_REC_1260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1261(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1261_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1261_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1261_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1261_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1262
#define MACROLOP_PRIVATE_EVAL_REC_1261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1262(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1262_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1262_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1262_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1262_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1263
#define MACROLOP_PRIVATE_EVAL_REC_1262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1263(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1263_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1263_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1263_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1263_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1264
#define MACROLOP_PRIVATE_EVAL_REC_1263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1264(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1264_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1264_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1264_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1264_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1265
#define MACROLOP_PRIVATE_EVAL_REC_1264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1265(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1265_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1265_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1265_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1265_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1266
#define MACROLOP_PRIVATE_EVAL_REC_1265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1266(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1266_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1266_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1266_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1266_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1267
#define MACROLOP_PRIVATE_EVAL_REC_1266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1267(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1267_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1267_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1267_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1267_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1268
#define MACROLOP_PRIVATE_EVAL_REC_1267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1268(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1268_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1268_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1268_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1268_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1269
#define MACROLOP_PRIVATE_EVAL_REC_1268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1269(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1269_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1269_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1269_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1269_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1270
#define MACROLOP_PRIVATE_EVAL_REC_1269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1270(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1270_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1270_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1270_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1270_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1271
#define MACROLOP_PRIVATE_EVAL_REC_1270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1271(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1271_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1271_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1271_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1271_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1272
#define MACROLOP_PRIVATE_EVAL_REC_1271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1272(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1272_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1272_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1272_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1272_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1273
#define MACROLOP_PRIVATE_EVAL_REC_1272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1273(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1273_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1273_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1273_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1273_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1274
#define MACROLOP_PRIVATE_EVAL_REC_1273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1274(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1274_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1274_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1274_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1274_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1275
#define MACROLOP_PRIVATE_EVAL_REC_1274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1275(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1275_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1275_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1275_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1275_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1276
#define MACROLOP_PRIVATE_EVAL_REC_1275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1276(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1276_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1276_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1276_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1276_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1277
#define MACROLOP_PRIVATE_EVAL_REC_1276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1277(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1277_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1277_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1277_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1277_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1278
#define MACROLOP_PRIVATE_EVAL_REC_1277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1278(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1278_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1278_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1278_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1278_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1279
#define MACROLOP_PRIVATE_EVAL_REC_1278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1279(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1279_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1279_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1279_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1279_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1280
#define MACROLOP_PRIVATE_EVAL_REC_1279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1280(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1280_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1280_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1280_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1280_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1281
#define MACROLOP_PRIVATE_EVAL_REC_1280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1281(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1281_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1281_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1281_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1281_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1282
#define MACROLOP_PRIVATE_EVAL_REC_1281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1282(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1282_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1282_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1282_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1282_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1283
#define MACROLOP_PRIVATE_EVAL_REC_1282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1283(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1283_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1283_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1283_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1283_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1284
#define MACROLOP_PRIVATE_EVAL_REC_1283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1284(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1284_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1284_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1284_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1284_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1285
#define MACROLOP_PRIVATE_EVAL_REC_1284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1285(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1285_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1285_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1285_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1285_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1286
#define MACROLOP_PRIVATE_EVAL_REC_1285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1286(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1286_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1286_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1286_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1286_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1287
#define MACROLOP_PRIVATE_EVAL_REC_1286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1287(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1287_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1287_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1287_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1287_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1288
#define MACROLOP_PRIVATE_EVAL_REC_1287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1288(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1288_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1288_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1288_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1288_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1289
#define MACROLOP_PRIVATE_EVAL_REC_1288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1289(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1289_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1289_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1289_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1289_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1290
#define MACROLOP_PRIVATE_EVAL_REC_1289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1290(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1290_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1290_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1290_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1290_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1291
#define MACROLOP_PRIVATE_EVAL_REC_1290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1291(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1291_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1291_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1291_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1291_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1292
#define MACROLOP_PRIVATE_EVAL_REC_1291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1292(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1292_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1292_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1292_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1292_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1293
#define MACROLOP_PRIVATE_EVAL_REC_1292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1293(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1293_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1293_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1293_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1293_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1294
#define MACROLOP_PRIVATE_EVAL_REC_1293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1294(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1294_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1294_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1294_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1294_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1295
#define MACROLOP_PRIVATE_EVAL_REC_1294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1295(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1295_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1295_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1295_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1295_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1296
#define MACROLOP_PRIVATE_EVAL_REC_1295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1296(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1296_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1296_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1296_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1296_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1297
#define MACROLOP_PRIVATE_EVAL_REC_1296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1297(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1297_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1297_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1297_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1297_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1298
#define MACROLOP_PRIVATE_EVAL_REC_1297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1298(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1298_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1298_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1298_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1298_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1299
#define MACROLOP_PRIVATE_EVAL_REC_1298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1299(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1299_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1299_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1299_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1299_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1300
#define MACROLOP_PRIVATE_EVAL_REC_1299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1300(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1300_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1300_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1300_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1300_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1301
#define MACROLOP_PRIVATE_EVAL_REC_1300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1301(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1301_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1301_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1301_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1301_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1302
#define MACROLOP_PRIVATE_EVAL_REC_1301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1302(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1302_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1302_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1302_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1302_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1303
#define MACROLOP_PRIVATE_EVAL_REC_1302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1303(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1303_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1303_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1303_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1303_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1304
#define MACROLOP_PRIVATE_EVAL_REC_1303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1304(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1304_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1304_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1304_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1304_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1305
#define MACROLOP_PRIVATE_EVAL_REC_1304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1305(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1305_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1305_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1305_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1305_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1306
#define MACROLOP_PRIVATE_EVAL_REC_1305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1306(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1306_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1306_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1306_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1306_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1307
#define MACROLOP_PRIVATE_EVAL_REC_1306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1307(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1307_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1307_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1307_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1307_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1308
#define MACROLOP_PRIVATE_EVAL_REC_1307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1308(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1308_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1308_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1308_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1308_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1309
#define MACROLOP_PRIVATE_EVAL_REC_1308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1309(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1309_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1309_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1309_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1309_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1310
#define MACROLOP_PRIVATE_EVAL_REC_1309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1310(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1310_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1310_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1310_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1310_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1311
#define MACROLOP_PRIVATE_EVAL_REC_1310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1311(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1311_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1311_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1311_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1311_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1312
#define MACROLOP_PRIVATE_EVAL_REC_1311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1312(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1312_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1312_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1312_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1312_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1313
#define MACROLOP_PRIVATE_EVAL_REC_1312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1313(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1313_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1313_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1313_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1313_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1314
#define MACROLOP_PRIVATE_EVAL_REC_1313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1314(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1314_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1314_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1314_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1314_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1315
#define MACROLOP_PRIVATE_EVAL_REC_1314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1315(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1315_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1315_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1315_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1315_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1316
#define MACROLOP_PRIVATE_EVAL_REC_1315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1316(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1316_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1316_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1316_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1316_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1317
#define MACROLOP_PRIVATE_EVAL_REC_1316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1317(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1317_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1317_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1317_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1317_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1318
#define MACROLOP_PRIVATE_EVAL_REC_1317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1318(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1318_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1318_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1318_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1318_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1319
#define MACROLOP_PRIVATE_EVAL_REC_1318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1319(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1319_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1319_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1319_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1319_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1320
#define MACROLOP_PRIVATE_EVAL_REC_1319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1320(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1320_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1320_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1320_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1320_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1321
#define MACROLOP_PRIVATE_EVAL_REC_1320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1321(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1321_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1321_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1321_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1321_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1322
#define MACROLOP_PRIVATE_EVAL_REC_1321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1322(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1322_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1322_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1322_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1322_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1323
#define MACROLOP_PRIVATE_EVAL_REC_1322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1323(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1323_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1323_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1323_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1323_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1324
#define MACROLOP_PRIVATE_EVAL_REC_1323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1324(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1324_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1324_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1324_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1324_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1325
#define MACROLOP_PRIVATE_EVAL_REC_1324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1325(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1325_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1325_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1325_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1325_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1326
#define MACROLOP_PRIVATE_EVAL_REC_1325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1326(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1326_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1326_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1326_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1326_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1327
#define MACROLOP_PRIVATE_EVAL_REC_1326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1327(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1327_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1327_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1327_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1327_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1328
#define MACROLOP_PRIVATE_EVAL_REC_1327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1328(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1328_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1328_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1328_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1328_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1329
#define MACROLOP_PRIVATE_EVAL_REC_1328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1329(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1329_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1329_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1329_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1329_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1330
#define MACROLOP_PRIVATE_EVAL_REC_1329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1330(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1330_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1330_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1330_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1330_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1331
#define MACROLOP_PRIVATE_EVAL_REC_1330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1331(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1331_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1331_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1331_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1331_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1332
#define MACROLOP_PRIVATE_EVAL_REC_1331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1332(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1332_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1332_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1332_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1332_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1333
#define MACROLOP_PRIVATE_EVAL_REC_1332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1333(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1333_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1333_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1333_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1333_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1334
#define MACROLOP_PRIVATE_EVAL_REC_1333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1334(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1334_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1334_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1334_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1334_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1335
#define MACROLOP_PRIVATE_EVAL_REC_1334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1335(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1335_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1335_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1335_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1335_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1336
#define MACROLOP_PRIVATE_EVAL_REC_1335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1336(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1336_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1336_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1336_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1336_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1337
#define MACROLOP_PRIVATE_EVAL_REC_1336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1337(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1337_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1337_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1337_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1337_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1338
#define MACROLOP_PRIVATE_EVAL_REC_1337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1338(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1338_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1338_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1338_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1338_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1339
#define MACROLOP_PRIVATE_EVAL_REC_1338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1339(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1339_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1339_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1339_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1339_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1340
#define MACROLOP_PRIVATE_EVAL_REC_1339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1340(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1340_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1340_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1340_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1340_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1341
#define MACROLOP_PRIVATE_EVAL_REC_1340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1341(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1341_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1341_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1341_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1341_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1342
#define MACROLOP_PRIVATE_EVAL_REC_1341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1342(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1342_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1342_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1342_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1342_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1343
#define MACROLOP_PRIVATE_EVAL_REC_1342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1343(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1343_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1343_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1343_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1343_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1344
#define MACROLOP_PRIVATE_EVAL_REC_1343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1344(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1344_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1344_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1344_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1344_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1345
#define MACROLOP_PRIVATE_EVAL_REC_1344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1345(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1345_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1345_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1345_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1345_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1346
#define MACROLOP_PRIVATE_EVAL_REC_1345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1346(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1346_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1346_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1346_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1346_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1347
#define MACROLOP_PRIVATE_EVAL_REC_1346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1347(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1347_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1347_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1347_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1347_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1348
#define MACROLOP_PRIVATE_EVAL_REC_1347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1348(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1348_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1348_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1348_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1348_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1349
#define MACROLOP_PRIVATE_EVAL_REC_1348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1349(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1349_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1349_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1349_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1349_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1350
#define MACROLOP_PRIVATE_EVAL_REC_1349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1350(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1350_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1350_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1350_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1350_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1351
#define MACROLOP_PRIVATE_EVAL_REC_1350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1351(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1351_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1351_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1351_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1351_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1352
#define MACROLOP_PRIVATE_EVAL_REC_1351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1352(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1352_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1352_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1352_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1352_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1353
#define MACROLOP_PRIVATE_EVAL_REC_1352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1353(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1353_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1353_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1353_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1353_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1354
#define MACROLOP_PRIVATE_EVAL_REC_1353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1354(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1354_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1354_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1354_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1354_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1355
#define MACROLOP_PRIVATE_EVAL_REC_1354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1355(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1355_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1355_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1355_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1355_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1356
#define MACROLOP_PRIVATE_EVAL_REC_1355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1356(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1356_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1356_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1356_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1356_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1357
#define MACROLOP_PRIVATE_EVAL_REC_1356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1357(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1357_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1357_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1357_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1357_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1358
#define MACROLOP_PRIVATE_EVAL_REC_1357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1358(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1358_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1358_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1358_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1358_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1359
#define MACROLOP_PRIVATE_EVAL_REC_1358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1359(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1359_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1359_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1359_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1359_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1360
#define MACROLOP_PRIVATE_EVAL_REC_1359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1360(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1360_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1360_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1360_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1360_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1361
#define MACROLOP_PRIVATE_EVAL_REC_1360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1361(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1361_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1361_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1361_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1361_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1362
#define MACROLOP_PRIVATE_EVAL_REC_1361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1362(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1362_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1362_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1362_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1362_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1363
#define MACROLOP_PRIVATE_EVAL_REC_1362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1363(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1363_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1363_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1363_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1363_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1364
#define MACROLOP_PRIVATE_EVAL_REC_1363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1364(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1364_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1364_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1364_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1364_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1365
#define MACROLOP_PRIVATE_EVAL_REC_1364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1365(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1365_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1365_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1365_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1365_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1366
#define MACROLOP_PRIVATE_EVAL_REC_1365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1366(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1366_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1366_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1366_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1366_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1367
#define MACROLOP_PRIVATE_EVAL_REC_1366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1367(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1367_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1367_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1367_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1367_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1368
#define MACROLOP_PRIVATE_EVAL_REC_1367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1368(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1368_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1368_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1368_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1368_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1369
#define MACROLOP_PRIVATE_EVAL_REC_1368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1369(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1369_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1369_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1369_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1369_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1370
#define MACROLOP_PRIVATE_EVAL_REC_1369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1370(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1370_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1370_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1370_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1370_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1371
#define MACROLOP_PRIVATE_EVAL_REC_1370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1371(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1371_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1371_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1371_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1371_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1372
#define MACROLOP_PRIVATE_EVAL_REC_1371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1372(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1372_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1372_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1372_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1372_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1373
#define MACROLOP_PRIVATE_EVAL_REC_1372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1373(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1373_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1373_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1373_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1373_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1374
#define MACROLOP_PRIVATE_EVAL_REC_1373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1374(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1374_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1374_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1374_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1374_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1375
#define MACROLOP_PRIVATE_EVAL_REC_1374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1375(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1375_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1375_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1375_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1375_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1376
#define MACROLOP_PRIVATE_EVAL_REC_1375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1376(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1376_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1376_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1376_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1376_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1377
#define MACROLOP_PRIVATE_EVAL_REC_1376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1377(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1377_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1377_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1377_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1377_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1378
#define MACROLOP_PRIVATE_EVAL_REC_1377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1378(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1378_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1378_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1378_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1378_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1379
#define MACROLOP_PRIVATE_EVAL_REC_1378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1379(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1379_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1379_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1379_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1379_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1380
#define MACROLOP_PRIVATE_EVAL_REC_1379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1380(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1380_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1380_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1380_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1380_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1381
#define MACROLOP_PRIVATE_EVAL_REC_1380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1381(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1381_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1381_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1381_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1381_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1382
#define MACROLOP_PRIVATE_EVAL_REC_1381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1382(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1382_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1382_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1382_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1382_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1383
#define MACROLOP_PRIVATE_EVAL_REC_1382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1383(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1383_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1383_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1383_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1383_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1384
#define MACROLOP_PRIVATE_EVAL_REC_1383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1384(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1384_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1384_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1384_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1384_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1385
#define MACROLOP_PRIVATE_EVAL_REC_1384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1385(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1385_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1385_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1385_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1385_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1386
#define MACROLOP_PRIVATE_EVAL_REC_1385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1386(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1386_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1386_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1386_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1386_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1387
#define MACROLOP_PRIVATE_EVAL_REC_1386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1387(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1387_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1387_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1387_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1387_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1388
#define MACROLOP_PRIVATE_EVAL_REC_1387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1388(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1388_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1388_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1388_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1388_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1389
#define MACROLOP_PRIVATE_EVAL_REC_1388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1389(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1389_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1389_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1389_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1389_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1390
#define MACROLOP_PRIVATE_EVAL_REC_1389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1390(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1390_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1390_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1390_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1390_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1391
#define MACROLOP_PRIVATE_EVAL_REC_1390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1391(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1391_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1391_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1391_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1391_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1392
#define MACROLOP_PRIVATE_EVAL_REC_1391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1392(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1392_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1392_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1392_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1392_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1393
#define MACROLOP_PRIVATE_EVAL_REC_1392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1393(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1393_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1393_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1393_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1393_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1394
#define MACROLOP_PRIVATE_EVAL_REC_1393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1394(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1394_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1394_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1394_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1394_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1395
#define MACROLOP_PRIVATE_EVAL_REC_1394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1395(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1395_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1395_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1395_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1395_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1396
#define MACROLOP_PRIVATE_EVAL_REC_1395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1396(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1396_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1396_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1396_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1396_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1397
#define MACROLOP_PRIVATE_EVAL_REC_1396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1397(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1397_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1397_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1397_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1397_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1398
#define MACROLOP_PRIVATE_EVAL_REC_1397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1398(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1398_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1398_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1398_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1398_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1399
#define MACROLOP_PRIVATE_EVAL_REC_1398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1399(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1399_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1399_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1399_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1399_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1400
#define MACROLOP_PRIVATE_EVAL_REC_1399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1400(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1400_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1400_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1400_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1400_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1401
#define MACROLOP_PRIVATE_EVAL_REC_1400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1401(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1401_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1401_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1401_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1401_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1402
#define MACROLOP_PRIVATE_EVAL_REC_1401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1402(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1402_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1402_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1402_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1402_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1403
#define MACROLOP_PRIVATE_EVAL_REC_1402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1403(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1403_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1403_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1403_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1403_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1404
#define MACROLOP_PRIVATE_EVAL_REC_1403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1404(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1404_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1404_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1404_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1404_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1405
#define MACROLOP_PRIVATE_EVAL_REC_1404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1405(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1405_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1405_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1405_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1405_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1406
#define MACROLOP_PRIVATE_EVAL_REC_1405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1406(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1406_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1406_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1406_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1406_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1407
#define MACROLOP_PRIVATE_EVAL_REC_1406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1407(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1407_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1407_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1407_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1407_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1408
#define MACROLOP_PRIVATE_EVAL_REC_1407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1408(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1408_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1408_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1408_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1408_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1409
#define MACROLOP_PRIVATE_EVAL_REC_1408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1409(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1409_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1409_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1409_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1409_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1410
#define MACROLOP_PRIVATE_EVAL_REC_1409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1410(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1410_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1410_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1410_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1410_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1411
#define MACROLOP_PRIVATE_EVAL_REC_1410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1411(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1411_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1411_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1411_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1411_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1412
#define MACROLOP_PRIVATE_EVAL_REC_1411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1412(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1412_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1412_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1412_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1412_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1413
#define MACROLOP_PRIVATE_EVAL_REC_1412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1413(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1413_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1413_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1413_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1413_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1414
#define MACROLOP_PRIVATE_EVAL_REC_1413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1414(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1414_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1414_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1414_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1414_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1415
#define MACROLOP_PRIVATE_EVAL_REC_1414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1415(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1415_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1415_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1415_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1415_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1416
#define MACROLOP_PRIVATE_EVAL_REC_1415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1416(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1416_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1416_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1416_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1416_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1417
#define MACROLOP_PRIVATE_EVAL_REC_1416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1417(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1417_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1417_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1417_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1417_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1418
#define MACROLOP_PRIVATE_EVAL_REC_1417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1418(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1418_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1418_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1418_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1418_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1419
#define MACROLOP_PRIVATE_EVAL_REC_1418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1419(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1419_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1419_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1419_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1419_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1420
#define MACROLOP_PRIVATE_EVAL_REC_1419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1420(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1420_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1420_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1420_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1420_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1421
#define MACROLOP_PRIVATE_EVAL_REC_1420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1421(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1421_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1421_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1421_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1421_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1422
#define MACROLOP_PRIVATE_EVAL_REC_1421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1422(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1422_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1422_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1422_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1422_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1423
#define MACROLOP_PRIVATE_EVAL_REC_1422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1423(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1423_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1423_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1423_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1423_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1424
#define MACROLOP_PRIVATE_EVAL_REC_1423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1424(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1424_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1424_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1424_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1424_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1425
#define MACROLOP_PRIVATE_EVAL_REC_1424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1425(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1425_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1425_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1425_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1425_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1426
#define MACROLOP_PRIVATE_EVAL_REC_1425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1426(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1426_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1426_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1426_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1426_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1427
#define MACROLOP_PRIVATE_EVAL_REC_1426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1427(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1427_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1427_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1427_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1427_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1428
#define MACROLOP_PRIVATE_EVAL_REC_1427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1428(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1428_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1428_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1428_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1428_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1429
#define MACROLOP_PRIVATE_EVAL_REC_1428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1429(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1429_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1429_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1429_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1429_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1430
#define MACROLOP_PRIVATE_EVAL_REC_1429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1430(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1430_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1430_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1430_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1430_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1431
#define MACROLOP_PRIVATE_EVAL_REC_1430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1431(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1431_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1431_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1431_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1431_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1432
#define MACROLOP_PRIVATE_EVAL_REC_1431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1432(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1432_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1432_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1432_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1432_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1433
#define MACROLOP_PRIVATE_EVAL_REC_1432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1433(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1433_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1433_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1433_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1433_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1434
#define MACROLOP_PRIVATE_EVAL_REC_1433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1434(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1434_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1434_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1434_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1434_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1435
#define MACROLOP_PRIVATE_EVAL_REC_1434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1435(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1435_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1435_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1435_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1435_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1436
#define MACROLOP_PRIVATE_EVAL_REC_1435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1436(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1436_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1436_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1436_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1436_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1437
#define MACROLOP_PRIVATE_EVAL_REC_1436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1437(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1437_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1437_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1437_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1437_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1438
#define MACROLOP_PRIVATE_EVAL_REC_1437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1438(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1438_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1438_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1438_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1438_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1439
#define MACROLOP_PRIVATE_EVAL_REC_1438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1439(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1439_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1439_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1439_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1439_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1440
#define MACROLOP_PRIVATE_EVAL_REC_1439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1440(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1440_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1440_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1440_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1440_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1441
#define MACROLOP_PRIVATE_EVAL_REC_1440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1441(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1441_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1441_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1441_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1441_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1442
#define MACROLOP_PRIVATE_EVAL_REC_1441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1442(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1442_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1442_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1442_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1442_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1443
#define MACROLOP_PRIVATE_EVAL_REC_1442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1443(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1443_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1443_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1443_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1443_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1444
#define MACROLOP_PRIVATE_EVAL_REC_1443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1444(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1444_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1444_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1444_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1444_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1445
#define MACROLOP_PRIVATE_EVAL_REC_1444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1445(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1445_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1445_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1445_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1445_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1446
#define MACROLOP_PRIVATE_EVAL_REC_1445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1446(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1446_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1446_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1446_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1446_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1447
#define MACROLOP_PRIVATE_EVAL_REC_1446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1447(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1447_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1447_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1447_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1447_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1448
#define MACROLOP_PRIVATE_EVAL_REC_1447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1448(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1448_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1448_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1448_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1448_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1449
#define MACROLOP_PRIVATE_EVAL_REC_1448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1449(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1449_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1449_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1449_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1449_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1450
#define MACROLOP_PRIVATE_EVAL_REC_1449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1450(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1450_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1450_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1450_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1450_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1451
#define MACROLOP_PRIVATE_EVAL_REC_1450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1451(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1451_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1451_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1451_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1451_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1452
#define MACROLOP_PRIVATE_EVAL_REC_1451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1452(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1452_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1452_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1452_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1452_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1453
#define MACROLOP_PRIVATE_EVAL_REC_1452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1453(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1453_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1453_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1453_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1453_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1454
#define MACROLOP_PRIVATE_EVAL_REC_1453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1454(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1454_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1454_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1454_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1454_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1455
#define MACROLOP_PRIVATE_EVAL_REC_1454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1455(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1455_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1455_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1455_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1455_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1456
#define MACROLOP_PRIVATE_EVAL_REC_1455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1456(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1456_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1456_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1456_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1456_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1457
#define MACROLOP_PRIVATE_EVAL_REC_1456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1457(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1457_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1457_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1457_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1457_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1458
#define MACROLOP_PRIVATE_EVAL_REC_1457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1458(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1458_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1458_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1458_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1458_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1459
#define MACROLOP_PRIVATE_EVAL_REC_1458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1459(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1459_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1459_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1459_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1459_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1460
#define MACROLOP_PRIVATE_EVAL_REC_1459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1460(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1460_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1460_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1460_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1460_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1461
#define MACROLOP_PRIVATE_EVAL_REC_1460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1461(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1461_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1461_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1461_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1461_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1462
#define MACROLOP_PRIVATE_EVAL_REC_1461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1462(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1462_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1462_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1462_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1462_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1463
#define MACROLOP_PRIVATE_EVAL_REC_1462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1463(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1463_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1463_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1463_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1463_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1464
#define MACROLOP_PRIVATE_EVAL_REC_1463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1464(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1464_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1464_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1464_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1464_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1465
#define MACROLOP_PRIVATE_EVAL_REC_1464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1465(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1465_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1465_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1465_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1465_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1466
#define MACROLOP_PRIVATE_EVAL_REC_1465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1466(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1466_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1466_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1466_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1466_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1467
#define MACROLOP_PRIVATE_EVAL_REC_1466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1467(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1467_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1467_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1467_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1467_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1468
#define MACROLOP_PRIVATE_EVAL_REC_1467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1468(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1468_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1468_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1468_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1468_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1469
#define MACROLOP_PRIVATE_EVAL_REC_1468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1469(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1469_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1469_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1469_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1469_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1470
#define MACROLOP_PRIVATE_EVAL_REC_1469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1470(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1470_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1470_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1470_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1470_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1471
#define MACROLOP_PRIVATE_EVAL_REC_1470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1471(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1471_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1471_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1471_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1471_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1472
#define MACROLOP_PRIVATE_EVAL_REC_1471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1472(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1472_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1472_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1472_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1472_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1473
#define MACROLOP_PRIVATE_EVAL_REC_1472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1473(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1473_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1473_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1473_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1473_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1474
#define MACROLOP_PRIVATE_EVAL_REC_1473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1474(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1474_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1474_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1474_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1474_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1475
#define MACROLOP_PRIVATE_EVAL_REC_1474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1475(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1475_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1475_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1475_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1475_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1476
#define MACROLOP_PRIVATE_EVAL_REC_1475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1476(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1476_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1476_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1476_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1476_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1477
#define MACROLOP_PRIVATE_EVAL_REC_1476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1477(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1477_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1477_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1477_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1477_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1478
#define MACROLOP_PRIVATE_EVAL_REC_1477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1478(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1478_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1478_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1478_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1478_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1479
#define MACROLOP_PRIVATE_EVAL_REC_1478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1479(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1479_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1479_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1479_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1479_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1480
#define MACROLOP_PRIVATE_EVAL_REC_1479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1480(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1480_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1480_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1480_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1480_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1481
#define MACROLOP_PRIVATE_EVAL_REC_1480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1481(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1481_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1481_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1481_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1481_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1482
#define MACROLOP_PRIVATE_EVAL_REC_1481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1482(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1482_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1482_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1482_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1482_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1483
#define MACROLOP_PRIVATE_EVAL_REC_1482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1483(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1483_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1483_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1483_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1483_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1484
#define MACROLOP_PRIVATE_EVAL_REC_1483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1484(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1484_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1484_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1484_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1484_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1485
#define MACROLOP_PRIVATE_EVAL_REC_1484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1485(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1485_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1485_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1485_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1485_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1486
#define MACROLOP_PRIVATE_EVAL_REC_1485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1486(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1486_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1486_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1486_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1486_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1487
#define MACROLOP_PRIVATE_EVAL_REC_1486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1487(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1487_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1487_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1487_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1487_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1488
#define MACROLOP_PRIVATE_EVAL_REC_1487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1488(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1488_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1488_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1488_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1488_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1489
#define MACROLOP_PRIVATE_EVAL_REC_1488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1489(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1489_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1489_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1489_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1489_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1490
#define MACROLOP_PRIVATE_EVAL_REC_1489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1490(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1490_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1490_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1490_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1490_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1491
#define MACROLOP_PRIVATE_EVAL_REC_1490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1491(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1491_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1491_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1491_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1491_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1492
#define MACROLOP_PRIVATE_EVAL_REC_1491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1492(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1492_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1492_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1492_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1492_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1493
#define MACROLOP_PRIVATE_EVAL_REC_1492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1493(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1493_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1493_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1493_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1493_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1494
#define MACROLOP_PRIVATE_EVAL_REC_1493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1494(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1494_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1494_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1494_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1494_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1495
#define MACROLOP_PRIVATE_EVAL_REC_1494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1495(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1495_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1495_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1495_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1495_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1496
#define MACROLOP_PRIVATE_EVAL_REC_1495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1496(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1496_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1496_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1496_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1496_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1497
#define MACROLOP_PRIVATE_EVAL_REC_1496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1497(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1497_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1497_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1497_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1497_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1498
#define MACROLOP_PRIVATE_EVAL_REC_1497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1498(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1498_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1498_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1498_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1498_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1499
#define MACROLOP_PRIVATE_EVAL_REC_1498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1499(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1499_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1499_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1499_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1499_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1500
#define MACROLOP_PRIVATE_EVAL_REC_1499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1500(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1500_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1500_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1500_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1500_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1501
#define MACROLOP_PRIVATE_EVAL_REC_1500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1501(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1501_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1501_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1501_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1501_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1502
#define MACROLOP_PRIVATE_EVAL_REC_1501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1502(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1502_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1502_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1502_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1502_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1503
#define MACROLOP_PRIVATE_EVAL_REC_1502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1503(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1503_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1503_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1503_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1503_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1504
#define MACROLOP_PRIVATE_EVAL_REC_1503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1504(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1504_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1504_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1504_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1504_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1505
#define MACROLOP_PRIVATE_EVAL_REC_1504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1505(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1505_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1505_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1505_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1505_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1506
#define MACROLOP_PRIVATE_EVAL_REC_1505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1506(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1506_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1506_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1506_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1506_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1507
#define MACROLOP_PRIVATE_EVAL_REC_1506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1507(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1507_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1507_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1507_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1507_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1508
#define MACROLOP_PRIVATE_EVAL_REC_1507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1508(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1508_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1508_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1508_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1508_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1509
#define MACROLOP_PRIVATE_EVAL_REC_1508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1509(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1509_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1509_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1509_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1509_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1510
#define MACROLOP_PRIVATE_EVAL_REC_1509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1510(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1510_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1510_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1510_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1510_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1511
#define MACROLOP_PRIVATE_EVAL_REC_1510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1511(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1511_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1511_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1511_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1511_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1512
#define MACROLOP_PRIVATE_EVAL_REC_1511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1512(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1512_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1512_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1512_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1512_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1513
#define MACROLOP_PRIVATE_EVAL_REC_1512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1513(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1513_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1513_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1513_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1513_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1514
#define MACROLOP_PRIVATE_EVAL_REC_1513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1514(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1514_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1514_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1514_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1514_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1515
#define MACROLOP_PRIVATE_EVAL_REC_1514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1515(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1515_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1515_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1515_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1515_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1516
#define MACROLOP_PRIVATE_EVAL_REC_1515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1516(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1516_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1516_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1516_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1516_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1517
#define MACROLOP_PRIVATE_EVAL_REC_1516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1517(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1517_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1517_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1517_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1517_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1518
#define MACROLOP_PRIVATE_EVAL_REC_1517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1518(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1518_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1518_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1518_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1518_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1519
#define MACROLOP_PRIVATE_EVAL_REC_1518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1519(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1519_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1519_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1519_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1519_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1520
#define MACROLOP_PRIVATE_EVAL_REC_1519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1520(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1520_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1520_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1520_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1520_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1521
#define MACROLOP_PRIVATE_EVAL_REC_1520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1521(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1521_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1521_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1521_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1521_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1522
#define MACROLOP_PRIVATE_EVAL_REC_1521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1522(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1522_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1522_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1522_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1522_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1523
#define MACROLOP_PRIVATE_EVAL_REC_1522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1523(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1523_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1523_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1523_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1523_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1524
#define MACROLOP_PRIVATE_EVAL_REC_1523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1524(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1524_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1524_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1524_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1524_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1525
#define MACROLOP_PRIVATE_EVAL_REC_1524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1525(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1525_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1525_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1525_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1525_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1526
#define MACROLOP_PRIVATE_EVAL_REC_1525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1526(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1526_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1526_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1526_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1526_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1527
#define MACROLOP_PRIVATE_EVAL_REC_1526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1527(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1527_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1527_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1527_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1527_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1528
#define MACROLOP_PRIVATE_EVAL_REC_1527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1528(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1528_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1528_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1528_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1528_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1529
#define MACROLOP_PRIVATE_EVAL_REC_1528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1529(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1529_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1529_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1529_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1529_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1530
#define MACROLOP_PRIVATE_EVAL_REC_1529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1530(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1530_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1530_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1530_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1530_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1531
#define MACROLOP_PRIVATE_EVAL_REC_1530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1531(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1531_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1531_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1531_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1531_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1532
#define MACROLOP_PRIVATE_EVAL_REC_1531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1532(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1532_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1532_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1532_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1532_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1533
#define MACROLOP_PRIVATE_EVAL_REC_1532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1533(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1533_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1533_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1533_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1533_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1534
#define MACROLOP_PRIVATE_EVAL_REC_1533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1534(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1534_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1534_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1534_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1534_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1535
#define MACROLOP_PRIVATE_EVAL_REC_1534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1535(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1535_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1535_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1535_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1535_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1536
#define MACROLOP_PRIVATE_EVAL_REC_1535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1536(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1536_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1536_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1536_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1536_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1537
#define MACROLOP_PRIVATE_EVAL_REC_1536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1537(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1537_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1537_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1537_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1537_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1538
#define MACROLOP_PRIVATE_EVAL_REC_1537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1538(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1538_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1538_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1538_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1538_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1539
#define MACROLOP_PRIVATE_EVAL_REC_1538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1539(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1539_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1539_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1539_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1539_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1540
#define MACROLOP_PRIVATE_EVAL_REC_1539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1540(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1540_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1540_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1540_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1540_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1541
#define MACROLOP_PRIVATE_EVAL_REC_1540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1541(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1541_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1541_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1541_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1541_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1542
#define MACROLOP_PRIVATE_EVAL_REC_1541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1542(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1542_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1542_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1542_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1542_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1543
#define MACROLOP_PRIVATE_EVAL_REC_1542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1543(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1543_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1543_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1543_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1543_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1544
#define MACROLOP_PRIVATE_EVAL_REC_1543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1544(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1544_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1544_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1544_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1544_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1545
#define MACROLOP_PRIVATE_EVAL_REC_1544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1545(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1545_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1545_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1545_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1545_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1546
#define MACROLOP_PRIVATE_EVAL_REC_1545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1546(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1546_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1546_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1546_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1546_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1547
#define MACROLOP_PRIVATE_EVAL_REC_1546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1547(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1547_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1547_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1547_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1547_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1548
#define MACROLOP_PRIVATE_EVAL_REC_1547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1548(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1548_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1548_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1548_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1548_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1549
#define MACROLOP_PRIVATE_EVAL_REC_1548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1549(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1549_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1549_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1549_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1549_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1550
#define MACROLOP_PRIVATE_EVAL_REC_1549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1550(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1550_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1550_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1550_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1550_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1551
#define MACROLOP_PRIVATE_EVAL_REC_1550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1551(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1551_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1551_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1551_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1551_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1552
#define MACROLOP_PRIVATE_EVAL_REC_1551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1552(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1552_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1552_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1552_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1552_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1553
#define MACROLOP_PRIVATE_EVAL_REC_1552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1553(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1553_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1553_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1553_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1553_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1554
#define MACROLOP_PRIVATE_EVAL_REC_1553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1554(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1554_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1554_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1554_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1554_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1555
#define MACROLOP_PRIVATE_EVAL_REC_1554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1555(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1555_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1555_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1555_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1555_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1556
#define MACROLOP_PRIVATE_EVAL_REC_1555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1556(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1556_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1556_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1556_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1556_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1557
#define MACROLOP_PRIVATE_EVAL_REC_1556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1557(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1557_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1557_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1557_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1557_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1558
#define MACROLOP_PRIVATE_EVAL_REC_1557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1558(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1558_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1558_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1558_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1558_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1559
#define MACROLOP_PRIVATE_EVAL_REC_1558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1559(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1559_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1559_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1559_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1559_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1560
#define MACROLOP_PRIVATE_EVAL_REC_1559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1560(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1560_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1560_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1560_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1560_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1561
#define MACROLOP_PRIVATE_EVAL_REC_1560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1561(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1561_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1561_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1561_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1561_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1562
#define MACROLOP_PRIVATE_EVAL_REC_1561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1562(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1562_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1562_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1562_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1562_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1563
#define MACROLOP_PRIVATE_EVAL_REC_1562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1563(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1563_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1563_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1563_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1563_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1564
#define MACROLOP_PRIVATE_EVAL_REC_1563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1564(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1564_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1564_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1564_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1564_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1565
#define MACROLOP_PRIVATE_EVAL_REC_1564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1565(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1565_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1565_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1565_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1565_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1566
#define MACROLOP_PRIVATE_EVAL_REC_1565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1566(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1566_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1566_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1566_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1566_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1567
#define MACROLOP_PRIVATE_EVAL_REC_1566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1567(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1567_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1567_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1567_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1567_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1568
#define MACROLOP_PRIVATE_EVAL_REC_1567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1568(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1568_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1568_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1568_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1568_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1569
#define MACROLOP_PRIVATE_EVAL_REC_1568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1569(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1569_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1569_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1569_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1569_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1570
#define MACROLOP_PRIVATE_EVAL_REC_1569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1570(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1570_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1570_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1570_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1570_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1571
#define MACROLOP_PRIVATE_EVAL_REC_1570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1571(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1571_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1571_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1571_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1571_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1572
#define MACROLOP_PRIVATE_EVAL_REC_1571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1572(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1572_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1572_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1572_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1572_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1573
#define MACROLOP_PRIVATE_EVAL_REC_1572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1573(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1573_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1573_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1573_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1573_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1574
#define MACROLOP_PRIVATE_EVAL_REC_1573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1574(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1574_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1574_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1574_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1574_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1575
#define MACROLOP_PRIVATE_EVAL_REC_1574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1575(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1575_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1575_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1575_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1575_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1576
#define MACROLOP_PRIVATE_EVAL_REC_1575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1576(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1576_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1576_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1576_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1576_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1577
#define MACROLOP_PRIVATE_EVAL_REC_1576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1577(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1577_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1577_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1577_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1577_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1578
#define MACROLOP_PRIVATE_EVAL_REC_1577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1578(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1578_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1578_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1578_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1578_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1579
#define MACROLOP_PRIVATE_EVAL_REC_1578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1579(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1579_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1579_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1579_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1579_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1580
#define MACROLOP_PRIVATE_EVAL_REC_1579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1580(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1580_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1580_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1580_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1580_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1581
#define MACROLOP_PRIVATE_EVAL_REC_1580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1581(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1581_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1581_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1581_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1581_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1582
#define MACROLOP_PRIVATE_EVAL_REC_1581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1582(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1582_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1582_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1582_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1582_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1583
#define MACROLOP_PRIVATE_EVAL_REC_1582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1583(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1583_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1583_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1583_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1583_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1584
#define MACROLOP_PRIVATE_EVAL_REC_1583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1584(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1584_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1584_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1584_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1584_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1585
#define MACROLOP_PRIVATE_EVAL_REC_1584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1585(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1585_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1585_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1585_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1585_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1586
#define MACROLOP_PRIVATE_EVAL_REC_1585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1586(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1586_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1586_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1586_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1586_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1587
#define MACROLOP_PRIVATE_EVAL_REC_1586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1587(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1587_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1587_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1587_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1587_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1588
#define MACROLOP_PRIVATE_EVAL_REC_1587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1588(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1588_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1588_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1588_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1588_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1589
#define MACROLOP_PRIVATE_EVAL_REC_1588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1589(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1589_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1589_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1589_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1589_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1590
#define MACROLOP_PRIVATE_EVAL_REC_1589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1590(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1590_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1590_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1590_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1590_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1591
#define MACROLOP_PRIVATE_EVAL_REC_1590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1591(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1591_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1591_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1591_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1591_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1592
#define MACROLOP_PRIVATE_EVAL_REC_1591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1592(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1592_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1592_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1592_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1592_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1593
#define MACROLOP_PRIVATE_EVAL_REC_1592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1593(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1593_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1593_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1593_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1593_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1594
#define MACROLOP_PRIVATE_EVAL_REC_1593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1594(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1594_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1594_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1594_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1594_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1595
#define MACROLOP_PRIVATE_EVAL_REC_1594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1595(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1595_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1595_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1595_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1595_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1596
#define MACROLOP_PRIVATE_EVAL_REC_1595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1596(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1596_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1596_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1596_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1596_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1597
#define MACROLOP_PRIVATE_EVAL_REC_1596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1597(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1597_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1597_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1597_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1597_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1598
#define MACROLOP_PRIVATE_EVAL_REC_1597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1598(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1598_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1598_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1598_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1598_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1599
#define MACROLOP_PRIVATE_EVAL_REC_1598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1599(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1599_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1599_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1599_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1599_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1600
#define MACROLOP_PRIVATE_EVAL_REC_1599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1600(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1600_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1600_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1600_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1600_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1601
#define MACROLOP_PRIVATE_EVAL_REC_1600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1601(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1601_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1601_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1601_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1601_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1602
#define MACROLOP_PRIVATE_EVAL_REC_1601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1602(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1602_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1602_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1602_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1602_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1603
#define MACROLOP_PRIVATE_EVAL_REC_1602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1603(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1603_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1603_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1603_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1603_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1604
#define MACROLOP_PRIVATE_EVAL_REC_1603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1604(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1604_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1604_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1604_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1604_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1605
#define MACROLOP_PRIVATE_EVAL_REC_1604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1605(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1605_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1605_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1605_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1605_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1606
#define MACROLOP_PRIVATE_EVAL_REC_1605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1606(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1606_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1606_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1606_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1606_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1607
#define MACROLOP_PRIVATE_EVAL_REC_1606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1607(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1607_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1607_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1607_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1607_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1608
#define MACROLOP_PRIVATE_EVAL_REC_1607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1608(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1608_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1608_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1608_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1608_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1609
#define MACROLOP_PRIVATE_EVAL_REC_1608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1609(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1609_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1609_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1609_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1609_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1610
#define MACROLOP_PRIVATE_EVAL_REC_1609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1610(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1610_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1610_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1610_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1610_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1611
#define MACROLOP_PRIVATE_EVAL_REC_1610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1611(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1611_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1611_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1611_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1611_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1612
#define MACROLOP_PRIVATE_EVAL_REC_1611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1612(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1612_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1612_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1612_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1612_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1613
#define MACROLOP_PRIVATE_EVAL_REC_1612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1613(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1613_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1613_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1613_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1613_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1614
#define MACROLOP_PRIVATE_EVAL_REC_1613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1614(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1614_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1614_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1614_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1614_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1615
#define MACROLOP_PRIVATE_EVAL_REC_1614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1615(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1615_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1615_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1615_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1615_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1616
#define MACROLOP_PRIVATE_EVAL_REC_1615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1616(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1616_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1616_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1616_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1616_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1617
#define MACROLOP_PRIVATE_EVAL_REC_1616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1617(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1617_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1617_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1617_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1617_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1618
#define MACROLOP_PRIVATE_EVAL_REC_1617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1618(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1618_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1618_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1618_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1618_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1619
#define MACROLOP_PRIVATE_EVAL_REC_1618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1619(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1619_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1619_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1619_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1619_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1620
#define MACROLOP_PRIVATE_EVAL_REC_1619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1620(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1620_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1620_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1620_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1620_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1621
#define MACROLOP_PRIVATE_EVAL_REC_1620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1621(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1621_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1621_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1621_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1621_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1622
#define MACROLOP_PRIVATE_EVAL_REC_1621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1622(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1622_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1622_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1622_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1622_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1623
#define MACROLOP_PRIVATE_EVAL_REC_1622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1623(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1623_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1623_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1623_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1623_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1624
#define MACROLOP_PRIVATE_EVAL_REC_1623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1624(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1624_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1624_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1624_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1624_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1625
#define MACROLOP_PRIVATE_EVAL_REC_1624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1625(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1625_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1625_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1625_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1625_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1626
#define MACROLOP_PRIVATE_EVAL_REC_1625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1626(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1626_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1626_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1626_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1626_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1627
#define MACROLOP_PRIVATE_EVAL_REC_1626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1627(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1627_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1627_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1627_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1627_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1628
#define MACROLOP_PRIVATE_EVAL_REC_1627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1628(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1628_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1628_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1628_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1628_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1629
#define MACROLOP_PRIVATE_EVAL_REC_1628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1629(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1629_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1629_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1629_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1629_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1630
#define MACROLOP_PRIVATE_EVAL_REC_1629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1630(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1630_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1630_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1630_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1630_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1631
#define MACROLOP_PRIVATE_EVAL_REC_1630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1631(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1631_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1631_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1631_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1631_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1632
#define MACROLOP_PRIVATE_EVAL_REC_1631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1632(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1632_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1632_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1632_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1632_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1633
#define MACROLOP_PRIVATE_EVAL_REC_1632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1633(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1633_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1633_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1633_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1633_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1634
#define MACROLOP_PRIVATE_EVAL_REC_1633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1634(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1634_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1634_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1634_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1634_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1635
#define MACROLOP_PRIVATE_EVAL_REC_1634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1635(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1635_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1635_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1635_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1635_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1636
#define MACROLOP_PRIVATE_EVAL_REC_1635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1636(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1636_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1636_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1636_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1636_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1637
#define MACROLOP_PRIVATE_EVAL_REC_1636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1637(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1637_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1637_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1637_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1637_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1638
#define MACROLOP_PRIVATE_EVAL_REC_1637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1638(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1638_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1638_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1638_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1638_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1639
#define MACROLOP_PRIVATE_EVAL_REC_1638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1639(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1639_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1639_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1639_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1639_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1640
#define MACROLOP_PRIVATE_EVAL_REC_1639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1640(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1640_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1640_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1640_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1640_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1641
#define MACROLOP_PRIVATE_EVAL_REC_1640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1641(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1641_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1641_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1641_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1641_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1642
#define MACROLOP_PRIVATE_EVAL_REC_1641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1642(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1642_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1642_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1642_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1642_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1643
#define MACROLOP_PRIVATE_EVAL_REC_1642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1643(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1643_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1643_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1643_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1643_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1644
#define MACROLOP_PRIVATE_EVAL_REC_1643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1644(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1644_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1644_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1644_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1644_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1645
#define MACROLOP_PRIVATE_EVAL_REC_1644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1645(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1645_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1645_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1645_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1645_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1646
#define MACROLOP_PRIVATE_EVAL_REC_1645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1646(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1646_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1646_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1646_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1646_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1647
#define MACROLOP_PRIVATE_EVAL_REC_1646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1647(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1647_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1647_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1647_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1647_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1648
#define MACROLOP_PRIVATE_EVAL_REC_1647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1648(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1648_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1648_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1648_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1648_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1649
#define MACROLOP_PRIVATE_EVAL_REC_1648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1649(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1649_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1649_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1649_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1649_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1650
#define MACROLOP_PRIVATE_EVAL_REC_1649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1650(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1650_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1650_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1650_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1650_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1651
#define MACROLOP_PRIVATE_EVAL_REC_1650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1651(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1651_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1651_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1651_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1651_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1652
#define MACROLOP_PRIVATE_EVAL_REC_1651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1652(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1652_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1652_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1652_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1652_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1653
#define MACROLOP_PRIVATE_EVAL_REC_1652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1653(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1653_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1653_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1653_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1653_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1654
#define MACROLOP_PRIVATE_EVAL_REC_1653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1654(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1654_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1654_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1654_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1654_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1655
#define MACROLOP_PRIVATE_EVAL_REC_1654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1655(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1655_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1655_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1655_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1655_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1656
#define MACROLOP_PRIVATE_EVAL_REC_1655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1656(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1656_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1656_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1656_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1656_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1657
#define MACROLOP_PRIVATE_EVAL_REC_1656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1657(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1657_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1657_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1657_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1657_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1658
#define MACROLOP_PRIVATE_EVAL_REC_1657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1658(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1658_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1658_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1658_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1658_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1659
#define MACROLOP_PRIVATE_EVAL_REC_1658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1659(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1659_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1659_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1659_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1659_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1660
#define MACROLOP_PRIVATE_EVAL_REC_1659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1660(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1660_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1660_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1660_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1660_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1661
#define MACROLOP_PRIVATE_EVAL_REC_1660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1661(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1661_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1661_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1661_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1661_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1662
#define MACROLOP_PRIVATE_EVAL_REC_1661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1662(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1662_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1662_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1662_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1662_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1663
#define MACROLOP_PRIVATE_EVAL_REC_1662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1663(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1663_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1663_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1663_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1663_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1664
#define MACROLOP_PRIVATE_EVAL_REC_1663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1664(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1664_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1664_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1664_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1664_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1665
#define MACROLOP_PRIVATE_EVAL_REC_1664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1665(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1665_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1665_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1665_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1665_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1666
#define MACROLOP_PRIVATE_EVAL_REC_1665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1666(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1666_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1666_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1666_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1666_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1667
#define MACROLOP_PRIVATE_EVAL_REC_1666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1667(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1667_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1667_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1667_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1667_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1668
#define MACROLOP_PRIVATE_EVAL_REC_1667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1668(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1668_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1668_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1668_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1668_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1669
#define MACROLOP_PRIVATE_EVAL_REC_1668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1669(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1669_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1669_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1669_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1669_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1670
#define MACROLOP_PRIVATE_EVAL_REC_1669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1670(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1670_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1670_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1670_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1670_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1671
#define MACROLOP_PRIVATE_EVAL_REC_1670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1671(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1671_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1671_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1671_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1671_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1672
#define MACROLOP_PRIVATE_EVAL_REC_1671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1672(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1672_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1672_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1672_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1672_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1673
#define MACROLOP_PRIVATE_EVAL_REC_1672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1673(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1673_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1673_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1673_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1673_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1674
#define MACROLOP_PRIVATE_EVAL_REC_1673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1674(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1674_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1674_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1674_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1674_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1675
#define MACROLOP_PRIVATE_EVAL_REC_1674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1675(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1675_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1675_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1675_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1675_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1676
#define MACROLOP_PRIVATE_EVAL_REC_1675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1676(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1676_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1676_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1676_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1676_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1677
#define MACROLOP_PRIVATE_EVAL_REC_1676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1677(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1677_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1677_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1677_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1677_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1678
#define MACROLOP_PRIVATE_EVAL_REC_1677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1678(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1678_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1678_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1678_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1678_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1679
#define MACROLOP_PRIVATE_EVAL_REC_1678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1679(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1679_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1679_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1679_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1679_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1680
#define MACROLOP_PRIVATE_EVAL_REC_1679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1680(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1680_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1680_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1680_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1680_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1681
#define MACROLOP_PRIVATE_EVAL_REC_1680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1681(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1681_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1681_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1681_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1681_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1682
#define MACROLOP_PRIVATE_EVAL_REC_1681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1682(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1682_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1682_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1682_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1682_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1683
#define MACROLOP_PRIVATE_EVAL_REC_1682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1683(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1683_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1683_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1683_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1683_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1684
#define MACROLOP_PRIVATE_EVAL_REC_1683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1684(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1684_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1684_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1684_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1684_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1685
#define MACROLOP_PRIVATE_EVAL_REC_1684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1685(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1685_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1685_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1685_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1685_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1686
#define MACROLOP_PRIVATE_EVAL_REC_1685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1686(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1686_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1686_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1686_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1686_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1687
#define MACROLOP_PRIVATE_EVAL_REC_1686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1687(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1687_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1687_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1687_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1687_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1688
#define MACROLOP_PRIVATE_EVAL_REC_1687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1688(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1688_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1688_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1688_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1688_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1689
#define MACROLOP_PRIVATE_EVAL_REC_1688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1689(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1689_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1689_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1689_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1689_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1690
#define MACROLOP_PRIVATE_EVAL_REC_1689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1690(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1690_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1690_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1690_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1690_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1691
#define MACROLOP_PRIVATE_EVAL_REC_1690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1691(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1691_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1691_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1691_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1691_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1692
#define MACROLOP_PRIVATE_EVAL_REC_1691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1692(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1692_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1692_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1692_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1692_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1693
#define MACROLOP_PRIVATE_EVAL_REC_1692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1693(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1693_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1693_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1693_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1693_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1694
#define MACROLOP_PRIVATE_EVAL_REC_1693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1694(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1694_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1694_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1694_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1694_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1695
#define MACROLOP_PRIVATE_EVAL_REC_1694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1695(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1695_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1695_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1695_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1695_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1696
#define MACROLOP_PRIVATE_EVAL_REC_1695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1696(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1696_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1696_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1696_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1696_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1697
#define MACROLOP_PRIVATE_EVAL_REC_1696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1697(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1697_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1697_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1697_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1697_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1698
#define MACROLOP_PRIVATE_EVAL_REC_1697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1698(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1698_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1698_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1698_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1698_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1699
#define MACROLOP_PRIVATE_EVAL_REC_1698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1699(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1699_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1699_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1699_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1699_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1700
#define MACROLOP_PRIVATE_EVAL_REC_1699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1700(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1700_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1700_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1700_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1700_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1701
#define MACROLOP_PRIVATE_EVAL_REC_1700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1701(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1701_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1701_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1701_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1701_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1702
#define MACROLOP_PRIVATE_EVAL_REC_1701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1702(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1702_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1702_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1702_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1702_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1703
#define MACROLOP_PRIVATE_EVAL_REC_1702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1703(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1703_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1703_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1703_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1703_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1704
#define MACROLOP_PRIVATE_EVAL_REC_1703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1704(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1704_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1704_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1704_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1704_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1705
#define MACROLOP_PRIVATE_EVAL_REC_1704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1705(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1705_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1705_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1705_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1705_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1706
#define MACROLOP_PRIVATE_EVAL_REC_1705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1706(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1706_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1706_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1706_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1706_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1707
#define MACROLOP_PRIVATE_EVAL_REC_1706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1707(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1707_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1707_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1707_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1707_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1708
#define MACROLOP_PRIVATE_EVAL_REC_1707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1708(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1708_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1708_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1708_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1708_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1709
#define MACROLOP_PRIVATE_EVAL_REC_1708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1709(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1709_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1709_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1709_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1709_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1710
#define MACROLOP_PRIVATE_EVAL_REC_1709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1710(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1710_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1710_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1710_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1710_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1711
#define MACROLOP_PRIVATE_EVAL_REC_1710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1711(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1711_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1711_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1711_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1711_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1712
#define MACROLOP_PRIVATE_EVAL_REC_1711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1712(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1712_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1712_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1712_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1712_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1713
#define MACROLOP_PRIVATE_EVAL_REC_1712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1713(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1713_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1713_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1713_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1713_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1714
#define MACROLOP_PRIVATE_EVAL_REC_1713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1714(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1714_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1714_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1714_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1714_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1715
#define MACROLOP_PRIVATE_EVAL_REC_1714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1715(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1715_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1715_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1715_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1715_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1716
#define MACROLOP_PRIVATE_EVAL_REC_1715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1716(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1716_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1716_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1716_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1716_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1717
#define MACROLOP_PRIVATE_EVAL_REC_1716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1717(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1717_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1717_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1717_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1717_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1718
#define MACROLOP_PRIVATE_EVAL_REC_1717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1718(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1718_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1718_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1718_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1718_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1719
#define MACROLOP_PRIVATE_EVAL_REC_1718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1719(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1719_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1719_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1719_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1719_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1720
#define MACROLOP_PRIVATE_EVAL_REC_1719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1720(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1720_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1720_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1720_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1720_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1721
#define MACROLOP_PRIVATE_EVAL_REC_1720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1721(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1721_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1721_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1721_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1721_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1722
#define MACROLOP_PRIVATE_EVAL_REC_1721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1722(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1722_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1722_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1722_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1722_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1723
#define MACROLOP_PRIVATE_EVAL_REC_1722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1723(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1723_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1723_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1723_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1723_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1724
#define MACROLOP_PRIVATE_EVAL_REC_1723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1724(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1724_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1724_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1724_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1724_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1725
#define MACROLOP_PRIVATE_EVAL_REC_1724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1725(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1725_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1725_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1725_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1725_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1726
#define MACROLOP_PRIVATE_EVAL_REC_1725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1726(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1726_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1726_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1726_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1726_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1727
#define MACROLOP_PRIVATE_EVAL_REC_1726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1727(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1727_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1727_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1727_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1727_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1728
#define MACROLOP_PRIVATE_EVAL_REC_1727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1728(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1728_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1728_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1728_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1728_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1729
#define MACROLOP_PRIVATE_EVAL_REC_1728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1729(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1729_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1729_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1729_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1729_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1730
#define MACROLOP_PRIVATE_EVAL_REC_1729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1730(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1730_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1730_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1730_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1730_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1731
#define MACROLOP_PRIVATE_EVAL_REC_1730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1731(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1731_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1731_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1731_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1731_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1732
#define MACROLOP_PRIVATE_EVAL_REC_1731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1732(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1732_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1732_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1732_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1732_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1733
#define MACROLOP_PRIVATE_EVAL_REC_1732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1733(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1733_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1733_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1733_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1733_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1734
#define MACROLOP_PRIVATE_EVAL_REC_1733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1734(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1734_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1734_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1734_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1734_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1735
#define MACROLOP_PRIVATE_EVAL_REC_1734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1735(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1735_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1735_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1735_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1735_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1736
#define MACROLOP_PRIVATE_EVAL_REC_1735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1736(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1736_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1736_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1736_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1736_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1737
#define MACROLOP_PRIVATE_EVAL_REC_1736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1737(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1737_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1737_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1737_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1737_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1738
#define MACROLOP_PRIVATE_EVAL_REC_1737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1738(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1738_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1738_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1738_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1738_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1739
#define MACROLOP_PRIVATE_EVAL_REC_1738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1739(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1739_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1739_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1739_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1739_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1740
#define MACROLOP_PRIVATE_EVAL_REC_1739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1740(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1740_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1740_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1740_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1740_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1741
#define MACROLOP_PRIVATE_EVAL_REC_1740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1741(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1741_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1741_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1741_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1741_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1742
#define MACROLOP_PRIVATE_EVAL_REC_1741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1742(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1742_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1742_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1742_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1742_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1743
#define MACROLOP_PRIVATE_EVAL_REC_1742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1743(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1743_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1743_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1743_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1743_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1744
#define MACROLOP_PRIVATE_EVAL_REC_1743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1744(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1744_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1744_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1744_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1744_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1745
#define MACROLOP_PRIVATE_EVAL_REC_1744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1745(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1745_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1745_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1745_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1745_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1746
#define MACROLOP_PRIVATE_EVAL_REC_1745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1746(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1746_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1746_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1746_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1746_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1747
#define MACROLOP_PRIVATE_EVAL_REC_1746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1747(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1747_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1747_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1747_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1747_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1748
#define MACROLOP_PRIVATE_EVAL_REC_1747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1748(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1748_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1748_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1748_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1748_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1749
#define MACROLOP_PRIVATE_EVAL_REC_1748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1749(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1749_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1749_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1749_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1749_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1750
#define MACROLOP_PRIVATE_EVAL_REC_1749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1750(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1750_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1750_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1750_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1750_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1751
#define MACROLOP_PRIVATE_EVAL_REC_1750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1751(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1751_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1751_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1751_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1751_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1752
#define MACROLOP_PRIVATE_EVAL_REC_1751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1752(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1752_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1752_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1752_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1752_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1753
#define MACROLOP_PRIVATE_EVAL_REC_1752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1753(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1753_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1753_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1753_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1753_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1754
#define MACROLOP_PRIVATE_EVAL_REC_1753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1754(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1754_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1754_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1754_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1754_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1755
#define MACROLOP_PRIVATE_EVAL_REC_1754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1755(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1755_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1755_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1755_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1755_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1756
#define MACROLOP_PRIVATE_EVAL_REC_1755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1756(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1756_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1756_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1756_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1756_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1757
#define MACROLOP_PRIVATE_EVAL_REC_1756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1757(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1757_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1757_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1757_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1757_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1758
#define MACROLOP_PRIVATE_EVAL_REC_1757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1758(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1758_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1758_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1758_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1758_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1759
#define MACROLOP_PRIVATE_EVAL_REC_1758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1759(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1759_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1759_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1759_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1759_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1760
#define MACROLOP_PRIVATE_EVAL_REC_1759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1760(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1760_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1760_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1760_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1760_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1761
#define MACROLOP_PRIVATE_EVAL_REC_1760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1761(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1761_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1761_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1761_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1761_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1762
#define MACROLOP_PRIVATE_EVAL_REC_1761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1762(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1762_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1762_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1762_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1762_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1763
#define MACROLOP_PRIVATE_EVAL_REC_1762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1763(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1763_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1763_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1763_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1763_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1764
#define MACROLOP_PRIVATE_EVAL_REC_1763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1764(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1764_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1764_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1764_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1764_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1765
#define MACROLOP_PRIVATE_EVAL_REC_1764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1765(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1765_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1765_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1765_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1765_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1766
#define MACROLOP_PRIVATE_EVAL_REC_1765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1766(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1766_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1766_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1766_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1766_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1767
#define MACROLOP_PRIVATE_EVAL_REC_1766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1767(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1767_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1767_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1767_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1767_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1768
#define MACROLOP_PRIVATE_EVAL_REC_1767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1768(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1768_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1768_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1768_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1768_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1769
#define MACROLOP_PRIVATE_EVAL_REC_1768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1769(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1769_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1769_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1769_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1769_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1770
#define MACROLOP_PRIVATE_EVAL_REC_1769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1770(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1770_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1770_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1770_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1770_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1771
#define MACROLOP_PRIVATE_EVAL_REC_1770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1771(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1771_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1771_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1771_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1771_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1772
#define MACROLOP_PRIVATE_EVAL_REC_1771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1772(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1772_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1772_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1772_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1772_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1773
#define MACROLOP_PRIVATE_EVAL_REC_1772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1773(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1773_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1773_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1773_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1773_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1774
#define MACROLOP_PRIVATE_EVAL_REC_1773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1774(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1774_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1774_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1774_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1774_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1775
#define MACROLOP_PRIVATE_EVAL_REC_1774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1775(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1775_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1775_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1775_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1775_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1776
#define MACROLOP_PRIVATE_EVAL_REC_1775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1776(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1776_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1776_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1776_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1776_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1777
#define MACROLOP_PRIVATE_EVAL_REC_1776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1777(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1777_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1777_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1777_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1777_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1778
#define MACROLOP_PRIVATE_EVAL_REC_1777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1778(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1778_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1778_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1778_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1778_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1779
#define MACROLOP_PRIVATE_EVAL_REC_1778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1779(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1779_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1779_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1779_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1779_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1780
#define MACROLOP_PRIVATE_EVAL_REC_1779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1780(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1780_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1780_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1780_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1780_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1781
#define MACROLOP_PRIVATE_EVAL_REC_1780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1781(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1781_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1781_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1781_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1781_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1782
#define MACROLOP_PRIVATE_EVAL_REC_1781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1782(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1782_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1782_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1782_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1782_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1783
#define MACROLOP_PRIVATE_EVAL_REC_1782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1783(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1783_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1783_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1783_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1783_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1784
#define MACROLOP_PRIVATE_EVAL_REC_1783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1784(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1784_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1784_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1784_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1784_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1785
#define MACROLOP_PRIVATE_EVAL_REC_1784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1785(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1785_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1785_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1785_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1785_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1786
#define MACROLOP_PRIVATE_EVAL_REC_1785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1786(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1786_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1786_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1786_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1786_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1787
#define MACROLOP_PRIVATE_EVAL_REC_1786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1787(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1787_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1787_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1787_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1787_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1788
#define MACROLOP_PRIVATE_EVAL_REC_1787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1788(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1788_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1788_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1788_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1788_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1789
#define MACROLOP_PRIVATE_EVAL_REC_1788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1789(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1789_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1789_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1789_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1789_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1790
#define MACROLOP_PRIVATE_EVAL_REC_1789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1790(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1790_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1790_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1790_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1790_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1791
#define MACROLOP_PRIVATE_EVAL_REC_1790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1791(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1791_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1791_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1791_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1791_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1792
#define MACROLOP_PRIVATE_EVAL_REC_1791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1792(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1792_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1792_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1792_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1792_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1793
#define MACROLOP_PRIVATE_EVAL_REC_1792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1793(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1793_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1793_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1793_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1793_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1794
#define MACROLOP_PRIVATE_EVAL_REC_1793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1794(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1794_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1794_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1794_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1794_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1795
#define MACROLOP_PRIVATE_EVAL_REC_1794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1795(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1795_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1795_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1795_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1795_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1796
#define MACROLOP_PRIVATE_EVAL_REC_1795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1796(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1796_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1796_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1796_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1796_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1797
#define MACROLOP_PRIVATE_EVAL_REC_1796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1797(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1797_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1797_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1797_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1797_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1798
#define MACROLOP_PRIVATE_EVAL_REC_1797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1798(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1798_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1798_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1798_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1798_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1799
#define MACROLOP_PRIVATE_EVAL_REC_1798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1799(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1799_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1799_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1799_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1799_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1800
#define MACROLOP_PRIVATE_EVAL_REC_1799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1800(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1800_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1800_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1800_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1800_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1801
#define MACROLOP_PRIVATE_EVAL_REC_1800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1801(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1801_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1801_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1801_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1801_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1802
#define MACROLOP_PRIVATE_EVAL_REC_1801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1802(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1802_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1802_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1802_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1802_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1803
#define MACROLOP_PRIVATE_EVAL_REC_1802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1803(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1803_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1803_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1803_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1803_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1804
#define MACROLOP_PRIVATE_EVAL_REC_1803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1804(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1804_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1804_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1804_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1804_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1805
#define MACROLOP_PRIVATE_EVAL_REC_1804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1805(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1805_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1805_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1805_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1805_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1806
#define MACROLOP_PRIVATE_EVAL_REC_1805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1806(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1806_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1806_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1806_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1806_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1807
#define MACROLOP_PRIVATE_EVAL_REC_1806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1807(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1807_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1807_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1807_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1807_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1808
#define MACROLOP_PRIVATE_EVAL_REC_1807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1808(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1808_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1808_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1808_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1808_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1809
#define MACROLOP_PRIVATE_EVAL_REC_1808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1809(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1809_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1809_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1809_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1809_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1810
#define MACROLOP_PRIVATE_EVAL_REC_1809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1810(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1810_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1810_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1810_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1810_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1811
#define MACROLOP_PRIVATE_EVAL_REC_1810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1811(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1811_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1811_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1811_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1811_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1812
#define MACROLOP_PRIVATE_EVAL_REC_1811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1812(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1812_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1812_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1812_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1812_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1813
#define MACROLOP_PRIVATE_EVAL_REC_1812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1813(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1813_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1813_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1813_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1813_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1814
#define MACROLOP_PRIVATE_EVAL_REC_1813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1814(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1814_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1814_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1814_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1814_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1815
#define MACROLOP_PRIVATE_EVAL_REC_1814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1815(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1815_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1815_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1815_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1815_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1816
#define MACROLOP_PRIVATE_EVAL_REC_1815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1816(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1816_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1816_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1816_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1816_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1817
#define MACROLOP_PRIVATE_EVAL_REC_1816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1817(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1817_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1817_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1817_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1817_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1818
#define MACROLOP_PRIVATE_EVAL_REC_1817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1818(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1818_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1818_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1818_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1818_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1819
#define MACROLOP_PRIVATE_EVAL_REC_1818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1819(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1819_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1819_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1819_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1819_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1820
#define MACROLOP_PRIVATE_EVAL_REC_1819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1820(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1820_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1820_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1820_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1820_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1821
#define MACROLOP_PRIVATE_EVAL_REC_1820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1821(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1821_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1821_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1821_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1821_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1822
#define MACROLOP_PRIVATE_EVAL_REC_1821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1822(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1822_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1822_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1822_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1822_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1823
#define MACROLOP_PRIVATE_EVAL_REC_1822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1823(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1823_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1823_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1823_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1823_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1824
#define MACROLOP_PRIVATE_EVAL_REC_1823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1824(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1824_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1824_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1824_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1824_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1825
#define MACROLOP_PRIVATE_EVAL_REC_1824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1825(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1825_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1825_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1825_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1825_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1826
#define MACROLOP_PRIVATE_EVAL_REC_1825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1826(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1826_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1826_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1826_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1826_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1827
#define MACROLOP_PRIVATE_EVAL_REC_1826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1827(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1827_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1827_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1827_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1827_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1828
#define MACROLOP_PRIVATE_EVAL_REC_1827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1828(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1828_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1828_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1828_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1828_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1829
#define MACROLOP_PRIVATE_EVAL_REC_1828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1829(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1829_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1829_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1829_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1829_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1830
#define MACROLOP_PRIVATE_EVAL_REC_1829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1830(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1830_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1830_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1830_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1830_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1831
#define MACROLOP_PRIVATE_EVAL_REC_1830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1831(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1831_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1831_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1831_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1831_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1832
#define MACROLOP_PRIVATE_EVAL_REC_1831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1832(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1832_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1832_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1832_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1832_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1833
#define MACROLOP_PRIVATE_EVAL_REC_1832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1833(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1833_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1833_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1833_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1833_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1834
#define MACROLOP_PRIVATE_EVAL_REC_1833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1834(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1834_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1834_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1834_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1834_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1835
#define MACROLOP_PRIVATE_EVAL_REC_1834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1835(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1835_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1835_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1835_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1835_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1836
#define MACROLOP_PRIVATE_EVAL_REC_1835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1836(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1836_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1836_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1836_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1836_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1837
#define MACROLOP_PRIVATE_EVAL_REC_1836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1837(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1837_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1837_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1837_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1837_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1838
#define MACROLOP_PRIVATE_EVAL_REC_1837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1838(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1838_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1838_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1838_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1838_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1839
#define MACROLOP_PRIVATE_EVAL_REC_1838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1839(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1839_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1839_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1839_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1839_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1840
#define MACROLOP_PRIVATE_EVAL_REC_1839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1840(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1840_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1840_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1840_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1840_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1841
#define MACROLOP_PRIVATE_EVAL_REC_1840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1841(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1841_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1841_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1841_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1841_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1842
#define MACROLOP_PRIVATE_EVAL_REC_1841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1842(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1842_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1842_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1842_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1842_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1843
#define MACROLOP_PRIVATE_EVAL_REC_1842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1843(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1843_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1843_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1843_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1843_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1844
#define MACROLOP_PRIVATE_EVAL_REC_1843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1844(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1844_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1844_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1844_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1844_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1845
#define MACROLOP_PRIVATE_EVAL_REC_1844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1845(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1845_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1845_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1845_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1845_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1846
#define MACROLOP_PRIVATE_EVAL_REC_1845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1846(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1846_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1846_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1846_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1846_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1847
#define MACROLOP_PRIVATE_EVAL_REC_1846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1847(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1847_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1847_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1847_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1847_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1848
#define MACROLOP_PRIVATE_EVAL_REC_1847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1848(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1848_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1848_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1848_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1848_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1849
#define MACROLOP_PRIVATE_EVAL_REC_1848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1849(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1849_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1849_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1849_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1849_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1850
#define MACROLOP_PRIVATE_EVAL_REC_1849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1850(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1850_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1850_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1850_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1850_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1851
#define MACROLOP_PRIVATE_EVAL_REC_1850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1851(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1851_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1851_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1851_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1851_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1852
#define MACROLOP_PRIVATE_EVAL_REC_1851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1852(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1852_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1852_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1852_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1852_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1853
#define MACROLOP_PRIVATE_EVAL_REC_1852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1853(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1853_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1853_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1853_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1853_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1854
#define MACROLOP_PRIVATE_EVAL_REC_1853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1854(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1854_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1854_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1854_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1854_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1855
#define MACROLOP_PRIVATE_EVAL_REC_1854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1855(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1855_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1855_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1855_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1855_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1856
#define MACROLOP_PRIVATE_EVAL_REC_1855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1856(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1856_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1856_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1856_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1856_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1857
#define MACROLOP_PRIVATE_EVAL_REC_1856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1857(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1857_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1857_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1857_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1857_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1858
#define MACROLOP_PRIVATE_EVAL_REC_1857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1858(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1858_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1858_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1858_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1858_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1859
#define MACROLOP_PRIVATE_EVAL_REC_1858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1859(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1859_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1859_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1859_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1859_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1860
#define MACROLOP_PRIVATE_EVAL_REC_1859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1860(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1860_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1860_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1860_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1860_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1861
#define MACROLOP_PRIVATE_EVAL_REC_1860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1861(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1861_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1861_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1861_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1861_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1862
#define MACROLOP_PRIVATE_EVAL_REC_1861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1862(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1862_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1862_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1862_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1862_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1863
#define MACROLOP_PRIVATE_EVAL_REC_1862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1863(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1863_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1863_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1863_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1863_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1864
#define MACROLOP_PRIVATE_EVAL_REC_1863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1864(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1864_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1864_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1864_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1864_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1865
#define MACROLOP_PRIVATE_EVAL_REC_1864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1865(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1865_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1865_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1865_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1865_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1866
#define MACROLOP_PRIVATE_EVAL_REC_1865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1866(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1866_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1866_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1866_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1866_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1867
#define MACROLOP_PRIVATE_EVAL_REC_1866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1867(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1867_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1867_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1867_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1867_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1868
#define MACROLOP_PRIVATE_EVAL_REC_1867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1868(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1868_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1868_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1868_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1868_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1869
#define MACROLOP_PRIVATE_EVAL_REC_1868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1869(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1869_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1869_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1869_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1869_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1870
#define MACROLOP_PRIVATE_EVAL_REC_1869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1870(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1870_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1870_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1870_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1870_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1871
#define MACROLOP_PRIVATE_EVAL_REC_1870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1871(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1871_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1871_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1871_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1871_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1872
#define MACROLOP_PRIVATE_EVAL_REC_1871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1872(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1872_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1872_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1872_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1872_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1873
#define MACROLOP_PRIVATE_EVAL_REC_1872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1873(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1873_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1873_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1873_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1873_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1874
#define MACROLOP_PRIVATE_EVAL_REC_1873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1874(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1874_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1874_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1874_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1874_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1875
#define MACROLOP_PRIVATE_EVAL_REC_1874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1875(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1875_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1875_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1875_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1875_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1876
#define MACROLOP_PRIVATE_EVAL_REC_1875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1876(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1876_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1876_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1876_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1876_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1877
#define MACROLOP_PRIVATE_EVAL_REC_1876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1877(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1877_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1877_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1877_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1877_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1878
#define MACROLOP_PRIVATE_EVAL_REC_1877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1878(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1878_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1878_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1878_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1878_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1879
#define MACROLOP_PRIVATE_EVAL_REC_1878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1879(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1879_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1879_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1879_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1879_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1880
#define MACROLOP_PRIVATE_EVAL_REC_1879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1880(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1880_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1880_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1880_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1880_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1881
#define MACROLOP_PRIVATE_EVAL_REC_1880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1881(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1881_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1881_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1881_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1881_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1882
#define MACROLOP_PRIVATE_EVAL_REC_1881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1882(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1882_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1882_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1882_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1882_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1883
#define MACROLOP_PRIVATE_EVAL_REC_1882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1883(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1883_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1883_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1883_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1883_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1884
#define MACROLOP_PRIVATE_EVAL_REC_1883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1884(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1884_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1884_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1884_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1884_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1885
#define MACROLOP_PRIVATE_EVAL_REC_1884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1885(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1885_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1885_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1885_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1885_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1886
#define MACROLOP_PRIVATE_EVAL_REC_1885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1886(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1886_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1886_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1886_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1886_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1887
#define MACROLOP_PRIVATE_EVAL_REC_1886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1887(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1887_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1887_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1887_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1887_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1888
#define MACROLOP_PRIVATE_EVAL_REC_1887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1888(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1888_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1888_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1888_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1888_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1889
#define MACROLOP_PRIVATE_EVAL_REC_1888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1889(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1889_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1889_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1889_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1889_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1890
#define MACROLOP_PRIVATE_EVAL_REC_1889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1890(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1890_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1890_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1890_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1890_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1891
#define MACROLOP_PRIVATE_EVAL_REC_1890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1891(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1891_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1891_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1891_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1891_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1892
#define MACROLOP_PRIVATE_EVAL_REC_1891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1892(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1892_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1892_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1892_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1892_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1893
#define MACROLOP_PRIVATE_EVAL_REC_1892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1893(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1893_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1893_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1893_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1893_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1894
#define MACROLOP_PRIVATE_EVAL_REC_1893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1894(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1894_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1894_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1894_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1894_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1895
#define MACROLOP_PRIVATE_EVAL_REC_1894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1895(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1895_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1895_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1895_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1895_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1896
#define MACROLOP_PRIVATE_EVAL_REC_1895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1896(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1896_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1896_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1896_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1896_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1897
#define MACROLOP_PRIVATE_EVAL_REC_1896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1897(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1897_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1897_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1897_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1897_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1898
#define MACROLOP_PRIVATE_EVAL_REC_1897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1898(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1898_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1898_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1898_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1898_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1899
#define MACROLOP_PRIVATE_EVAL_REC_1898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1899(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1899_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1899_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1899_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1899_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1900
#define MACROLOP_PRIVATE_EVAL_REC_1899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1900(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1900_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1900_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1900_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1900_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1901
#define MACROLOP_PRIVATE_EVAL_REC_1900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1901(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1901_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1901_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1901_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1901_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1902
#define MACROLOP_PRIVATE_EVAL_REC_1901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1902(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1902_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1902_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1902_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1902_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1903
#define MACROLOP_PRIVATE_EVAL_REC_1902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1903(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1903_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1903_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1903_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1903_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1904
#define MACROLOP_PRIVATE_EVAL_REC_1903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1904(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1904_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1904_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1904_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1904_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1905
#define MACROLOP_PRIVATE_EVAL_REC_1904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1905(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1905_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1905_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1905_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1905_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1906
#define MACROLOP_PRIVATE_EVAL_REC_1905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1906(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1906_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1906_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1906_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1906_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1907
#define MACROLOP_PRIVATE_EVAL_REC_1906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1907(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1907_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1907_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1907_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1907_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1908
#define MACROLOP_PRIVATE_EVAL_REC_1907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1908(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1908_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1908_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1908_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1908_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1909
#define MACROLOP_PRIVATE_EVAL_REC_1908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1909(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1909_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1909_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1909_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1909_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1910
#define MACROLOP_PRIVATE_EVAL_REC_1909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1910(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1910_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1910_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1910_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1910_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1911
#define MACROLOP_PRIVATE_EVAL_REC_1910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1911(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1911_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1911_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1911_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1911_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1912
#define MACROLOP_PRIVATE_EVAL_REC_1911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1912(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1912_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1912_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1912_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1912_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1913
#define MACROLOP_PRIVATE_EVAL_REC_1912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1913(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1913_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1913_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1913_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1913_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1914
#define MACROLOP_PRIVATE_EVAL_REC_1913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1914(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1914_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1914_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1914_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1914_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1915
#define MACROLOP_PRIVATE_EVAL_REC_1914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1915(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1915_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1915_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1915_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1915_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1916
#define MACROLOP_PRIVATE_EVAL_REC_1915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1916(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1916_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1916_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1916_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1916_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1917
#define MACROLOP_PRIVATE_EVAL_REC_1916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1917(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1917_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1917_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1917_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1917_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1918
#define MACROLOP_PRIVATE_EVAL_REC_1917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1918(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1918_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1918_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1918_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1918_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1919
#define MACROLOP_PRIVATE_EVAL_REC_1918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1919(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1919_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1919_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1919_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1919_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1920
#define MACROLOP_PRIVATE_EVAL_REC_1919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1920(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1920_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1920_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1920_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1920_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1921
#define MACROLOP_PRIVATE_EVAL_REC_1920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1921(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1921_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1921_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1921_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1921_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1922
#define MACROLOP_PRIVATE_EVAL_REC_1921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1922(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1922_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1922_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1922_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1922_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1923
#define MACROLOP_PRIVATE_EVAL_REC_1922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1923(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1923_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1923_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1923_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1923_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1924
#define MACROLOP_PRIVATE_EVAL_REC_1923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1924(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1924_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1924_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1924_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1924_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1925
#define MACROLOP_PRIVATE_EVAL_REC_1924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1925(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1925_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1925_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1925_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1925_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1926
#define MACROLOP_PRIVATE_EVAL_REC_1925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1926(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1926_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1926_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1926_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1926_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1927
#define MACROLOP_PRIVATE_EVAL_REC_1926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1927(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1927_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1927_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1927_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1927_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1928
#define MACROLOP_PRIVATE_EVAL_REC_1927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1928(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1928_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1928_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1928_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1928_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1929
#define MACROLOP_PRIVATE_EVAL_REC_1928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1929(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1929_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1929_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1929_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1929_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1930
#define MACROLOP_PRIVATE_EVAL_REC_1929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1930(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1930_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1930_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1930_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1930_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1931
#define MACROLOP_PRIVATE_EVAL_REC_1930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1931(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1931_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1931_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1931_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1931_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1932
#define MACROLOP_PRIVATE_EVAL_REC_1931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1932(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1932_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1932_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1932_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1932_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1933
#define MACROLOP_PRIVATE_EVAL_REC_1932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1933(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1933_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1933_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1933_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1933_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1934
#define MACROLOP_PRIVATE_EVAL_REC_1933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1934(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1934_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1934_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1934_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1934_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1935
#define MACROLOP_PRIVATE_EVAL_REC_1934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1935(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1935_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1935_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1935_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1935_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1936
#define MACROLOP_PRIVATE_EVAL_REC_1935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1936(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1936_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1936_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1936_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1936_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1937
#define MACROLOP_PRIVATE_EVAL_REC_1936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1937(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1937_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1937_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1937_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1937_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1938
#define MACROLOP_PRIVATE_EVAL_REC_1937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1938(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1938_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1938_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1938_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1938_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1939
#define MACROLOP_PRIVATE_EVAL_REC_1938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1939(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1939_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1939_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1939_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1939_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1940
#define MACROLOP_PRIVATE_EVAL_REC_1939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1940(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1940_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1940_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1940_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1940_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1941
#define MACROLOP_PRIVATE_EVAL_REC_1940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1941(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1941_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1941_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1941_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1941_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1942
#define MACROLOP_PRIVATE_EVAL_REC_1941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1942(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1942_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1942_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1942_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1942_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1943
#define MACROLOP_PRIVATE_EVAL_REC_1942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1943(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1943_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1943_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1943_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1943_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1944
#define MACROLOP_PRIVATE_EVAL_REC_1943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1944(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1944_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1944_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1944_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1944_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1945
#define MACROLOP_PRIVATE_EVAL_REC_1944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1945(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1945_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1945_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1945_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1945_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1946
#define MACROLOP_PRIVATE_EVAL_REC_1945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1946(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1946_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1946_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1946_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1946_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1947
#define MACROLOP_PRIVATE_EVAL_REC_1946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1947(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1947_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1947_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1947_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1947_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1948
#define MACROLOP_PRIVATE_EVAL_REC_1947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1948(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1948_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1948_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1948_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1948_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1949
#define MACROLOP_PRIVATE_EVAL_REC_1948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1949(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1949_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1949_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1949_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1949_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1950
#define MACROLOP_PRIVATE_EVAL_REC_1949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1950(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1950_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1950_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1950_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1950_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1951
#define MACROLOP_PRIVATE_EVAL_REC_1950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1951(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1951_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1951_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1951_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1951_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1952
#define MACROLOP_PRIVATE_EVAL_REC_1951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1952(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1952_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1952_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1952_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1952_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1953
#define MACROLOP_PRIVATE_EVAL_REC_1952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1953(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1953_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1953_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1953_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1953_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1954
#define MACROLOP_PRIVATE_EVAL_REC_1953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1954(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1954_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1954_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1954_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1954_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1955
#define MACROLOP_PRIVATE_EVAL_REC_1954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1955(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1955_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1955_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1955_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1955_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1956
#define MACROLOP_PRIVATE_EVAL_REC_1955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1956(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1956_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1956_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1956_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1956_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1957
#define MACROLOP_PRIVATE_EVAL_REC_1956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1957(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1957_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1957_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1957_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1957_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1958
#define MACROLOP_PRIVATE_EVAL_REC_1957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1958(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1958_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1958_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1958_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1958_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1959
#define MACROLOP_PRIVATE_EVAL_REC_1958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1959(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1959_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1959_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1959_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1959_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1960
#define MACROLOP_PRIVATE_EVAL_REC_1959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1960(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1960_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1960_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1960_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1960_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1961
#define MACROLOP_PRIVATE_EVAL_REC_1960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1961(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1961_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1961_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1961_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1961_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1962
#define MACROLOP_PRIVATE_EVAL_REC_1961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1962(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1962_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1962_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1962_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1962_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1963
#define MACROLOP_PRIVATE_EVAL_REC_1962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1963(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1963_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1963_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1963_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1963_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1964
#define MACROLOP_PRIVATE_EVAL_REC_1963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1964(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1964_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1964_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1964_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1964_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1965
#define MACROLOP_PRIVATE_EVAL_REC_1964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1965(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1965_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1965_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1965_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1965_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1966
#define MACROLOP_PRIVATE_EVAL_REC_1965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1966(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1966_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1966_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1966_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1966_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1967
#define MACROLOP_PRIVATE_EVAL_REC_1966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1967(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1967_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1967_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1967_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1967_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1968
#define MACROLOP_PRIVATE_EVAL_REC_1967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1968(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1968_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1968_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1968_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1968_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1969
#define MACROLOP_PRIVATE_EVAL_REC_1968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1969(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1969_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1969_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1969_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1969_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1970
#define MACROLOP_PRIVATE_EVAL_REC_1969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1970(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1970_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1970_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1970_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1970_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1971
#define MACROLOP_PRIVATE_EVAL_REC_1970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1971(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1971_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1971_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1971_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1971_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1972
#define MACROLOP_PRIVATE_EVAL_REC_1971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1972(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1972_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1972_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1972_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1972_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1973
#define MACROLOP_PRIVATE_EVAL_REC_1972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1973(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1973_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1973_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1973_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1973_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1974
#define MACROLOP_PRIVATE_EVAL_REC_1973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1974(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1974_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1974_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1974_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1974_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1975
#define MACROLOP_PRIVATE_EVAL_REC_1974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1975(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1975_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1975_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1975_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1975_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1976
#define MACROLOP_PRIVATE_EVAL_REC_1975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1976(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1976_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1976_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1976_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1976_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1977
#define MACROLOP_PRIVATE_EVAL_REC_1976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1977(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1977_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1977_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1977_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1977_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1978
#define MACROLOP_PRIVATE_EVAL_REC_1977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1978(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1978_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1978_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1978_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1978_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1979
#define MACROLOP_PRIVATE_EVAL_REC_1978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1979(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1979_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1979_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1979_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1979_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1980
#define MACROLOP_PRIVATE_EVAL_REC_1979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1980(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1980_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1980_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1980_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1980_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1981
#define MACROLOP_PRIVATE_EVAL_REC_1980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1981(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1981_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1981_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1981_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1981_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1982
#define MACROLOP_PRIVATE_EVAL_REC_1981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1982(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1982_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1982_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1982_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1982_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1983
#define MACROLOP_PRIVATE_EVAL_REC_1982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1983(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1983_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1983_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1983_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1983_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1984
#define MACROLOP_PRIVATE_EVAL_REC_1983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1984(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1984_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1984_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1984_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1984_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1985
#define MACROLOP_PRIVATE_EVAL_REC_1984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1985(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1985_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1985_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1985_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1985_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1986
#define MACROLOP_PRIVATE_EVAL_REC_1985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1986(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1986_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1986_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1986_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1986_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1987
#define MACROLOP_PRIVATE_EVAL_REC_1986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1987(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1987_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1987_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1987_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1987_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1988
#define MACROLOP_PRIVATE_EVAL_REC_1987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1988(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1988_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1988_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1988_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1988_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1989
#define MACROLOP_PRIVATE_EVAL_REC_1988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1989(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1989_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1989_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1989_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1989_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1990
#define MACROLOP_PRIVATE_EVAL_REC_1989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1990(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1990_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1990_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1990_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1990_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1991
#define MACROLOP_PRIVATE_EVAL_REC_1990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1991(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1991_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1991_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1991_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1991_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1992
#define MACROLOP_PRIVATE_EVAL_REC_1991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1992(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1992_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1992_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1992_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1992_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1993
#define MACROLOP_PRIVATE_EVAL_REC_1992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1993(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1993_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1993_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1993_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1993_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1994
#define MACROLOP_PRIVATE_EVAL_REC_1993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1994(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1994_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1994_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1994_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1994_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1995
#define MACROLOP_PRIVATE_EVAL_REC_1994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1995(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1995_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1995_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1995_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1995_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1996
#define MACROLOP_PRIVATE_EVAL_REC_1995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1996(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1996_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1996_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1996_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1996_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1997
#define MACROLOP_PRIVATE_EVAL_REC_1996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1997(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1997_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1997_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1997_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1997_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1998
#define MACROLOP_PRIVATE_EVAL_REC_1997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1998(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1998_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1998_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1998_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1998_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_1999
#define MACROLOP_PRIVATE_EVAL_REC_1998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_1999(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_1999_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_1999_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_1999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_1999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_1999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_1999_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_1999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_1999_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_1999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_1999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2000
#define MACROLOP_PRIVATE_EVAL_REC_1999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2000(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2000_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2000_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2000_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2000_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2001
#define MACROLOP_PRIVATE_EVAL_REC_2000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2001(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2001_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2001_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2001_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2001_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2002
#define MACROLOP_PRIVATE_EVAL_REC_2001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2002(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2002_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2002_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2002_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2002_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2003
#define MACROLOP_PRIVATE_EVAL_REC_2002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2003(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2003_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2003_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2003_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2003_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2004
#define MACROLOP_PRIVATE_EVAL_REC_2003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2004(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2004_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2004_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2004_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2004_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2005
#define MACROLOP_PRIVATE_EVAL_REC_2004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2005(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2005_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2005_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2005_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2005_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2006
#define MACROLOP_PRIVATE_EVAL_REC_2005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2006(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2006_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2006_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2006_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2006_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2007
#define MACROLOP_PRIVATE_EVAL_REC_2006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2007(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2007_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2007_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2007_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2007_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2008
#define MACROLOP_PRIVATE_EVAL_REC_2007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2008(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2008_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2008_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2008_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2008_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2009
#define MACROLOP_PRIVATE_EVAL_REC_2008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2009(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2009_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2009_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2009_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2009_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2010
#define MACROLOP_PRIVATE_EVAL_REC_2009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2010(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2010_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2010_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2010_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2010_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2011
#define MACROLOP_PRIVATE_EVAL_REC_2010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2011(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2011_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2011_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2011_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2011_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2012
#define MACROLOP_PRIVATE_EVAL_REC_2011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2012(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2012_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2012_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2012_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2012_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2013
#define MACROLOP_PRIVATE_EVAL_REC_2012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2013(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2013_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2013_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2013_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2013_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2014
#define MACROLOP_PRIVATE_EVAL_REC_2013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2014(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2014_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2014_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2014_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2014_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2015
#define MACROLOP_PRIVATE_EVAL_REC_2014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2015(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2015_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2015_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2015_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2015_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2016
#define MACROLOP_PRIVATE_EVAL_REC_2015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2016(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2016_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2016_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2016_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2016_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2017
#define MACROLOP_PRIVATE_EVAL_REC_2016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2017(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2017_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2017_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2017_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2017_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2018
#define MACROLOP_PRIVATE_EVAL_REC_2017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2018(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2018_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2018_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2018_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2018_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2019
#define MACROLOP_PRIVATE_EVAL_REC_2018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2019(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2019_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2019_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2019_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2019_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2020
#define MACROLOP_PRIVATE_EVAL_REC_2019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2020(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2020_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2020_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2020_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2020_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2021
#define MACROLOP_PRIVATE_EVAL_REC_2020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2021(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2021_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2021_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2021_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2021_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2022
#define MACROLOP_PRIVATE_EVAL_REC_2021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2022(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2022_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2022_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2022_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2022_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2023
#define MACROLOP_PRIVATE_EVAL_REC_2022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2023(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2023_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2023_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2023_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2023_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2024
#define MACROLOP_PRIVATE_EVAL_REC_2023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2024(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2024_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2024_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2024_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2024_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2025
#define MACROLOP_PRIVATE_EVAL_REC_2024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2025(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2025_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2025_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2025_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2025_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2026
#define MACROLOP_PRIVATE_EVAL_REC_2025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2026(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2026_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2026_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2026_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2026_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2027
#define MACROLOP_PRIVATE_EVAL_REC_2026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2027(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2027_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2027_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2027_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2027_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2028
#define MACROLOP_PRIVATE_EVAL_REC_2027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2028(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2028_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2028_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2028_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2028_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2029
#define MACROLOP_PRIVATE_EVAL_REC_2028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2029(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2029_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2029_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2029_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2029_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2030
#define MACROLOP_PRIVATE_EVAL_REC_2029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2030(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2030_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2030_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2030_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2030_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2031
#define MACROLOP_PRIVATE_EVAL_REC_2030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2031(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2031_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2031_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2031_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2031_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2032
#define MACROLOP_PRIVATE_EVAL_REC_2031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2032(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2032_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2032_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2032_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2032_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2033
#define MACROLOP_PRIVATE_EVAL_REC_2032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2033(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2033_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2033_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2033_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2033_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2034
#define MACROLOP_PRIVATE_EVAL_REC_2033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2034(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2034_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2034_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2034_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2034_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2035
#define MACROLOP_PRIVATE_EVAL_REC_2034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2035(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2035_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2035_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2035_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2035_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2036
#define MACROLOP_PRIVATE_EVAL_REC_2035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2036(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2036_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2036_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2036_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2036_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2037
#define MACROLOP_PRIVATE_EVAL_REC_2036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2037(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2037_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2037_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2037_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2037_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2038
#define MACROLOP_PRIVATE_EVAL_REC_2037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2038(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2038_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2038_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2038_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2038_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2039
#define MACROLOP_PRIVATE_EVAL_REC_2038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2039(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2039_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2039_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2039_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2039_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2040
#define MACROLOP_PRIVATE_EVAL_REC_2039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2040(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2040_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2040_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2040_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2040_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2041
#define MACROLOP_PRIVATE_EVAL_REC_2040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2041(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2041_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2041_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2041_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2041_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2042
#define MACROLOP_PRIVATE_EVAL_REC_2041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2042(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2042_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2042_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2042_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2042_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2043
#define MACROLOP_PRIVATE_EVAL_REC_2042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2043(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2043_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2043_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2043_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2043_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2044
#define MACROLOP_PRIVATE_EVAL_REC_2043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2044(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2044_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2044_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2044_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2044_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2045
#define MACROLOP_PRIVATE_EVAL_REC_2044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2045(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2045_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2045_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2045_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2045_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2046
#define MACROLOP_PRIVATE_EVAL_REC_2045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2046(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2046_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2046_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2046_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2046_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2047
#define MACROLOP_PRIVATE_EVAL_REC_2046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2047(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2047_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2047_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2047_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2047_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2048
#define MACROLOP_PRIVATE_EVAL_REC_2047_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_1024_TO_2047_H
