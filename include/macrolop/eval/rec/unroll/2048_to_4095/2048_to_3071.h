#ifndef MACROLOP_EVAL_REC_UNROLL_2048_TO_3071_H
#define MACROLOP_EVAL_REC_UNROLL_2048_TO_3071_H

#define MACROLOP_PRIVATE_EVAL_REC_2048(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2048_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2048_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2048_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2048_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2049
#define MACROLOP_PRIVATE_EVAL_REC_2048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2049(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2049_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2049_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2049_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2049_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2050
#define MACROLOP_PRIVATE_EVAL_REC_2049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2050(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2050_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2050_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2050_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2050_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2051
#define MACROLOP_PRIVATE_EVAL_REC_2050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2051(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2051_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2051_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2051_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2051_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2052
#define MACROLOP_PRIVATE_EVAL_REC_2051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2052(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2052_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2052_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2052_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2052_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2053
#define MACROLOP_PRIVATE_EVAL_REC_2052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2053(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2053_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2053_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2053_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2053_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2054
#define MACROLOP_PRIVATE_EVAL_REC_2053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2054(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2054_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2054_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2054_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2054_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2055
#define MACROLOP_PRIVATE_EVAL_REC_2054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2055(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2055_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2055_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2055_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2055_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2056
#define MACROLOP_PRIVATE_EVAL_REC_2055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2056(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2056_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2056_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2056_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2056_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2057
#define MACROLOP_PRIVATE_EVAL_REC_2056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2057(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2057_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2057_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2057_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2057_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2058
#define MACROLOP_PRIVATE_EVAL_REC_2057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2058(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2058_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2058_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2058_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2058_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2059
#define MACROLOP_PRIVATE_EVAL_REC_2058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2059(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2059_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2059_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2059_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2059_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2060
#define MACROLOP_PRIVATE_EVAL_REC_2059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2060(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2060_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2060_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2060_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2060_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2061
#define MACROLOP_PRIVATE_EVAL_REC_2060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2061(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2061_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2061_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2061_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2061_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2062
#define MACROLOP_PRIVATE_EVAL_REC_2061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2062(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2062_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2062_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2062_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2062_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2063
#define MACROLOP_PRIVATE_EVAL_REC_2062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2063(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2063_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2063_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2063_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2063_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2064
#define MACROLOP_PRIVATE_EVAL_REC_2063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2064(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2064_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2064_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2064_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2064_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2065
#define MACROLOP_PRIVATE_EVAL_REC_2064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2065(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2065_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2065_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2065_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2065_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2066
#define MACROLOP_PRIVATE_EVAL_REC_2065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2066(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2066_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2066_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2066_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2066_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2067
#define MACROLOP_PRIVATE_EVAL_REC_2066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2067(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2067_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2067_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2067_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2067_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2068
#define MACROLOP_PRIVATE_EVAL_REC_2067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2068(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2068_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2068_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2068_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2068_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2069
#define MACROLOP_PRIVATE_EVAL_REC_2068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2069(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2069_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2069_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2069_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2069_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2070
#define MACROLOP_PRIVATE_EVAL_REC_2069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2070(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2070_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2070_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2070_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2070_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2071
#define MACROLOP_PRIVATE_EVAL_REC_2070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2071(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2071_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2071_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2071_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2071_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2072
#define MACROLOP_PRIVATE_EVAL_REC_2071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2072(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2072_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2072_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2072_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2072_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2073
#define MACROLOP_PRIVATE_EVAL_REC_2072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2073(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2073_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2073_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2073_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2073_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2074
#define MACROLOP_PRIVATE_EVAL_REC_2073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2074(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2074_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2074_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2074_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2074_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2075
#define MACROLOP_PRIVATE_EVAL_REC_2074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2075(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2075_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2075_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2075_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2075_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2076
#define MACROLOP_PRIVATE_EVAL_REC_2075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2076(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2076_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2076_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2076_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2076_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2077
#define MACROLOP_PRIVATE_EVAL_REC_2076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2077(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2077_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2077_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2077_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2077_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2078
#define MACROLOP_PRIVATE_EVAL_REC_2077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2078(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2078_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2078_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2078_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2078_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2079
#define MACROLOP_PRIVATE_EVAL_REC_2078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2079(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2079_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2079_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2079_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2079_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2080
#define MACROLOP_PRIVATE_EVAL_REC_2079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2080(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2080_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2080_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2080_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2080_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2081
#define MACROLOP_PRIVATE_EVAL_REC_2080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2081(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2081_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2081_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2081_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2081_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2082
#define MACROLOP_PRIVATE_EVAL_REC_2081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2082(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2082_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2082_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2082_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2082_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2083
#define MACROLOP_PRIVATE_EVAL_REC_2082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2083(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2083_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2083_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2083_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2083_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2084
#define MACROLOP_PRIVATE_EVAL_REC_2083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2084(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2084_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2084_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2084_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2084_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2085
#define MACROLOP_PRIVATE_EVAL_REC_2084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2085(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2085_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2085_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2085_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2085_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2086
#define MACROLOP_PRIVATE_EVAL_REC_2085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2086(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2086_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2086_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2086_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2086_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2087
#define MACROLOP_PRIVATE_EVAL_REC_2086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2087(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2087_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2087_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2087_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2087_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2088
#define MACROLOP_PRIVATE_EVAL_REC_2087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2088(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2088_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2088_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2088_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2088_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2089
#define MACROLOP_PRIVATE_EVAL_REC_2088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2089(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2089_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2089_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2089_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2089_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2090
#define MACROLOP_PRIVATE_EVAL_REC_2089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2090(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2090_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2090_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2090_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2090_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2091
#define MACROLOP_PRIVATE_EVAL_REC_2090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2091(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2091_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2091_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2091_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2091_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2092
#define MACROLOP_PRIVATE_EVAL_REC_2091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2092(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2092_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2092_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2092_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2092_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2093
#define MACROLOP_PRIVATE_EVAL_REC_2092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2093(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2093_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2093_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2093_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2093_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2094
#define MACROLOP_PRIVATE_EVAL_REC_2093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2094(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2094_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2094_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2094_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2094_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2095
#define MACROLOP_PRIVATE_EVAL_REC_2094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2095(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2095_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2095_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2095_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2095_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2096
#define MACROLOP_PRIVATE_EVAL_REC_2095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2096(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2096_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2096_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2096_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2096_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2097
#define MACROLOP_PRIVATE_EVAL_REC_2096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2097(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2097_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2097_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2097_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2097_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2098
#define MACROLOP_PRIVATE_EVAL_REC_2097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2098(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2098_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2098_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2098_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2098_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2099
#define MACROLOP_PRIVATE_EVAL_REC_2098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2099(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2099_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2099_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2099_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2099_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2100
#define MACROLOP_PRIVATE_EVAL_REC_2099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2100(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2100_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2100_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2100_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2100_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2101
#define MACROLOP_PRIVATE_EVAL_REC_2100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2101(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2101_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2101_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2101_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2101_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2102
#define MACROLOP_PRIVATE_EVAL_REC_2101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2102(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2102_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2102_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2102_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2102_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2103
#define MACROLOP_PRIVATE_EVAL_REC_2102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2103(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2103_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2103_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2103_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2103_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2104
#define MACROLOP_PRIVATE_EVAL_REC_2103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2104(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2104_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2104_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2104_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2104_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2105
#define MACROLOP_PRIVATE_EVAL_REC_2104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2105(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2105_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2105_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2105_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2105_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2106
#define MACROLOP_PRIVATE_EVAL_REC_2105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2106(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2106_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2106_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2106_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2106_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2107
#define MACROLOP_PRIVATE_EVAL_REC_2106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2107(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2107_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2107_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2107_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2107_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2108
#define MACROLOP_PRIVATE_EVAL_REC_2107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2108(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2108_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2108_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2108_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2108_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2109
#define MACROLOP_PRIVATE_EVAL_REC_2108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2109(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2109_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2109_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2109_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2109_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2110
#define MACROLOP_PRIVATE_EVAL_REC_2109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2110(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2110_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2110_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2110_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2110_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2111
#define MACROLOP_PRIVATE_EVAL_REC_2110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2111(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2111_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2111_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2111_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2111_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2112
#define MACROLOP_PRIVATE_EVAL_REC_2111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2112(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2112_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2112_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2112_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2112_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2113
#define MACROLOP_PRIVATE_EVAL_REC_2112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2113(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2113_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2113_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2113_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2113_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2114
#define MACROLOP_PRIVATE_EVAL_REC_2113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2114(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2114_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2114_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2114_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2114_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2115
#define MACROLOP_PRIVATE_EVAL_REC_2114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2115(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2115_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2115_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2115_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2115_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2116
#define MACROLOP_PRIVATE_EVAL_REC_2115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2116(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2116_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2116_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2116_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2116_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2117
#define MACROLOP_PRIVATE_EVAL_REC_2116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2117(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2117_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2117_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2117_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2117_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2118
#define MACROLOP_PRIVATE_EVAL_REC_2117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2118(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2118_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2118_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2118_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2118_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2119
#define MACROLOP_PRIVATE_EVAL_REC_2118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2119(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2119_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2119_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2119_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2119_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2120
#define MACROLOP_PRIVATE_EVAL_REC_2119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2120(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2120_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2120_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2120_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2120_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2121
#define MACROLOP_PRIVATE_EVAL_REC_2120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2121(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2121_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2121_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2121_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2121_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2122
#define MACROLOP_PRIVATE_EVAL_REC_2121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2122(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2122_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2122_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2122_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2122_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2123
#define MACROLOP_PRIVATE_EVAL_REC_2122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2123(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2123_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2123_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2123_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2123_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2124
#define MACROLOP_PRIVATE_EVAL_REC_2123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2124(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2124_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2124_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2124_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2124_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2125
#define MACROLOP_PRIVATE_EVAL_REC_2124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2125(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2125_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2125_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2125_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2125_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2126
#define MACROLOP_PRIVATE_EVAL_REC_2125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2126(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2126_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2126_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2126_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2126_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2127
#define MACROLOP_PRIVATE_EVAL_REC_2126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2127(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2127_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2127_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2127_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2127_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2128
#define MACROLOP_PRIVATE_EVAL_REC_2127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2128(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2128_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2128_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2128_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2128_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2129
#define MACROLOP_PRIVATE_EVAL_REC_2128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2129(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2129_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2129_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2129_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2129_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2130
#define MACROLOP_PRIVATE_EVAL_REC_2129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2130(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2130_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2130_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2130_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2130_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2131
#define MACROLOP_PRIVATE_EVAL_REC_2130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2131(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2131_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2131_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2131_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2131_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2132
#define MACROLOP_PRIVATE_EVAL_REC_2131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2132(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2132_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2132_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2132_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2132_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2133
#define MACROLOP_PRIVATE_EVAL_REC_2132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2133(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2133_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2133_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2133_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2133_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2134
#define MACROLOP_PRIVATE_EVAL_REC_2133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2134(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2134_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2134_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2134_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2134_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2135
#define MACROLOP_PRIVATE_EVAL_REC_2134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2135(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2135_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2135_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2135_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2135_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2136
#define MACROLOP_PRIVATE_EVAL_REC_2135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2136(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2136_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2136_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2136_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2136_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2137
#define MACROLOP_PRIVATE_EVAL_REC_2136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2137(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2137_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2137_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2137_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2137_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2138
#define MACROLOP_PRIVATE_EVAL_REC_2137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2138(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2138_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2138_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2138_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2138_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2139
#define MACROLOP_PRIVATE_EVAL_REC_2138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2139(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2139_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2139_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2139_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2139_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2140
#define MACROLOP_PRIVATE_EVAL_REC_2139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2140(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2140_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2140_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2140_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2140_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2141
#define MACROLOP_PRIVATE_EVAL_REC_2140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2141(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2141_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2141_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2141_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2141_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2142
#define MACROLOP_PRIVATE_EVAL_REC_2141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2142(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2142_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2142_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2142_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2142_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2143
#define MACROLOP_PRIVATE_EVAL_REC_2142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2143(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2143_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2143_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2143_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2143_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2144
#define MACROLOP_PRIVATE_EVAL_REC_2143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2144(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2144_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2144_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2144_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2144_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2145
#define MACROLOP_PRIVATE_EVAL_REC_2144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2145(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2145_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2145_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2145_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2145_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2146
#define MACROLOP_PRIVATE_EVAL_REC_2145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2146(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2146_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2146_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2146_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2146_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2147
#define MACROLOP_PRIVATE_EVAL_REC_2146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2147(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2147_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2147_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2147_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2147_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2148
#define MACROLOP_PRIVATE_EVAL_REC_2147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2148(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2148_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2148_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2148_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2148_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2149
#define MACROLOP_PRIVATE_EVAL_REC_2148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2149(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2149_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2149_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2149_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2149_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2150
#define MACROLOP_PRIVATE_EVAL_REC_2149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2150(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2150_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2150_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2150_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2150_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2151
#define MACROLOP_PRIVATE_EVAL_REC_2150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2151(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2151_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2151_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2151_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2151_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2152
#define MACROLOP_PRIVATE_EVAL_REC_2151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2152(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2152_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2152_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2152_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2152_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2153
#define MACROLOP_PRIVATE_EVAL_REC_2152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2153(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2153_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2153_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2153_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2153_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2154
#define MACROLOP_PRIVATE_EVAL_REC_2153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2154(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2154_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2154_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2154_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2154_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2155
#define MACROLOP_PRIVATE_EVAL_REC_2154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2155(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2155_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2155_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2155_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2155_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2156
#define MACROLOP_PRIVATE_EVAL_REC_2155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2156(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2156_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2156_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2156_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2156_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2157
#define MACROLOP_PRIVATE_EVAL_REC_2156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2157(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2157_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2157_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2157_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2157_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2158
#define MACROLOP_PRIVATE_EVAL_REC_2157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2158(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2158_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2158_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2158_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2158_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2159
#define MACROLOP_PRIVATE_EVAL_REC_2158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2159(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2159_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2159_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2159_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2159_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2160
#define MACROLOP_PRIVATE_EVAL_REC_2159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2160(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2160_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2160_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2160_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2160_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2161
#define MACROLOP_PRIVATE_EVAL_REC_2160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2161(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2161_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2161_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2161_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2161_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2162
#define MACROLOP_PRIVATE_EVAL_REC_2161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2162(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2162_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2162_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2162_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2162_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2163
#define MACROLOP_PRIVATE_EVAL_REC_2162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2163(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2163_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2163_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2163_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2163_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2164
#define MACROLOP_PRIVATE_EVAL_REC_2163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2164(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2164_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2164_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2164_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2164_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2165
#define MACROLOP_PRIVATE_EVAL_REC_2164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2165(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2165_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2165_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2165_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2165_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2166
#define MACROLOP_PRIVATE_EVAL_REC_2165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2166(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2166_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2166_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2166_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2166_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2167
#define MACROLOP_PRIVATE_EVAL_REC_2166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2167(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2167_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2167_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2167_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2167_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2168
#define MACROLOP_PRIVATE_EVAL_REC_2167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2168(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2168_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2168_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2168_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2168_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2169
#define MACROLOP_PRIVATE_EVAL_REC_2168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2169(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2169_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2169_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2169_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2169_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2170
#define MACROLOP_PRIVATE_EVAL_REC_2169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2170(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2170_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2170_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2170_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2170_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2171
#define MACROLOP_PRIVATE_EVAL_REC_2170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2171(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2171_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2171_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2171_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2171_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2172
#define MACROLOP_PRIVATE_EVAL_REC_2171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2172(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2172_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2172_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2172_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2172_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2173
#define MACROLOP_PRIVATE_EVAL_REC_2172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2173(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2173_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2173_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2173_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2173_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2174
#define MACROLOP_PRIVATE_EVAL_REC_2173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2174(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2174_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2174_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2174_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2174_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2175
#define MACROLOP_PRIVATE_EVAL_REC_2174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2175(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2175_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2175_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2175_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2175_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2176
#define MACROLOP_PRIVATE_EVAL_REC_2175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2176(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2176_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2176_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2176_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2176_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2177
#define MACROLOP_PRIVATE_EVAL_REC_2176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2177(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2177_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2177_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2177_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2177_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2178
#define MACROLOP_PRIVATE_EVAL_REC_2177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2178(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2178_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2178_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2178_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2178_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2179
#define MACROLOP_PRIVATE_EVAL_REC_2178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2179(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2179_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2179_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2179_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2179_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2180
#define MACROLOP_PRIVATE_EVAL_REC_2179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2180(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2180_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2180_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2180_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2180_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2181
#define MACROLOP_PRIVATE_EVAL_REC_2180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2181(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2181_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2181_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2181_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2181_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2182
#define MACROLOP_PRIVATE_EVAL_REC_2181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2182(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2182_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2182_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2182_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2182_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2183
#define MACROLOP_PRIVATE_EVAL_REC_2182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2183(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2183_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2183_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2183_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2183_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2184
#define MACROLOP_PRIVATE_EVAL_REC_2183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2184(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2184_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2184_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2184_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2184_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2185
#define MACROLOP_PRIVATE_EVAL_REC_2184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2185(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2185_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2185_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2185_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2185_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2186
#define MACROLOP_PRIVATE_EVAL_REC_2185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2186(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2186_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2186_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2186_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2186_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2187
#define MACROLOP_PRIVATE_EVAL_REC_2186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2187(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2187_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2187_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2187_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2187_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2188
#define MACROLOP_PRIVATE_EVAL_REC_2187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2188(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2188_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2188_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2188_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2188_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2189
#define MACROLOP_PRIVATE_EVAL_REC_2188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2189(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2189_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2189_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2189_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2189_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2190
#define MACROLOP_PRIVATE_EVAL_REC_2189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2190(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2190_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2190_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2190_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2190_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2191
#define MACROLOP_PRIVATE_EVAL_REC_2190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2191(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2191_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2191_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2191_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2191_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2192
#define MACROLOP_PRIVATE_EVAL_REC_2191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2192(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2192_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2192_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2192_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2192_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2193
#define MACROLOP_PRIVATE_EVAL_REC_2192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2193(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2193_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2193_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2193_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2193_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2194
#define MACROLOP_PRIVATE_EVAL_REC_2193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2194(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2194_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2194_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2194_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2194_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2195
#define MACROLOP_PRIVATE_EVAL_REC_2194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2195(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2195_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2195_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2195_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2195_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2196
#define MACROLOP_PRIVATE_EVAL_REC_2195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2196(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2196_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2196_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2196_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2196_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2197
#define MACROLOP_PRIVATE_EVAL_REC_2196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2197(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2197_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2197_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2197_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2197_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2198
#define MACROLOP_PRIVATE_EVAL_REC_2197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2198(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2198_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2198_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2198_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2198_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2199
#define MACROLOP_PRIVATE_EVAL_REC_2198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2199(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2199_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2199_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2199_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2199_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2200
#define MACROLOP_PRIVATE_EVAL_REC_2199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2200(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2200_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2200_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2200_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2200_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2201
#define MACROLOP_PRIVATE_EVAL_REC_2200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2201(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2201_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2201_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2201_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2201_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2202
#define MACROLOP_PRIVATE_EVAL_REC_2201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2202(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2202_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2202_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2202_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2202_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2203
#define MACROLOP_PRIVATE_EVAL_REC_2202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2203(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2203_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2203_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2203_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2203_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2204
#define MACROLOP_PRIVATE_EVAL_REC_2203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2204(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2204_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2204_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2204_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2204_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2205
#define MACROLOP_PRIVATE_EVAL_REC_2204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2205(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2205_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2205_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2205_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2205_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2206
#define MACROLOP_PRIVATE_EVAL_REC_2205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2206(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2206_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2206_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2206_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2206_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2207
#define MACROLOP_PRIVATE_EVAL_REC_2206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2207(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2207_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2207_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2207_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2207_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2208
#define MACROLOP_PRIVATE_EVAL_REC_2207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2208(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2208_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2208_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2208_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2208_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2209
#define MACROLOP_PRIVATE_EVAL_REC_2208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2209(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2209_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2209_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2209_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2209_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2210
#define MACROLOP_PRIVATE_EVAL_REC_2209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2210(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2210_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2210_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2210_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2210_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2211
#define MACROLOP_PRIVATE_EVAL_REC_2210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2211(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2211_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2211_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2211_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2211_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2212
#define MACROLOP_PRIVATE_EVAL_REC_2211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2212(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2212_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2212_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2212_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2212_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2213
#define MACROLOP_PRIVATE_EVAL_REC_2212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2213(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2213_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2213_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2213_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2213_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2214
#define MACROLOP_PRIVATE_EVAL_REC_2213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2214(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2214_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2214_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2214_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2214_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2215
#define MACROLOP_PRIVATE_EVAL_REC_2214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2215(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2215_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2215_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2215_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2215_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2216
#define MACROLOP_PRIVATE_EVAL_REC_2215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2216(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2216_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2216_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2216_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2216_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2217
#define MACROLOP_PRIVATE_EVAL_REC_2216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2217(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2217_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2217_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2217_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2217_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2218
#define MACROLOP_PRIVATE_EVAL_REC_2217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2218(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2218_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2218_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2218_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2218_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2219
#define MACROLOP_PRIVATE_EVAL_REC_2218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2219(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2219_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2219_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2219_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2219_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2220
#define MACROLOP_PRIVATE_EVAL_REC_2219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2220(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2220_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2220_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2220_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2220_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2221
#define MACROLOP_PRIVATE_EVAL_REC_2220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2221(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2221_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2221_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2221_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2221_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2222
#define MACROLOP_PRIVATE_EVAL_REC_2221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2222(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2222_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2222_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2222_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2222_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2223
#define MACROLOP_PRIVATE_EVAL_REC_2222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2223(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2223_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2223_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2223_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2223_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2224
#define MACROLOP_PRIVATE_EVAL_REC_2223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2224(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2224_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2224_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2224_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2224_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2225
#define MACROLOP_PRIVATE_EVAL_REC_2224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2225(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2225_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2225_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2225_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2225_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2226
#define MACROLOP_PRIVATE_EVAL_REC_2225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2226(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2226_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2226_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2226_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2226_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2227
#define MACROLOP_PRIVATE_EVAL_REC_2226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2227(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2227_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2227_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2227_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2227_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2228
#define MACROLOP_PRIVATE_EVAL_REC_2227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2228(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2228_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2228_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2228_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2228_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2229
#define MACROLOP_PRIVATE_EVAL_REC_2228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2229(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2229_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2229_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2229_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2229_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2230
#define MACROLOP_PRIVATE_EVAL_REC_2229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2230(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2230_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2230_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2230_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2230_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2231
#define MACROLOP_PRIVATE_EVAL_REC_2230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2231(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2231_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2231_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2231_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2231_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2232
#define MACROLOP_PRIVATE_EVAL_REC_2231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2232(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2232_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2232_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2232_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2232_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2233
#define MACROLOP_PRIVATE_EVAL_REC_2232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2233(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2233_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2233_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2233_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2233_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2234
#define MACROLOP_PRIVATE_EVAL_REC_2233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2234(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2234_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2234_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2234_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2234_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2235
#define MACROLOP_PRIVATE_EVAL_REC_2234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2235(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2235_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2235_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2235_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2235_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2236
#define MACROLOP_PRIVATE_EVAL_REC_2235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2236(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2236_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2236_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2236_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2236_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2237
#define MACROLOP_PRIVATE_EVAL_REC_2236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2237(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2237_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2237_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2237_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2237_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2238
#define MACROLOP_PRIVATE_EVAL_REC_2237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2238(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2238_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2238_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2238_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2238_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2239
#define MACROLOP_PRIVATE_EVAL_REC_2238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2239(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2239_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2239_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2239_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2239_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2240
#define MACROLOP_PRIVATE_EVAL_REC_2239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2240(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2240_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2240_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2240_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2240_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2241
#define MACROLOP_PRIVATE_EVAL_REC_2240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2241(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2241_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2241_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2241_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2241_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2242
#define MACROLOP_PRIVATE_EVAL_REC_2241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2242(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2242_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2242_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2242_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2242_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2243
#define MACROLOP_PRIVATE_EVAL_REC_2242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2243(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2243_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2243_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2243_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2243_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2244
#define MACROLOP_PRIVATE_EVAL_REC_2243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2244(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2244_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2244_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2244_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2244_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2245
#define MACROLOP_PRIVATE_EVAL_REC_2244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2245(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2245_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2245_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2245_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2245_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2246
#define MACROLOP_PRIVATE_EVAL_REC_2245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2246(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2246_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2246_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2246_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2246_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2247
#define MACROLOP_PRIVATE_EVAL_REC_2246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2247(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2247_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2247_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2247_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2247_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2248
#define MACROLOP_PRIVATE_EVAL_REC_2247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2248(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2248_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2248_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2248_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2248_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2249
#define MACROLOP_PRIVATE_EVAL_REC_2248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2249(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2249_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2249_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2249_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2249_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2250
#define MACROLOP_PRIVATE_EVAL_REC_2249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2250(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2250_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2250_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2250_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2250_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2251
#define MACROLOP_PRIVATE_EVAL_REC_2250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2251(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2251_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2251_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2251_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2251_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2252
#define MACROLOP_PRIVATE_EVAL_REC_2251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2252(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2252_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2252_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2252_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2252_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2253
#define MACROLOP_PRIVATE_EVAL_REC_2252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2253(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2253_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2253_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2253_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2253_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2254
#define MACROLOP_PRIVATE_EVAL_REC_2253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2254(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2254_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2254_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2254_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2254_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2255
#define MACROLOP_PRIVATE_EVAL_REC_2254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2255(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2255_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2255_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2255_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2255_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2256
#define MACROLOP_PRIVATE_EVAL_REC_2255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2256(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2256_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2256_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2256_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2256_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2257
#define MACROLOP_PRIVATE_EVAL_REC_2256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2257(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2257_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2257_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2257_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2257_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2258
#define MACROLOP_PRIVATE_EVAL_REC_2257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2258(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2258_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2258_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2258_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2258_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2259
#define MACROLOP_PRIVATE_EVAL_REC_2258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2259(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2259_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2259_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2259_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2259_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2260
#define MACROLOP_PRIVATE_EVAL_REC_2259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2260(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2260_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2260_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2260_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2260_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2261
#define MACROLOP_PRIVATE_EVAL_REC_2260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2261(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2261_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2261_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2261_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2261_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2262
#define MACROLOP_PRIVATE_EVAL_REC_2261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2262(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2262_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2262_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2262_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2262_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2263
#define MACROLOP_PRIVATE_EVAL_REC_2262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2263(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2263_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2263_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2263_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2263_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2264
#define MACROLOP_PRIVATE_EVAL_REC_2263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2264(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2264_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2264_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2264_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2264_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2265
#define MACROLOP_PRIVATE_EVAL_REC_2264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2265(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2265_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2265_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2265_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2265_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2266
#define MACROLOP_PRIVATE_EVAL_REC_2265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2266(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2266_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2266_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2266_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2266_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2267
#define MACROLOP_PRIVATE_EVAL_REC_2266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2267(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2267_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2267_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2267_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2267_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2268
#define MACROLOP_PRIVATE_EVAL_REC_2267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2268(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2268_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2268_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2268_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2268_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2269
#define MACROLOP_PRIVATE_EVAL_REC_2268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2269(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2269_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2269_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2269_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2269_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2270
#define MACROLOP_PRIVATE_EVAL_REC_2269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2270(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2270_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2270_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2270_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2270_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2271
#define MACROLOP_PRIVATE_EVAL_REC_2270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2271(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2271_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2271_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2271_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2271_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2272
#define MACROLOP_PRIVATE_EVAL_REC_2271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2272(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2272_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2272_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2272_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2272_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2273
#define MACROLOP_PRIVATE_EVAL_REC_2272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2273(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2273_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2273_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2273_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2273_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2274
#define MACROLOP_PRIVATE_EVAL_REC_2273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2274(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2274_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2274_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2274_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2274_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2275
#define MACROLOP_PRIVATE_EVAL_REC_2274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2275(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2275_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2275_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2275_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2275_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2276
#define MACROLOP_PRIVATE_EVAL_REC_2275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2276(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2276_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2276_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2276_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2276_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2277
#define MACROLOP_PRIVATE_EVAL_REC_2276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2277(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2277_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2277_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2277_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2277_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2278
#define MACROLOP_PRIVATE_EVAL_REC_2277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2278(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2278_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2278_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2278_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2278_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2279
#define MACROLOP_PRIVATE_EVAL_REC_2278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2279(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2279_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2279_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2279_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2279_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2280
#define MACROLOP_PRIVATE_EVAL_REC_2279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2280(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2280_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2280_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2280_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2280_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2281
#define MACROLOP_PRIVATE_EVAL_REC_2280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2281(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2281_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2281_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2281_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2281_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2282
#define MACROLOP_PRIVATE_EVAL_REC_2281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2282(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2282_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2282_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2282_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2282_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2283
#define MACROLOP_PRIVATE_EVAL_REC_2282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2283(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2283_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2283_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2283_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2283_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2284
#define MACROLOP_PRIVATE_EVAL_REC_2283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2284(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2284_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2284_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2284_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2284_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2285
#define MACROLOP_PRIVATE_EVAL_REC_2284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2285(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2285_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2285_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2285_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2285_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2286
#define MACROLOP_PRIVATE_EVAL_REC_2285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2286(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2286_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2286_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2286_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2286_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2287
#define MACROLOP_PRIVATE_EVAL_REC_2286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2287(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2287_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2287_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2287_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2287_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2288
#define MACROLOP_PRIVATE_EVAL_REC_2287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2288(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2288_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2288_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2288_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2288_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2289
#define MACROLOP_PRIVATE_EVAL_REC_2288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2289(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2289_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2289_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2289_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2289_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2290
#define MACROLOP_PRIVATE_EVAL_REC_2289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2290(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2290_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2290_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2290_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2290_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2291
#define MACROLOP_PRIVATE_EVAL_REC_2290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2291(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2291_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2291_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2291_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2291_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2292
#define MACROLOP_PRIVATE_EVAL_REC_2291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2292(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2292_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2292_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2292_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2292_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2293
#define MACROLOP_PRIVATE_EVAL_REC_2292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2293(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2293_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2293_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2293_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2293_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2294
#define MACROLOP_PRIVATE_EVAL_REC_2293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2294(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2294_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2294_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2294_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2294_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2295
#define MACROLOP_PRIVATE_EVAL_REC_2294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2295(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2295_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2295_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2295_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2295_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2296
#define MACROLOP_PRIVATE_EVAL_REC_2295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2296(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2296_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2296_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2296_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2296_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2297
#define MACROLOP_PRIVATE_EVAL_REC_2296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2297(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2297_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2297_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2297_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2297_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2298
#define MACROLOP_PRIVATE_EVAL_REC_2297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2298(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2298_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2298_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2298_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2298_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2299
#define MACROLOP_PRIVATE_EVAL_REC_2298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2299(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2299_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2299_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2299_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2299_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2300
#define MACROLOP_PRIVATE_EVAL_REC_2299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2300(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2300_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2300_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2300_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2300_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2301
#define MACROLOP_PRIVATE_EVAL_REC_2300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2301(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2301_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2301_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2301_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2301_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2302
#define MACROLOP_PRIVATE_EVAL_REC_2301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2302(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2302_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2302_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2302_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2302_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2303
#define MACROLOP_PRIVATE_EVAL_REC_2302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2303(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2303_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2303_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2303_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2303_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2304
#define MACROLOP_PRIVATE_EVAL_REC_2303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2304(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2304_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2304_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2304_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2304_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2305
#define MACROLOP_PRIVATE_EVAL_REC_2304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2305(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2305_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2305_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2305_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2305_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2306
#define MACROLOP_PRIVATE_EVAL_REC_2305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2306(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2306_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2306_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2306_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2306_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2307
#define MACROLOP_PRIVATE_EVAL_REC_2306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2307(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2307_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2307_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2307_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2307_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2308
#define MACROLOP_PRIVATE_EVAL_REC_2307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2308(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2308_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2308_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2308_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2308_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2309
#define MACROLOP_PRIVATE_EVAL_REC_2308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2309(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2309_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2309_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2309_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2309_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2310
#define MACROLOP_PRIVATE_EVAL_REC_2309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2310(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2310_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2310_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2310_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2310_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2311
#define MACROLOP_PRIVATE_EVAL_REC_2310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2311(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2311_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2311_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2311_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2311_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2312
#define MACROLOP_PRIVATE_EVAL_REC_2311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2312(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2312_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2312_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2312_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2312_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2313
#define MACROLOP_PRIVATE_EVAL_REC_2312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2313(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2313_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2313_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2313_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2313_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2314
#define MACROLOP_PRIVATE_EVAL_REC_2313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2314(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2314_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2314_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2314_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2314_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2315
#define MACROLOP_PRIVATE_EVAL_REC_2314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2315(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2315_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2315_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2315_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2315_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2316
#define MACROLOP_PRIVATE_EVAL_REC_2315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2316(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2316_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2316_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2316_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2316_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2317
#define MACROLOP_PRIVATE_EVAL_REC_2316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2317(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2317_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2317_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2317_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2317_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2318
#define MACROLOP_PRIVATE_EVAL_REC_2317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2318(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2318_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2318_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2318_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2318_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2319
#define MACROLOP_PRIVATE_EVAL_REC_2318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2319(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2319_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2319_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2319_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2319_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2320
#define MACROLOP_PRIVATE_EVAL_REC_2319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2320(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2320_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2320_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2320_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2320_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2321
#define MACROLOP_PRIVATE_EVAL_REC_2320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2321(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2321_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2321_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2321_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2321_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2322
#define MACROLOP_PRIVATE_EVAL_REC_2321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2322(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2322_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2322_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2322_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2322_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2323
#define MACROLOP_PRIVATE_EVAL_REC_2322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2323(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2323_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2323_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2323_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2323_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2324
#define MACROLOP_PRIVATE_EVAL_REC_2323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2324(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2324_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2324_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2324_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2324_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2325
#define MACROLOP_PRIVATE_EVAL_REC_2324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2325(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2325_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2325_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2325_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2325_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2326
#define MACROLOP_PRIVATE_EVAL_REC_2325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2326(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2326_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2326_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2326_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2326_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2327
#define MACROLOP_PRIVATE_EVAL_REC_2326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2327(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2327_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2327_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2327_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2327_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2328
#define MACROLOP_PRIVATE_EVAL_REC_2327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2328(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2328_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2328_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2328_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2328_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2329
#define MACROLOP_PRIVATE_EVAL_REC_2328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2329(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2329_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2329_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2329_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2329_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2330
#define MACROLOP_PRIVATE_EVAL_REC_2329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2330(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2330_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2330_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2330_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2330_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2331
#define MACROLOP_PRIVATE_EVAL_REC_2330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2331(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2331_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2331_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2331_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2331_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2332
#define MACROLOP_PRIVATE_EVAL_REC_2331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2332(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2332_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2332_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2332_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2332_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2333
#define MACROLOP_PRIVATE_EVAL_REC_2332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2333(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2333_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2333_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2333_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2333_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2334
#define MACROLOP_PRIVATE_EVAL_REC_2333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2334(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2334_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2334_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2334_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2334_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2335
#define MACROLOP_PRIVATE_EVAL_REC_2334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2335(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2335_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2335_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2335_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2335_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2336
#define MACROLOP_PRIVATE_EVAL_REC_2335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2336(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2336_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2336_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2336_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2336_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2337
#define MACROLOP_PRIVATE_EVAL_REC_2336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2337(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2337_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2337_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2337_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2337_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2338
#define MACROLOP_PRIVATE_EVAL_REC_2337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2338(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2338_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2338_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2338_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2338_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2339
#define MACROLOP_PRIVATE_EVAL_REC_2338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2339(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2339_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2339_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2339_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2339_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2340
#define MACROLOP_PRIVATE_EVAL_REC_2339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2340(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2340_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2340_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2340_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2340_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2341
#define MACROLOP_PRIVATE_EVAL_REC_2340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2341(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2341_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2341_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2341_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2341_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2342
#define MACROLOP_PRIVATE_EVAL_REC_2341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2342(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2342_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2342_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2342_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2342_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2343
#define MACROLOP_PRIVATE_EVAL_REC_2342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2343(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2343_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2343_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2343_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2343_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2344
#define MACROLOP_PRIVATE_EVAL_REC_2343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2344(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2344_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2344_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2344_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2344_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2345
#define MACROLOP_PRIVATE_EVAL_REC_2344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2345(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2345_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2345_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2345_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2345_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2346
#define MACROLOP_PRIVATE_EVAL_REC_2345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2346(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2346_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2346_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2346_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2346_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2347
#define MACROLOP_PRIVATE_EVAL_REC_2346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2347(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2347_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2347_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2347_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2347_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2348
#define MACROLOP_PRIVATE_EVAL_REC_2347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2348(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2348_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2348_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2348_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2348_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2349
#define MACROLOP_PRIVATE_EVAL_REC_2348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2349(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2349_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2349_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2349_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2349_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2350
#define MACROLOP_PRIVATE_EVAL_REC_2349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2350(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2350_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2350_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2350_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2350_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2351
#define MACROLOP_PRIVATE_EVAL_REC_2350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2351(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2351_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2351_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2351_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2351_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2352
#define MACROLOP_PRIVATE_EVAL_REC_2351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2352(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2352_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2352_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2352_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2352_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2353
#define MACROLOP_PRIVATE_EVAL_REC_2352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2353(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2353_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2353_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2353_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2353_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2354
#define MACROLOP_PRIVATE_EVAL_REC_2353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2354(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2354_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2354_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2354_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2354_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2355
#define MACROLOP_PRIVATE_EVAL_REC_2354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2355(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2355_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2355_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2355_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2355_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2356
#define MACROLOP_PRIVATE_EVAL_REC_2355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2356(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2356_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2356_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2356_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2356_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2357
#define MACROLOP_PRIVATE_EVAL_REC_2356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2357(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2357_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2357_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2357_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2357_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2358
#define MACROLOP_PRIVATE_EVAL_REC_2357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2358(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2358_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2358_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2358_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2358_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2359
#define MACROLOP_PRIVATE_EVAL_REC_2358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2359(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2359_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2359_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2359_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2359_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2360
#define MACROLOP_PRIVATE_EVAL_REC_2359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2360(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2360_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2360_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2360_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2360_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2361
#define MACROLOP_PRIVATE_EVAL_REC_2360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2361(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2361_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2361_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2361_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2361_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2362
#define MACROLOP_PRIVATE_EVAL_REC_2361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2362(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2362_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2362_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2362_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2362_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2363
#define MACROLOP_PRIVATE_EVAL_REC_2362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2363(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2363_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2363_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2363_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2363_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2364
#define MACROLOP_PRIVATE_EVAL_REC_2363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2364(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2364_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2364_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2364_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2364_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2365
#define MACROLOP_PRIVATE_EVAL_REC_2364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2365(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2365_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2365_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2365_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2365_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2366
#define MACROLOP_PRIVATE_EVAL_REC_2365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2366(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2366_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2366_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2366_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2366_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2367
#define MACROLOP_PRIVATE_EVAL_REC_2366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2367(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2367_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2367_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2367_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2367_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2368
#define MACROLOP_PRIVATE_EVAL_REC_2367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2368(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2368_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2368_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2368_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2368_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2369
#define MACROLOP_PRIVATE_EVAL_REC_2368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2369(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2369_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2369_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2369_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2369_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2370
#define MACROLOP_PRIVATE_EVAL_REC_2369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2370(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2370_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2370_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2370_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2370_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2371
#define MACROLOP_PRIVATE_EVAL_REC_2370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2371(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2371_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2371_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2371_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2371_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2372
#define MACROLOP_PRIVATE_EVAL_REC_2371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2372(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2372_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2372_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2372_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2372_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2373
#define MACROLOP_PRIVATE_EVAL_REC_2372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2373(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2373_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2373_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2373_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2373_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2374
#define MACROLOP_PRIVATE_EVAL_REC_2373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2374(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2374_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2374_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2374_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2374_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2375
#define MACROLOP_PRIVATE_EVAL_REC_2374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2375(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2375_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2375_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2375_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2375_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2376
#define MACROLOP_PRIVATE_EVAL_REC_2375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2376(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2376_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2376_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2376_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2376_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2377
#define MACROLOP_PRIVATE_EVAL_REC_2376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2377(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2377_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2377_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2377_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2377_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2378
#define MACROLOP_PRIVATE_EVAL_REC_2377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2378(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2378_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2378_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2378_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2378_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2379
#define MACROLOP_PRIVATE_EVAL_REC_2378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2379(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2379_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2379_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2379_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2379_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2380
#define MACROLOP_PRIVATE_EVAL_REC_2379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2380(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2380_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2380_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2380_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2380_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2381
#define MACROLOP_PRIVATE_EVAL_REC_2380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2381(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2381_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2381_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2381_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2381_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2382
#define MACROLOP_PRIVATE_EVAL_REC_2381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2382(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2382_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2382_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2382_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2382_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2383
#define MACROLOP_PRIVATE_EVAL_REC_2382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2383(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2383_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2383_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2383_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2383_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2384
#define MACROLOP_PRIVATE_EVAL_REC_2383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2384(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2384_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2384_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2384_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2384_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2385
#define MACROLOP_PRIVATE_EVAL_REC_2384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2385(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2385_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2385_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2385_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2385_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2386
#define MACROLOP_PRIVATE_EVAL_REC_2385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2386(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2386_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2386_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2386_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2386_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2387
#define MACROLOP_PRIVATE_EVAL_REC_2386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2387(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2387_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2387_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2387_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2387_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2388
#define MACROLOP_PRIVATE_EVAL_REC_2387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2388(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2388_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2388_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2388_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2388_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2389
#define MACROLOP_PRIVATE_EVAL_REC_2388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2389(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2389_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2389_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2389_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2389_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2390
#define MACROLOP_PRIVATE_EVAL_REC_2389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2390(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2390_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2390_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2390_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2390_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2391
#define MACROLOP_PRIVATE_EVAL_REC_2390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2391(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2391_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2391_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2391_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2391_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2392
#define MACROLOP_PRIVATE_EVAL_REC_2391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2392(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2392_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2392_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2392_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2392_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2393
#define MACROLOP_PRIVATE_EVAL_REC_2392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2393(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2393_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2393_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2393_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2393_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2394
#define MACROLOP_PRIVATE_EVAL_REC_2393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2394(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2394_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2394_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2394_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2394_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2395
#define MACROLOP_PRIVATE_EVAL_REC_2394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2395(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2395_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2395_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2395_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2395_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2396
#define MACROLOP_PRIVATE_EVAL_REC_2395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2396(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2396_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2396_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2396_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2396_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2397
#define MACROLOP_PRIVATE_EVAL_REC_2396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2397(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2397_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2397_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2397_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2397_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2398
#define MACROLOP_PRIVATE_EVAL_REC_2397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2398(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2398_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2398_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2398_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2398_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2399
#define MACROLOP_PRIVATE_EVAL_REC_2398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2399(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2399_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2399_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2399_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2399_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2400
#define MACROLOP_PRIVATE_EVAL_REC_2399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2400(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2400_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2400_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2400_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2400_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2401
#define MACROLOP_PRIVATE_EVAL_REC_2400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2401(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2401_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2401_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2401_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2401_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2402
#define MACROLOP_PRIVATE_EVAL_REC_2401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2402(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2402_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2402_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2402_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2402_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2403
#define MACROLOP_PRIVATE_EVAL_REC_2402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2403(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2403_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2403_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2403_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2403_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2404
#define MACROLOP_PRIVATE_EVAL_REC_2403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2404(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2404_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2404_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2404_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2404_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2405
#define MACROLOP_PRIVATE_EVAL_REC_2404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2405(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2405_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2405_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2405_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2405_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2406
#define MACROLOP_PRIVATE_EVAL_REC_2405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2406(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2406_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2406_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2406_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2406_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2407
#define MACROLOP_PRIVATE_EVAL_REC_2406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2407(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2407_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2407_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2407_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2407_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2408
#define MACROLOP_PRIVATE_EVAL_REC_2407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2408(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2408_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2408_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2408_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2408_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2409
#define MACROLOP_PRIVATE_EVAL_REC_2408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2409(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2409_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2409_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2409_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2409_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2410
#define MACROLOP_PRIVATE_EVAL_REC_2409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2410(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2410_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2410_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2410_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2410_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2411
#define MACROLOP_PRIVATE_EVAL_REC_2410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2411(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2411_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2411_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2411_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2411_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2412
#define MACROLOP_PRIVATE_EVAL_REC_2411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2412(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2412_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2412_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2412_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2412_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2413
#define MACROLOP_PRIVATE_EVAL_REC_2412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2413(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2413_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2413_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2413_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2413_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2414
#define MACROLOP_PRIVATE_EVAL_REC_2413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2414(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2414_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2414_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2414_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2414_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2415
#define MACROLOP_PRIVATE_EVAL_REC_2414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2415(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2415_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2415_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2415_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2415_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2416
#define MACROLOP_PRIVATE_EVAL_REC_2415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2416(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2416_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2416_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2416_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2416_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2417
#define MACROLOP_PRIVATE_EVAL_REC_2416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2417(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2417_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2417_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2417_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2417_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2418
#define MACROLOP_PRIVATE_EVAL_REC_2417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2418(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2418_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2418_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2418_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2418_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2419
#define MACROLOP_PRIVATE_EVAL_REC_2418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2419(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2419_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2419_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2419_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2419_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2420
#define MACROLOP_PRIVATE_EVAL_REC_2419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2420(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2420_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2420_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2420_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2420_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2421
#define MACROLOP_PRIVATE_EVAL_REC_2420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2421(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2421_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2421_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2421_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2421_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2422
#define MACROLOP_PRIVATE_EVAL_REC_2421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2422(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2422_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2422_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2422_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2422_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2423
#define MACROLOP_PRIVATE_EVAL_REC_2422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2423(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2423_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2423_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2423_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2423_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2424
#define MACROLOP_PRIVATE_EVAL_REC_2423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2424(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2424_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2424_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2424_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2424_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2425
#define MACROLOP_PRIVATE_EVAL_REC_2424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2425(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2425_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2425_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2425_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2425_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2426
#define MACROLOP_PRIVATE_EVAL_REC_2425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2426(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2426_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2426_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2426_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2426_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2427
#define MACROLOP_PRIVATE_EVAL_REC_2426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2427(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2427_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2427_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2427_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2427_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2428
#define MACROLOP_PRIVATE_EVAL_REC_2427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2428(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2428_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2428_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2428_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2428_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2429
#define MACROLOP_PRIVATE_EVAL_REC_2428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2429(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2429_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2429_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2429_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2429_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2430
#define MACROLOP_PRIVATE_EVAL_REC_2429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2430(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2430_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2430_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2430_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2430_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2431
#define MACROLOP_PRIVATE_EVAL_REC_2430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2431(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2431_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2431_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2431_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2431_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2432
#define MACROLOP_PRIVATE_EVAL_REC_2431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2432(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2432_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2432_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2432_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2432_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2433
#define MACROLOP_PRIVATE_EVAL_REC_2432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2433(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2433_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2433_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2433_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2433_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2434
#define MACROLOP_PRIVATE_EVAL_REC_2433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2434(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2434_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2434_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2434_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2434_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2435
#define MACROLOP_PRIVATE_EVAL_REC_2434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2435(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2435_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2435_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2435_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2435_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2436
#define MACROLOP_PRIVATE_EVAL_REC_2435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2436(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2436_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2436_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2436_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2436_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2437
#define MACROLOP_PRIVATE_EVAL_REC_2436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2437(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2437_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2437_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2437_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2437_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2438
#define MACROLOP_PRIVATE_EVAL_REC_2437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2438(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2438_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2438_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2438_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2438_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2439
#define MACROLOP_PRIVATE_EVAL_REC_2438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2439(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2439_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2439_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2439_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2439_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2440
#define MACROLOP_PRIVATE_EVAL_REC_2439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2440(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2440_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2440_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2440_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2440_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2441
#define MACROLOP_PRIVATE_EVAL_REC_2440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2441(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2441_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2441_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2441_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2441_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2442
#define MACROLOP_PRIVATE_EVAL_REC_2441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2442(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2442_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2442_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2442_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2442_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2443
#define MACROLOP_PRIVATE_EVAL_REC_2442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2443(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2443_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2443_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2443_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2443_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2444
#define MACROLOP_PRIVATE_EVAL_REC_2443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2444(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2444_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2444_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2444_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2444_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2445
#define MACROLOP_PRIVATE_EVAL_REC_2444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2445(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2445_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2445_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2445_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2445_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2446
#define MACROLOP_PRIVATE_EVAL_REC_2445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2446(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2446_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2446_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2446_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2446_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2447
#define MACROLOP_PRIVATE_EVAL_REC_2446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2447(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2447_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2447_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2447_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2447_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2448
#define MACROLOP_PRIVATE_EVAL_REC_2447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2448(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2448_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2448_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2448_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2448_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2449
#define MACROLOP_PRIVATE_EVAL_REC_2448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2449(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2449_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2449_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2449_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2449_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2450
#define MACROLOP_PRIVATE_EVAL_REC_2449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2450(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2450_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2450_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2450_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2450_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2451
#define MACROLOP_PRIVATE_EVAL_REC_2450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2451(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2451_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2451_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2451_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2451_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2452
#define MACROLOP_PRIVATE_EVAL_REC_2451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2452(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2452_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2452_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2452_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2452_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2453
#define MACROLOP_PRIVATE_EVAL_REC_2452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2453(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2453_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2453_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2453_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2453_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2454
#define MACROLOP_PRIVATE_EVAL_REC_2453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2454(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2454_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2454_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2454_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2454_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2455
#define MACROLOP_PRIVATE_EVAL_REC_2454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2455(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2455_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2455_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2455_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2455_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2456
#define MACROLOP_PRIVATE_EVAL_REC_2455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2456(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2456_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2456_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2456_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2456_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2457
#define MACROLOP_PRIVATE_EVAL_REC_2456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2457(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2457_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2457_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2457_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2457_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2458
#define MACROLOP_PRIVATE_EVAL_REC_2457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2458(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2458_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2458_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2458_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2458_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2459
#define MACROLOP_PRIVATE_EVAL_REC_2458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2459(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2459_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2459_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2459_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2459_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2460
#define MACROLOP_PRIVATE_EVAL_REC_2459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2460(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2460_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2460_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2460_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2460_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2461
#define MACROLOP_PRIVATE_EVAL_REC_2460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2461(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2461_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2461_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2461_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2461_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2462
#define MACROLOP_PRIVATE_EVAL_REC_2461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2462(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2462_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2462_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2462_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2462_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2463
#define MACROLOP_PRIVATE_EVAL_REC_2462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2463(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2463_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2463_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2463_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2463_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2464
#define MACROLOP_PRIVATE_EVAL_REC_2463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2464(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2464_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2464_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2464_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2464_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2465
#define MACROLOP_PRIVATE_EVAL_REC_2464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2465(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2465_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2465_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2465_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2465_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2466
#define MACROLOP_PRIVATE_EVAL_REC_2465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2466(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2466_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2466_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2466_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2466_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2467
#define MACROLOP_PRIVATE_EVAL_REC_2466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2467(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2467_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2467_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2467_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2467_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2468
#define MACROLOP_PRIVATE_EVAL_REC_2467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2468(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2468_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2468_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2468_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2468_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2469
#define MACROLOP_PRIVATE_EVAL_REC_2468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2469(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2469_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2469_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2469_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2469_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2470
#define MACROLOP_PRIVATE_EVAL_REC_2469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2470(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2470_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2470_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2470_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2470_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2471
#define MACROLOP_PRIVATE_EVAL_REC_2470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2471(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2471_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2471_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2471_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2471_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2472
#define MACROLOP_PRIVATE_EVAL_REC_2471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2472(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2472_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2472_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2472_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2472_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2473
#define MACROLOP_PRIVATE_EVAL_REC_2472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2473(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2473_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2473_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2473_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2473_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2474
#define MACROLOP_PRIVATE_EVAL_REC_2473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2474(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2474_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2474_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2474_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2474_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2475
#define MACROLOP_PRIVATE_EVAL_REC_2474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2475(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2475_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2475_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2475_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2475_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2476
#define MACROLOP_PRIVATE_EVAL_REC_2475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2476(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2476_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2476_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2476_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2476_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2477
#define MACROLOP_PRIVATE_EVAL_REC_2476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2477(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2477_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2477_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2477_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2477_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2478
#define MACROLOP_PRIVATE_EVAL_REC_2477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2478(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2478_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2478_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2478_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2478_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2479
#define MACROLOP_PRIVATE_EVAL_REC_2478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2479(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2479_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2479_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2479_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2479_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2480
#define MACROLOP_PRIVATE_EVAL_REC_2479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2480(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2480_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2480_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2480_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2480_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2481
#define MACROLOP_PRIVATE_EVAL_REC_2480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2481(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2481_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2481_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2481_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2481_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2482
#define MACROLOP_PRIVATE_EVAL_REC_2481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2482(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2482_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2482_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2482_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2482_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2483
#define MACROLOP_PRIVATE_EVAL_REC_2482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2483(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2483_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2483_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2483_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2483_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2484
#define MACROLOP_PRIVATE_EVAL_REC_2483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2484(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2484_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2484_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2484_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2484_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2485
#define MACROLOP_PRIVATE_EVAL_REC_2484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2485(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2485_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2485_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2485_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2485_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2486
#define MACROLOP_PRIVATE_EVAL_REC_2485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2486(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2486_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2486_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2486_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2486_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2487
#define MACROLOP_PRIVATE_EVAL_REC_2486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2487(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2487_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2487_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2487_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2487_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2488
#define MACROLOP_PRIVATE_EVAL_REC_2487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2488(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2488_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2488_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2488_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2488_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2489
#define MACROLOP_PRIVATE_EVAL_REC_2488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2489(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2489_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2489_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2489_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2489_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2490
#define MACROLOP_PRIVATE_EVAL_REC_2489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2490(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2490_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2490_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2490_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2490_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2491
#define MACROLOP_PRIVATE_EVAL_REC_2490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2491(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2491_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2491_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2491_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2491_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2492
#define MACROLOP_PRIVATE_EVAL_REC_2491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2492(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2492_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2492_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2492_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2492_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2493
#define MACROLOP_PRIVATE_EVAL_REC_2492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2493(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2493_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2493_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2493_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2493_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2494
#define MACROLOP_PRIVATE_EVAL_REC_2493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2494(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2494_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2494_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2494_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2494_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2495
#define MACROLOP_PRIVATE_EVAL_REC_2494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2495(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2495_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2495_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2495_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2495_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2496
#define MACROLOP_PRIVATE_EVAL_REC_2495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2496(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2496_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2496_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2496_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2496_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2497
#define MACROLOP_PRIVATE_EVAL_REC_2496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2497(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2497_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2497_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2497_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2497_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2498
#define MACROLOP_PRIVATE_EVAL_REC_2497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2498(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2498_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2498_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2498_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2498_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2499
#define MACROLOP_PRIVATE_EVAL_REC_2498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2499(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2499_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2499_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2499_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2499_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2500
#define MACROLOP_PRIVATE_EVAL_REC_2499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2500(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2500_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2500_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2500_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2500_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2501
#define MACROLOP_PRIVATE_EVAL_REC_2500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2501(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2501_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2501_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2501_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2501_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2502
#define MACROLOP_PRIVATE_EVAL_REC_2501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2502(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2502_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2502_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2502_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2502_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2503
#define MACROLOP_PRIVATE_EVAL_REC_2502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2503(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2503_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2503_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2503_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2503_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2504
#define MACROLOP_PRIVATE_EVAL_REC_2503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2504(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2504_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2504_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2504_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2504_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2505
#define MACROLOP_PRIVATE_EVAL_REC_2504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2505(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2505_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2505_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2505_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2505_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2506
#define MACROLOP_PRIVATE_EVAL_REC_2505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2506(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2506_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2506_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2506_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2506_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2507
#define MACROLOP_PRIVATE_EVAL_REC_2506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2507(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2507_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2507_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2507_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2507_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2508
#define MACROLOP_PRIVATE_EVAL_REC_2507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2508(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2508_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2508_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2508_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2508_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2509
#define MACROLOP_PRIVATE_EVAL_REC_2508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2509(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2509_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2509_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2509_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2509_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2510
#define MACROLOP_PRIVATE_EVAL_REC_2509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2510(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2510_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2510_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2510_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2510_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2511
#define MACROLOP_PRIVATE_EVAL_REC_2510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2511(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2511_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2511_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2511_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2511_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2512
#define MACROLOP_PRIVATE_EVAL_REC_2511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2512(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2512_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2512_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2512_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2512_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2513
#define MACROLOP_PRIVATE_EVAL_REC_2512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2513(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2513_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2513_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2513_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2513_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2514
#define MACROLOP_PRIVATE_EVAL_REC_2513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2514(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2514_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2514_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2514_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2514_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2515
#define MACROLOP_PRIVATE_EVAL_REC_2514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2515(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2515_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2515_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2515_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2515_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2516
#define MACROLOP_PRIVATE_EVAL_REC_2515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2516(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2516_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2516_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2516_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2516_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2517
#define MACROLOP_PRIVATE_EVAL_REC_2516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2517(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2517_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2517_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2517_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2517_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2518
#define MACROLOP_PRIVATE_EVAL_REC_2517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2518(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2518_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2518_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2518_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2518_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2519
#define MACROLOP_PRIVATE_EVAL_REC_2518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2519(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2519_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2519_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2519_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2519_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2520
#define MACROLOP_PRIVATE_EVAL_REC_2519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2520(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2520_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2520_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2520_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2520_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2521
#define MACROLOP_PRIVATE_EVAL_REC_2520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2521(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2521_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2521_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2521_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2521_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2522
#define MACROLOP_PRIVATE_EVAL_REC_2521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2522(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2522_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2522_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2522_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2522_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2523
#define MACROLOP_PRIVATE_EVAL_REC_2522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2523(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2523_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2523_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2523_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2523_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2524
#define MACROLOP_PRIVATE_EVAL_REC_2523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2524(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2524_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2524_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2524_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2524_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2525
#define MACROLOP_PRIVATE_EVAL_REC_2524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2525(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2525_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2525_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2525_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2525_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2526
#define MACROLOP_PRIVATE_EVAL_REC_2525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2526(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2526_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2526_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2526_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2526_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2527
#define MACROLOP_PRIVATE_EVAL_REC_2526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2527(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2527_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2527_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2527_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2527_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2528
#define MACROLOP_PRIVATE_EVAL_REC_2527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2528(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2528_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2528_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2528_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2528_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2529
#define MACROLOP_PRIVATE_EVAL_REC_2528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2529(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2529_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2529_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2529_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2529_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2530
#define MACROLOP_PRIVATE_EVAL_REC_2529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2530(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2530_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2530_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2530_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2530_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2531
#define MACROLOP_PRIVATE_EVAL_REC_2530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2531(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2531_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2531_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2531_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2531_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2532
#define MACROLOP_PRIVATE_EVAL_REC_2531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2532(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2532_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2532_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2532_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2532_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2533
#define MACROLOP_PRIVATE_EVAL_REC_2532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2533(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2533_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2533_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2533_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2533_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2534
#define MACROLOP_PRIVATE_EVAL_REC_2533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2534(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2534_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2534_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2534_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2534_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2535
#define MACROLOP_PRIVATE_EVAL_REC_2534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2535(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2535_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2535_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2535_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2535_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2536
#define MACROLOP_PRIVATE_EVAL_REC_2535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2536(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2536_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2536_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2536_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2536_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2537
#define MACROLOP_PRIVATE_EVAL_REC_2536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2537(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2537_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2537_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2537_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2537_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2538
#define MACROLOP_PRIVATE_EVAL_REC_2537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2538(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2538_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2538_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2538_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2538_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2539
#define MACROLOP_PRIVATE_EVAL_REC_2538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2539(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2539_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2539_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2539_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2539_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2540
#define MACROLOP_PRIVATE_EVAL_REC_2539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2540(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2540_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2540_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2540_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2540_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2541
#define MACROLOP_PRIVATE_EVAL_REC_2540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2541(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2541_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2541_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2541_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2541_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2542
#define MACROLOP_PRIVATE_EVAL_REC_2541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2542(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2542_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2542_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2542_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2542_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2543
#define MACROLOP_PRIVATE_EVAL_REC_2542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2543(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2543_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2543_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2543_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2543_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2544
#define MACROLOP_PRIVATE_EVAL_REC_2543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2544(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2544_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2544_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2544_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2544_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2545
#define MACROLOP_PRIVATE_EVAL_REC_2544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2545(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2545_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2545_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2545_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2545_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2546
#define MACROLOP_PRIVATE_EVAL_REC_2545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2546(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2546_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2546_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2546_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2546_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2547
#define MACROLOP_PRIVATE_EVAL_REC_2546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2547(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2547_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2547_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2547_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2547_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2548
#define MACROLOP_PRIVATE_EVAL_REC_2547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2548(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2548_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2548_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2548_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2548_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2549
#define MACROLOP_PRIVATE_EVAL_REC_2548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2549(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2549_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2549_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2549_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2549_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2550
#define MACROLOP_PRIVATE_EVAL_REC_2549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2550(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2550_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2550_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2550_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2550_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2551
#define MACROLOP_PRIVATE_EVAL_REC_2550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2551(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2551_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2551_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2551_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2551_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2552
#define MACROLOP_PRIVATE_EVAL_REC_2551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2552(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2552_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2552_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2552_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2552_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2553
#define MACROLOP_PRIVATE_EVAL_REC_2552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2553(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2553_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2553_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2553_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2553_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2554
#define MACROLOP_PRIVATE_EVAL_REC_2553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2554(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2554_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2554_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2554_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2554_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2555
#define MACROLOP_PRIVATE_EVAL_REC_2554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2555(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2555_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2555_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2555_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2555_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2556
#define MACROLOP_PRIVATE_EVAL_REC_2555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2556(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2556_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2556_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2556_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2556_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2557
#define MACROLOP_PRIVATE_EVAL_REC_2556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2557(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2557_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2557_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2557_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2557_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2558
#define MACROLOP_PRIVATE_EVAL_REC_2557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2558(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2558_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2558_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2558_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2558_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2559
#define MACROLOP_PRIVATE_EVAL_REC_2558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2559(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2559_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2559_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2559_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2559_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2560
#define MACROLOP_PRIVATE_EVAL_REC_2559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2560(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2560_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2560_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2560_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2560_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2561
#define MACROLOP_PRIVATE_EVAL_REC_2560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2561(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2561_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2561_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2561_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2561_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2562
#define MACROLOP_PRIVATE_EVAL_REC_2561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2562(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2562_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2562_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2562_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2562_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2563
#define MACROLOP_PRIVATE_EVAL_REC_2562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2563(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2563_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2563_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2563_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2563_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2564
#define MACROLOP_PRIVATE_EVAL_REC_2563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2564(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2564_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2564_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2564_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2564_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2565
#define MACROLOP_PRIVATE_EVAL_REC_2564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2565(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2565_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2565_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2565_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2565_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2566
#define MACROLOP_PRIVATE_EVAL_REC_2565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2566(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2566_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2566_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2566_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2566_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2567
#define MACROLOP_PRIVATE_EVAL_REC_2566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2567(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2567_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2567_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2567_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2567_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2568
#define MACROLOP_PRIVATE_EVAL_REC_2567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2568(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2568_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2568_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2568_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2568_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2569
#define MACROLOP_PRIVATE_EVAL_REC_2568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2569(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2569_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2569_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2569_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2569_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2570
#define MACROLOP_PRIVATE_EVAL_REC_2569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2570(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2570_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2570_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2570_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2570_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2571
#define MACROLOP_PRIVATE_EVAL_REC_2570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2571(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2571_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2571_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2571_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2571_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2572
#define MACROLOP_PRIVATE_EVAL_REC_2571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2572(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2572_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2572_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2572_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2572_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2573
#define MACROLOP_PRIVATE_EVAL_REC_2572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2573(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2573_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2573_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2573_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2573_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2574
#define MACROLOP_PRIVATE_EVAL_REC_2573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2574(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2574_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2574_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2574_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2574_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2575
#define MACROLOP_PRIVATE_EVAL_REC_2574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2575(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2575_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2575_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2575_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2575_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2576
#define MACROLOP_PRIVATE_EVAL_REC_2575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2576(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2576_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2576_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2576_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2576_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2577
#define MACROLOP_PRIVATE_EVAL_REC_2576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2577(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2577_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2577_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2577_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2577_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2578
#define MACROLOP_PRIVATE_EVAL_REC_2577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2578(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2578_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2578_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2578_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2578_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2579
#define MACROLOP_PRIVATE_EVAL_REC_2578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2579(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2579_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2579_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2579_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2579_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2580
#define MACROLOP_PRIVATE_EVAL_REC_2579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2580(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2580_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2580_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2580_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2580_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2581
#define MACROLOP_PRIVATE_EVAL_REC_2580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2581(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2581_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2581_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2581_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2581_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2582
#define MACROLOP_PRIVATE_EVAL_REC_2581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2582(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2582_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2582_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2582_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2582_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2583
#define MACROLOP_PRIVATE_EVAL_REC_2582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2583(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2583_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2583_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2583_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2583_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2584
#define MACROLOP_PRIVATE_EVAL_REC_2583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2584(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2584_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2584_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2584_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2584_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2585
#define MACROLOP_PRIVATE_EVAL_REC_2584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2585(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2585_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2585_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2585_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2585_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2586
#define MACROLOP_PRIVATE_EVAL_REC_2585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2586(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2586_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2586_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2586_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2586_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2587
#define MACROLOP_PRIVATE_EVAL_REC_2586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2587(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2587_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2587_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2587_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2587_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2588
#define MACROLOP_PRIVATE_EVAL_REC_2587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2588(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2588_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2588_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2588_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2588_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2589
#define MACROLOP_PRIVATE_EVAL_REC_2588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2589(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2589_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2589_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2589_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2589_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2590
#define MACROLOP_PRIVATE_EVAL_REC_2589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2590(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2590_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2590_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2590_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2590_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2591
#define MACROLOP_PRIVATE_EVAL_REC_2590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2591(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2591_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2591_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2591_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2591_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2592
#define MACROLOP_PRIVATE_EVAL_REC_2591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2592(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2592_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2592_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2592_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2592_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2593
#define MACROLOP_PRIVATE_EVAL_REC_2592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2593(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2593_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2593_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2593_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2593_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2594
#define MACROLOP_PRIVATE_EVAL_REC_2593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2594(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2594_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2594_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2594_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2594_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2595
#define MACROLOP_PRIVATE_EVAL_REC_2594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2595(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2595_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2595_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2595_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2595_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2596
#define MACROLOP_PRIVATE_EVAL_REC_2595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2596(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2596_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2596_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2596_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2596_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2597
#define MACROLOP_PRIVATE_EVAL_REC_2596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2597(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2597_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2597_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2597_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2597_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2598
#define MACROLOP_PRIVATE_EVAL_REC_2597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2598(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2598_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2598_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2598_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2598_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2599
#define MACROLOP_PRIVATE_EVAL_REC_2598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2599(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2599_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2599_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2599_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2599_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2600
#define MACROLOP_PRIVATE_EVAL_REC_2599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2600(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2600_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2600_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2600_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2600_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2601
#define MACROLOP_PRIVATE_EVAL_REC_2600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2601(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2601_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2601_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2601_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2601_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2602
#define MACROLOP_PRIVATE_EVAL_REC_2601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2602(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2602_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2602_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2602_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2602_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2603
#define MACROLOP_PRIVATE_EVAL_REC_2602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2603(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2603_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2603_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2603_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2603_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2604
#define MACROLOP_PRIVATE_EVAL_REC_2603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2604(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2604_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2604_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2604_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2604_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2605
#define MACROLOP_PRIVATE_EVAL_REC_2604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2605(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2605_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2605_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2605_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2605_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2606
#define MACROLOP_PRIVATE_EVAL_REC_2605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2606(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2606_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2606_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2606_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2606_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2607
#define MACROLOP_PRIVATE_EVAL_REC_2606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2607(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2607_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2607_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2607_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2607_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2608
#define MACROLOP_PRIVATE_EVAL_REC_2607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2608(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2608_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2608_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2608_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2608_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2609
#define MACROLOP_PRIVATE_EVAL_REC_2608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2609(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2609_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2609_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2609_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2609_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2610
#define MACROLOP_PRIVATE_EVAL_REC_2609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2610(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2610_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2610_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2610_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2610_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2611
#define MACROLOP_PRIVATE_EVAL_REC_2610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2611(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2611_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2611_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2611_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2611_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2612
#define MACROLOP_PRIVATE_EVAL_REC_2611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2612(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2612_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2612_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2612_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2612_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2613
#define MACROLOP_PRIVATE_EVAL_REC_2612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2613(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2613_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2613_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2613_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2613_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2614
#define MACROLOP_PRIVATE_EVAL_REC_2613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2614(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2614_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2614_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2614_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2614_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2615
#define MACROLOP_PRIVATE_EVAL_REC_2614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2615(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2615_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2615_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2615_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2615_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2616
#define MACROLOP_PRIVATE_EVAL_REC_2615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2616(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2616_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2616_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2616_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2616_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2617
#define MACROLOP_PRIVATE_EVAL_REC_2616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2617(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2617_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2617_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2617_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2617_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2618
#define MACROLOP_PRIVATE_EVAL_REC_2617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2618(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2618_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2618_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2618_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2618_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2619
#define MACROLOP_PRIVATE_EVAL_REC_2618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2619(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2619_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2619_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2619_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2619_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2620
#define MACROLOP_PRIVATE_EVAL_REC_2619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2620(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2620_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2620_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2620_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2620_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2621
#define MACROLOP_PRIVATE_EVAL_REC_2620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2621(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2621_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2621_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2621_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2621_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2622
#define MACROLOP_PRIVATE_EVAL_REC_2621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2622(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2622_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2622_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2622_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2622_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2623
#define MACROLOP_PRIVATE_EVAL_REC_2622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2623(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2623_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2623_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2623_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2623_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2624
#define MACROLOP_PRIVATE_EVAL_REC_2623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2624(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2624_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2624_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2624_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2624_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2625
#define MACROLOP_PRIVATE_EVAL_REC_2624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2625(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2625_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2625_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2625_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2625_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2626
#define MACROLOP_PRIVATE_EVAL_REC_2625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2626(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2626_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2626_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2626_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2626_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2627
#define MACROLOP_PRIVATE_EVAL_REC_2626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2627(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2627_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2627_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2627_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2627_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2628
#define MACROLOP_PRIVATE_EVAL_REC_2627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2628(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2628_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2628_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2628_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2628_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2629
#define MACROLOP_PRIVATE_EVAL_REC_2628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2629(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2629_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2629_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2629_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2629_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2630
#define MACROLOP_PRIVATE_EVAL_REC_2629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2630(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2630_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2630_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2630_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2630_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2631
#define MACROLOP_PRIVATE_EVAL_REC_2630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2631(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2631_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2631_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2631_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2631_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2632
#define MACROLOP_PRIVATE_EVAL_REC_2631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2632(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2632_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2632_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2632_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2632_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2633
#define MACROLOP_PRIVATE_EVAL_REC_2632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2633(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2633_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2633_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2633_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2633_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2634
#define MACROLOP_PRIVATE_EVAL_REC_2633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2634(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2634_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2634_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2634_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2634_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2635
#define MACROLOP_PRIVATE_EVAL_REC_2634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2635(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2635_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2635_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2635_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2635_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2636
#define MACROLOP_PRIVATE_EVAL_REC_2635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2636(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2636_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2636_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2636_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2636_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2637
#define MACROLOP_PRIVATE_EVAL_REC_2636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2637(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2637_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2637_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2637_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2637_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2638
#define MACROLOP_PRIVATE_EVAL_REC_2637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2638(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2638_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2638_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2638_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2638_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2639
#define MACROLOP_PRIVATE_EVAL_REC_2638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2639(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2639_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2639_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2639_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2639_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2640
#define MACROLOP_PRIVATE_EVAL_REC_2639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2640(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2640_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2640_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2640_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2640_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2641
#define MACROLOP_PRIVATE_EVAL_REC_2640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2641(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2641_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2641_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2641_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2641_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2642
#define MACROLOP_PRIVATE_EVAL_REC_2641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2642(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2642_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2642_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2642_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2642_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2643
#define MACROLOP_PRIVATE_EVAL_REC_2642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2643(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2643_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2643_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2643_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2643_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2644
#define MACROLOP_PRIVATE_EVAL_REC_2643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2644(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2644_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2644_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2644_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2644_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2645
#define MACROLOP_PRIVATE_EVAL_REC_2644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2645(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2645_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2645_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2645_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2645_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2646
#define MACROLOP_PRIVATE_EVAL_REC_2645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2646(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2646_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2646_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2646_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2646_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2647
#define MACROLOP_PRIVATE_EVAL_REC_2646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2647(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2647_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2647_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2647_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2647_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2648
#define MACROLOP_PRIVATE_EVAL_REC_2647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2648(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2648_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2648_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2648_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2648_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2649
#define MACROLOP_PRIVATE_EVAL_REC_2648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2649(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2649_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2649_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2649_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2649_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2650
#define MACROLOP_PRIVATE_EVAL_REC_2649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2650(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2650_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2650_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2650_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2650_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2651
#define MACROLOP_PRIVATE_EVAL_REC_2650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2651(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2651_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2651_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2651_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2651_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2652
#define MACROLOP_PRIVATE_EVAL_REC_2651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2652(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2652_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2652_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2652_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2652_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2653
#define MACROLOP_PRIVATE_EVAL_REC_2652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2653(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2653_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2653_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2653_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2653_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2654
#define MACROLOP_PRIVATE_EVAL_REC_2653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2654(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2654_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2654_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2654_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2654_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2655
#define MACROLOP_PRIVATE_EVAL_REC_2654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2655(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2655_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2655_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2655_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2655_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2656
#define MACROLOP_PRIVATE_EVAL_REC_2655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2656(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2656_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2656_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2656_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2656_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2657
#define MACROLOP_PRIVATE_EVAL_REC_2656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2657(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2657_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2657_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2657_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2657_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2658
#define MACROLOP_PRIVATE_EVAL_REC_2657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2658(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2658_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2658_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2658_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2658_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2659
#define MACROLOP_PRIVATE_EVAL_REC_2658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2659(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2659_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2659_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2659_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2659_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2660
#define MACROLOP_PRIVATE_EVAL_REC_2659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2660(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2660_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2660_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2660_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2660_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2661
#define MACROLOP_PRIVATE_EVAL_REC_2660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2661(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2661_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2661_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2661_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2661_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2662
#define MACROLOP_PRIVATE_EVAL_REC_2661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2662(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2662_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2662_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2662_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2662_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2663
#define MACROLOP_PRIVATE_EVAL_REC_2662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2663(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2663_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2663_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2663_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2663_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2664
#define MACROLOP_PRIVATE_EVAL_REC_2663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2664(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2664_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2664_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2664_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2664_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2665
#define MACROLOP_PRIVATE_EVAL_REC_2664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2665(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2665_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2665_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2665_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2665_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2666
#define MACROLOP_PRIVATE_EVAL_REC_2665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2666(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2666_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2666_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2666_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2666_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2667
#define MACROLOP_PRIVATE_EVAL_REC_2666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2667(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2667_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2667_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2667_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2667_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2668
#define MACROLOP_PRIVATE_EVAL_REC_2667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2668(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2668_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2668_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2668_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2668_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2669
#define MACROLOP_PRIVATE_EVAL_REC_2668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2669(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2669_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2669_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2669_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2669_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2670
#define MACROLOP_PRIVATE_EVAL_REC_2669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2670(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2670_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2670_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2670_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2670_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2671
#define MACROLOP_PRIVATE_EVAL_REC_2670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2671(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2671_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2671_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2671_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2671_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2672
#define MACROLOP_PRIVATE_EVAL_REC_2671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2672(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2672_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2672_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2672_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2672_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2673
#define MACROLOP_PRIVATE_EVAL_REC_2672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2673(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2673_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2673_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2673_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2673_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2674
#define MACROLOP_PRIVATE_EVAL_REC_2673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2674(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2674_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2674_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2674_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2674_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2675
#define MACROLOP_PRIVATE_EVAL_REC_2674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2675(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2675_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2675_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2675_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2675_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2676
#define MACROLOP_PRIVATE_EVAL_REC_2675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2676(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2676_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2676_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2676_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2676_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2677
#define MACROLOP_PRIVATE_EVAL_REC_2676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2677(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2677_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2677_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2677_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2677_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2678
#define MACROLOP_PRIVATE_EVAL_REC_2677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2678(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2678_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2678_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2678_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2678_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2679
#define MACROLOP_PRIVATE_EVAL_REC_2678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2679(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2679_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2679_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2679_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2679_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2680
#define MACROLOP_PRIVATE_EVAL_REC_2679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2680(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2680_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2680_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2680_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2680_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2681
#define MACROLOP_PRIVATE_EVAL_REC_2680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2681(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2681_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2681_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2681_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2681_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2682
#define MACROLOP_PRIVATE_EVAL_REC_2681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2682(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2682_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2682_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2682_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2682_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2683
#define MACROLOP_PRIVATE_EVAL_REC_2682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2683(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2683_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2683_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2683_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2683_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2684
#define MACROLOP_PRIVATE_EVAL_REC_2683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2684(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2684_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2684_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2684_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2684_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2685
#define MACROLOP_PRIVATE_EVAL_REC_2684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2685(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2685_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2685_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2685_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2685_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2686
#define MACROLOP_PRIVATE_EVAL_REC_2685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2686(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2686_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2686_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2686_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2686_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2687
#define MACROLOP_PRIVATE_EVAL_REC_2686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2687(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2687_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2687_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2687_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2687_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2688
#define MACROLOP_PRIVATE_EVAL_REC_2687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2688(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2688_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2688_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2688_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2688_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2689
#define MACROLOP_PRIVATE_EVAL_REC_2688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2689(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2689_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2689_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2689_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2689_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2690
#define MACROLOP_PRIVATE_EVAL_REC_2689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2690(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2690_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2690_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2690_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2690_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2691
#define MACROLOP_PRIVATE_EVAL_REC_2690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2691(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2691_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2691_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2691_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2691_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2692
#define MACROLOP_PRIVATE_EVAL_REC_2691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2692(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2692_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2692_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2692_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2692_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2693
#define MACROLOP_PRIVATE_EVAL_REC_2692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2693(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2693_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2693_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2693_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2693_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2694
#define MACROLOP_PRIVATE_EVAL_REC_2693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2694(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2694_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2694_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2694_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2694_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2695
#define MACROLOP_PRIVATE_EVAL_REC_2694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2695(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2695_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2695_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2695_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2695_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2696
#define MACROLOP_PRIVATE_EVAL_REC_2695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2696(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2696_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2696_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2696_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2696_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2697
#define MACROLOP_PRIVATE_EVAL_REC_2696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2697(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2697_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2697_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2697_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2697_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2698
#define MACROLOP_PRIVATE_EVAL_REC_2697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2698(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2698_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2698_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2698_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2698_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2699
#define MACROLOP_PRIVATE_EVAL_REC_2698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2699(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2699_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2699_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2699_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2699_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2700
#define MACROLOP_PRIVATE_EVAL_REC_2699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2700(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2700_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2700_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2700_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2700_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2701
#define MACROLOP_PRIVATE_EVAL_REC_2700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2701(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2701_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2701_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2701_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2701_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2702
#define MACROLOP_PRIVATE_EVAL_REC_2701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2702(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2702_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2702_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2702_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2702_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2703
#define MACROLOP_PRIVATE_EVAL_REC_2702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2703(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2703_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2703_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2703_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2703_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2704
#define MACROLOP_PRIVATE_EVAL_REC_2703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2704(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2704_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2704_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2704_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2704_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2705
#define MACROLOP_PRIVATE_EVAL_REC_2704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2705(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2705_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2705_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2705_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2705_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2706
#define MACROLOP_PRIVATE_EVAL_REC_2705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2706(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2706_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2706_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2706_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2706_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2707
#define MACROLOP_PRIVATE_EVAL_REC_2706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2707(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2707_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2707_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2707_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2707_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2708
#define MACROLOP_PRIVATE_EVAL_REC_2707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2708(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2708_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2708_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2708_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2708_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2709
#define MACROLOP_PRIVATE_EVAL_REC_2708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2709(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2709_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2709_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2709_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2709_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2710
#define MACROLOP_PRIVATE_EVAL_REC_2709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2710(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2710_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2710_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2710_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2710_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2711
#define MACROLOP_PRIVATE_EVAL_REC_2710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2711(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2711_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2711_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2711_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2711_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2712
#define MACROLOP_PRIVATE_EVAL_REC_2711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2712(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2712_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2712_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2712_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2712_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2713
#define MACROLOP_PRIVATE_EVAL_REC_2712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2713(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2713_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2713_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2713_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2713_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2714
#define MACROLOP_PRIVATE_EVAL_REC_2713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2714(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2714_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2714_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2714_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2714_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2715
#define MACROLOP_PRIVATE_EVAL_REC_2714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2715(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2715_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2715_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2715_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2715_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2716
#define MACROLOP_PRIVATE_EVAL_REC_2715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2716(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2716_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2716_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2716_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2716_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2717
#define MACROLOP_PRIVATE_EVAL_REC_2716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2717(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2717_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2717_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2717_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2717_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2718
#define MACROLOP_PRIVATE_EVAL_REC_2717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2718(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2718_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2718_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2718_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2718_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2719
#define MACROLOP_PRIVATE_EVAL_REC_2718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2719(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2719_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2719_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2719_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2719_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2720
#define MACROLOP_PRIVATE_EVAL_REC_2719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2720(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2720_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2720_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2720_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2720_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2721
#define MACROLOP_PRIVATE_EVAL_REC_2720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2721(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2721_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2721_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2721_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2721_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2722
#define MACROLOP_PRIVATE_EVAL_REC_2721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2722(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2722_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2722_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2722_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2722_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2723
#define MACROLOP_PRIVATE_EVAL_REC_2722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2723(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2723_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2723_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2723_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2723_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2724
#define MACROLOP_PRIVATE_EVAL_REC_2723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2724(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2724_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2724_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2724_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2724_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2725
#define MACROLOP_PRIVATE_EVAL_REC_2724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2725(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2725_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2725_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2725_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2725_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2726
#define MACROLOP_PRIVATE_EVAL_REC_2725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2726(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2726_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2726_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2726_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2726_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2727
#define MACROLOP_PRIVATE_EVAL_REC_2726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2727(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2727_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2727_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2727_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2727_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2728
#define MACROLOP_PRIVATE_EVAL_REC_2727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2728(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2728_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2728_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2728_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2728_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2729
#define MACROLOP_PRIVATE_EVAL_REC_2728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2729(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2729_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2729_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2729_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2729_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2730
#define MACROLOP_PRIVATE_EVAL_REC_2729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2730(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2730_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2730_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2730_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2730_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2731
#define MACROLOP_PRIVATE_EVAL_REC_2730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2731(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2731_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2731_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2731_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2731_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2732
#define MACROLOP_PRIVATE_EVAL_REC_2731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2732(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2732_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2732_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2732_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2732_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2733
#define MACROLOP_PRIVATE_EVAL_REC_2732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2733(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2733_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2733_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2733_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2733_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2734
#define MACROLOP_PRIVATE_EVAL_REC_2733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2734(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2734_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2734_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2734_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2734_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2735
#define MACROLOP_PRIVATE_EVAL_REC_2734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2735(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2735_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2735_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2735_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2735_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2736
#define MACROLOP_PRIVATE_EVAL_REC_2735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2736(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2736_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2736_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2736_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2736_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2737
#define MACROLOP_PRIVATE_EVAL_REC_2736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2737(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2737_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2737_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2737_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2737_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2738
#define MACROLOP_PRIVATE_EVAL_REC_2737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2738(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2738_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2738_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2738_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2738_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2739
#define MACROLOP_PRIVATE_EVAL_REC_2738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2739(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2739_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2739_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2739_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2739_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2740
#define MACROLOP_PRIVATE_EVAL_REC_2739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2740(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2740_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2740_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2740_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2740_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2741
#define MACROLOP_PRIVATE_EVAL_REC_2740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2741(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2741_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2741_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2741_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2741_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2742
#define MACROLOP_PRIVATE_EVAL_REC_2741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2742(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2742_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2742_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2742_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2742_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2743
#define MACROLOP_PRIVATE_EVAL_REC_2742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2743(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2743_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2743_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2743_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2743_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2744
#define MACROLOP_PRIVATE_EVAL_REC_2743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2744(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2744_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2744_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2744_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2744_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2745
#define MACROLOP_PRIVATE_EVAL_REC_2744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2745(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2745_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2745_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2745_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2745_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2746
#define MACROLOP_PRIVATE_EVAL_REC_2745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2746(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2746_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2746_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2746_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2746_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2747
#define MACROLOP_PRIVATE_EVAL_REC_2746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2747(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2747_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2747_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2747_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2747_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2748
#define MACROLOP_PRIVATE_EVAL_REC_2747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2748(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2748_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2748_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2748_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2748_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2749
#define MACROLOP_PRIVATE_EVAL_REC_2748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2749(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2749_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2749_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2749_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2749_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2750
#define MACROLOP_PRIVATE_EVAL_REC_2749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2750(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2750_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2750_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2750_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2750_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2751
#define MACROLOP_PRIVATE_EVAL_REC_2750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2751(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2751_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2751_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2751_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2751_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2752
#define MACROLOP_PRIVATE_EVAL_REC_2751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2752(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2752_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2752_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2752_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2752_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2753
#define MACROLOP_PRIVATE_EVAL_REC_2752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2753(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2753_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2753_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2753_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2753_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2754
#define MACROLOP_PRIVATE_EVAL_REC_2753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2754(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2754_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2754_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2754_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2754_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2755
#define MACROLOP_PRIVATE_EVAL_REC_2754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2755(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2755_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2755_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2755_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2755_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2756
#define MACROLOP_PRIVATE_EVAL_REC_2755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2756(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2756_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2756_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2756_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2756_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2757
#define MACROLOP_PRIVATE_EVAL_REC_2756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2757(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2757_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2757_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2757_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2757_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2758
#define MACROLOP_PRIVATE_EVAL_REC_2757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2758(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2758_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2758_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2758_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2758_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2759
#define MACROLOP_PRIVATE_EVAL_REC_2758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2759(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2759_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2759_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2759_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2759_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2760
#define MACROLOP_PRIVATE_EVAL_REC_2759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2760(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2760_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2760_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2760_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2760_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2761
#define MACROLOP_PRIVATE_EVAL_REC_2760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2761(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2761_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2761_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2761_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2761_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2762
#define MACROLOP_PRIVATE_EVAL_REC_2761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2762(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2762_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2762_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2762_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2762_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2763
#define MACROLOP_PRIVATE_EVAL_REC_2762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2763(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2763_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2763_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2763_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2763_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2764
#define MACROLOP_PRIVATE_EVAL_REC_2763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2764(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2764_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2764_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2764_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2764_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2765
#define MACROLOP_PRIVATE_EVAL_REC_2764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2765(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2765_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2765_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2765_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2765_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2766
#define MACROLOP_PRIVATE_EVAL_REC_2765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2766(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2766_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2766_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2766_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2766_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2767
#define MACROLOP_PRIVATE_EVAL_REC_2766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2767(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2767_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2767_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2767_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2767_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2768
#define MACROLOP_PRIVATE_EVAL_REC_2767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2768(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2768_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2768_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2768_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2768_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2769
#define MACROLOP_PRIVATE_EVAL_REC_2768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2769(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2769_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2769_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2769_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2769_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2770
#define MACROLOP_PRIVATE_EVAL_REC_2769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2770(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2770_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2770_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2770_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2770_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2771
#define MACROLOP_PRIVATE_EVAL_REC_2770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2771(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2771_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2771_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2771_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2771_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2772
#define MACROLOP_PRIVATE_EVAL_REC_2771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2772(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2772_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2772_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2772_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2772_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2773
#define MACROLOP_PRIVATE_EVAL_REC_2772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2773(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2773_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2773_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2773_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2773_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2774
#define MACROLOP_PRIVATE_EVAL_REC_2773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2774(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2774_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2774_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2774_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2774_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2775
#define MACROLOP_PRIVATE_EVAL_REC_2774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2775(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2775_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2775_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2775_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2775_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2776
#define MACROLOP_PRIVATE_EVAL_REC_2775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2776(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2776_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2776_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2776_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2776_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2777
#define MACROLOP_PRIVATE_EVAL_REC_2776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2777(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2777_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2777_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2777_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2777_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2778
#define MACROLOP_PRIVATE_EVAL_REC_2777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2778(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2778_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2778_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2778_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2778_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2779
#define MACROLOP_PRIVATE_EVAL_REC_2778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2779(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2779_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2779_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2779_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2779_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2780
#define MACROLOP_PRIVATE_EVAL_REC_2779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2780(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2780_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2780_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2780_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2780_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2781
#define MACROLOP_PRIVATE_EVAL_REC_2780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2781(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2781_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2781_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2781_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2781_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2782
#define MACROLOP_PRIVATE_EVAL_REC_2781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2782(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2782_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2782_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2782_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2782_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2783
#define MACROLOP_PRIVATE_EVAL_REC_2782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2783(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2783_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2783_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2783_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2783_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2784
#define MACROLOP_PRIVATE_EVAL_REC_2783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2784(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2784_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2784_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2784_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2784_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2785
#define MACROLOP_PRIVATE_EVAL_REC_2784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2785(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2785_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2785_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2785_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2785_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2786
#define MACROLOP_PRIVATE_EVAL_REC_2785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2786(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2786_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2786_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2786_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2786_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2787
#define MACROLOP_PRIVATE_EVAL_REC_2786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2787(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2787_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2787_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2787_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2787_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2788
#define MACROLOP_PRIVATE_EVAL_REC_2787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2788(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2788_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2788_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2788_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2788_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2789
#define MACROLOP_PRIVATE_EVAL_REC_2788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2789(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2789_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2789_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2789_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2789_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2790
#define MACROLOP_PRIVATE_EVAL_REC_2789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2790(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2790_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2790_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2790_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2790_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2791
#define MACROLOP_PRIVATE_EVAL_REC_2790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2791(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2791_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2791_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2791_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2791_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2792
#define MACROLOP_PRIVATE_EVAL_REC_2791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2792(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2792_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2792_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2792_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2792_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2793
#define MACROLOP_PRIVATE_EVAL_REC_2792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2793(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2793_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2793_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2793_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2793_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2794
#define MACROLOP_PRIVATE_EVAL_REC_2793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2794(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2794_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2794_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2794_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2794_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2795
#define MACROLOP_PRIVATE_EVAL_REC_2794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2795(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2795_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2795_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2795_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2795_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2796
#define MACROLOP_PRIVATE_EVAL_REC_2795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2796(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2796_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2796_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2796_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2796_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2797
#define MACROLOP_PRIVATE_EVAL_REC_2796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2797(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2797_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2797_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2797_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2797_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2798
#define MACROLOP_PRIVATE_EVAL_REC_2797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2798(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2798_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2798_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2798_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2798_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2799
#define MACROLOP_PRIVATE_EVAL_REC_2798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2799(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2799_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2799_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2799_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2799_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2800
#define MACROLOP_PRIVATE_EVAL_REC_2799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2800(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2800_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2800_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2800_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2800_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2801
#define MACROLOP_PRIVATE_EVAL_REC_2800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2801(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2801_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2801_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2801_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2801_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2802
#define MACROLOP_PRIVATE_EVAL_REC_2801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2802(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2802_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2802_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2802_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2802_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2803
#define MACROLOP_PRIVATE_EVAL_REC_2802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2803(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2803_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2803_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2803_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2803_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2804
#define MACROLOP_PRIVATE_EVAL_REC_2803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2804(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2804_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2804_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2804_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2804_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2805
#define MACROLOP_PRIVATE_EVAL_REC_2804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2805(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2805_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2805_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2805_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2805_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2806
#define MACROLOP_PRIVATE_EVAL_REC_2805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2806(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2806_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2806_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2806_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2806_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2807
#define MACROLOP_PRIVATE_EVAL_REC_2806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2807(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2807_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2807_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2807_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2807_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2808
#define MACROLOP_PRIVATE_EVAL_REC_2807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2808(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2808_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2808_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2808_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2808_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2809
#define MACROLOP_PRIVATE_EVAL_REC_2808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2809(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2809_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2809_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2809_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2809_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2810
#define MACROLOP_PRIVATE_EVAL_REC_2809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2810(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2810_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2810_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2810_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2810_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2811
#define MACROLOP_PRIVATE_EVAL_REC_2810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2811(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2811_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2811_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2811_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2811_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2812
#define MACROLOP_PRIVATE_EVAL_REC_2811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2812(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2812_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2812_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2812_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2812_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2813
#define MACROLOP_PRIVATE_EVAL_REC_2812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2813(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2813_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2813_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2813_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2813_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2814
#define MACROLOP_PRIVATE_EVAL_REC_2813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2814(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2814_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2814_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2814_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2814_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2815
#define MACROLOP_PRIVATE_EVAL_REC_2814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2815(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2815_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2815_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2815_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2815_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2816
#define MACROLOP_PRIVATE_EVAL_REC_2815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2816(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2816_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2816_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2816_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2816_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2817
#define MACROLOP_PRIVATE_EVAL_REC_2816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2817(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2817_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2817_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2817_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2817_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2818
#define MACROLOP_PRIVATE_EVAL_REC_2817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2818(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2818_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2818_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2818_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2818_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2819
#define MACROLOP_PRIVATE_EVAL_REC_2818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2819(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2819_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2819_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2819_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2819_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2820
#define MACROLOP_PRIVATE_EVAL_REC_2819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2820(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2820_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2820_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2820_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2820_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2821
#define MACROLOP_PRIVATE_EVAL_REC_2820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2821(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2821_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2821_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2821_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2821_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2822
#define MACROLOP_PRIVATE_EVAL_REC_2821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2822(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2822_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2822_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2822_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2822_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2823
#define MACROLOP_PRIVATE_EVAL_REC_2822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2823(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2823_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2823_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2823_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2823_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2824
#define MACROLOP_PRIVATE_EVAL_REC_2823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2824(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2824_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2824_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2824_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2824_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2825
#define MACROLOP_PRIVATE_EVAL_REC_2824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2825(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2825_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2825_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2825_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2825_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2826
#define MACROLOP_PRIVATE_EVAL_REC_2825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2826(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2826_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2826_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2826_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2826_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2827
#define MACROLOP_PRIVATE_EVAL_REC_2826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2827(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2827_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2827_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2827_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2827_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2828
#define MACROLOP_PRIVATE_EVAL_REC_2827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2828(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2828_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2828_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2828_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2828_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2829
#define MACROLOP_PRIVATE_EVAL_REC_2828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2829(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2829_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2829_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2829_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2829_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2830
#define MACROLOP_PRIVATE_EVAL_REC_2829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2830(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2830_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2830_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2830_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2830_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2831
#define MACROLOP_PRIVATE_EVAL_REC_2830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2831(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2831_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2831_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2831_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2831_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2832
#define MACROLOP_PRIVATE_EVAL_REC_2831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2832(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2832_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2832_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2832_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2832_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2833
#define MACROLOP_PRIVATE_EVAL_REC_2832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2833(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2833_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2833_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2833_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2833_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2834
#define MACROLOP_PRIVATE_EVAL_REC_2833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2834(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2834_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2834_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2834_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2834_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2835
#define MACROLOP_PRIVATE_EVAL_REC_2834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2835(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2835_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2835_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2835_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2835_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2836
#define MACROLOP_PRIVATE_EVAL_REC_2835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2836(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2836_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2836_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2836_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2836_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2837
#define MACROLOP_PRIVATE_EVAL_REC_2836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2837(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2837_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2837_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2837_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2837_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2838
#define MACROLOP_PRIVATE_EVAL_REC_2837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2838(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2838_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2838_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2838_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2838_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2839
#define MACROLOP_PRIVATE_EVAL_REC_2838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2839(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2839_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2839_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2839_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2839_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2840
#define MACROLOP_PRIVATE_EVAL_REC_2839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2840(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2840_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2840_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2840_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2840_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2841
#define MACROLOP_PRIVATE_EVAL_REC_2840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2841(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2841_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2841_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2841_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2841_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2842
#define MACROLOP_PRIVATE_EVAL_REC_2841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2842(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2842_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2842_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2842_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2842_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2843
#define MACROLOP_PRIVATE_EVAL_REC_2842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2843(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2843_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2843_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2843_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2843_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2844
#define MACROLOP_PRIVATE_EVAL_REC_2843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2844(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2844_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2844_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2844_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2844_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2845
#define MACROLOP_PRIVATE_EVAL_REC_2844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2845(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2845_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2845_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2845_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2845_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2846
#define MACROLOP_PRIVATE_EVAL_REC_2845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2846(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2846_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2846_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2846_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2846_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2847
#define MACROLOP_PRIVATE_EVAL_REC_2846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2847(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2847_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2847_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2847_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2847_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2848
#define MACROLOP_PRIVATE_EVAL_REC_2847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2848(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2848_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2848_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2848_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2848_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2849
#define MACROLOP_PRIVATE_EVAL_REC_2848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2849(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2849_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2849_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2849_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2849_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2850
#define MACROLOP_PRIVATE_EVAL_REC_2849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2850(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2850_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2850_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2850_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2850_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2851
#define MACROLOP_PRIVATE_EVAL_REC_2850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2851(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2851_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2851_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2851_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2851_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2852
#define MACROLOP_PRIVATE_EVAL_REC_2851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2852(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2852_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2852_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2852_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2852_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2853
#define MACROLOP_PRIVATE_EVAL_REC_2852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2853(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2853_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2853_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2853_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2853_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2854
#define MACROLOP_PRIVATE_EVAL_REC_2853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2854(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2854_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2854_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2854_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2854_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2855
#define MACROLOP_PRIVATE_EVAL_REC_2854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2855(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2855_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2855_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2855_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2855_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2856
#define MACROLOP_PRIVATE_EVAL_REC_2855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2856(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2856_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2856_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2856_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2856_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2857
#define MACROLOP_PRIVATE_EVAL_REC_2856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2857(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2857_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2857_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2857_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2857_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2858
#define MACROLOP_PRIVATE_EVAL_REC_2857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2858(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2858_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2858_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2858_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2858_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2859
#define MACROLOP_PRIVATE_EVAL_REC_2858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2859(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2859_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2859_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2859_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2859_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2860
#define MACROLOP_PRIVATE_EVAL_REC_2859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2860(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2860_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2860_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2860_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2860_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2861
#define MACROLOP_PRIVATE_EVAL_REC_2860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2861(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2861_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2861_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2861_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2861_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2862
#define MACROLOP_PRIVATE_EVAL_REC_2861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2862(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2862_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2862_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2862_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2862_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2863
#define MACROLOP_PRIVATE_EVAL_REC_2862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2863(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2863_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2863_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2863_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2863_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2864
#define MACROLOP_PRIVATE_EVAL_REC_2863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2864(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2864_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2864_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2864_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2864_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2865
#define MACROLOP_PRIVATE_EVAL_REC_2864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2865(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2865_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2865_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2865_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2865_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2866
#define MACROLOP_PRIVATE_EVAL_REC_2865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2866(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2866_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2866_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2866_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2866_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2867
#define MACROLOP_PRIVATE_EVAL_REC_2866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2867(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2867_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2867_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2867_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2867_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2868
#define MACROLOP_PRIVATE_EVAL_REC_2867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2868(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2868_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2868_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2868_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2868_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2869
#define MACROLOP_PRIVATE_EVAL_REC_2868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2869(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2869_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2869_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2869_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2869_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2870
#define MACROLOP_PRIVATE_EVAL_REC_2869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2870(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2870_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2870_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2870_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2870_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2871
#define MACROLOP_PRIVATE_EVAL_REC_2870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2871(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2871_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2871_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2871_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2871_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2872
#define MACROLOP_PRIVATE_EVAL_REC_2871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2872(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2872_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2872_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2872_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2872_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2873
#define MACROLOP_PRIVATE_EVAL_REC_2872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2873(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2873_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2873_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2873_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2873_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2874
#define MACROLOP_PRIVATE_EVAL_REC_2873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2874(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2874_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2874_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2874_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2874_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2875
#define MACROLOP_PRIVATE_EVAL_REC_2874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2875(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2875_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2875_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2875_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2875_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2876
#define MACROLOP_PRIVATE_EVAL_REC_2875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2876(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2876_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2876_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2876_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2876_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2877
#define MACROLOP_PRIVATE_EVAL_REC_2876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2877(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2877_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2877_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2877_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2877_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2878
#define MACROLOP_PRIVATE_EVAL_REC_2877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2878(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2878_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2878_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2878_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2878_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2879
#define MACROLOP_PRIVATE_EVAL_REC_2878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2879(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2879_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2879_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2879_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2879_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2880
#define MACROLOP_PRIVATE_EVAL_REC_2879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2880(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2880_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2880_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2880_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2880_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2881
#define MACROLOP_PRIVATE_EVAL_REC_2880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2881(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2881_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2881_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2881_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2881_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2882
#define MACROLOP_PRIVATE_EVAL_REC_2881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2882(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2882_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2882_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2882_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2882_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2883
#define MACROLOP_PRIVATE_EVAL_REC_2882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2883(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2883_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2883_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2883_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2883_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2884
#define MACROLOP_PRIVATE_EVAL_REC_2883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2884(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2884_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2884_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2884_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2884_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2885
#define MACROLOP_PRIVATE_EVAL_REC_2884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2885(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2885_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2885_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2885_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2885_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2886
#define MACROLOP_PRIVATE_EVAL_REC_2885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2886(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2886_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2886_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2886_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2886_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2887
#define MACROLOP_PRIVATE_EVAL_REC_2886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2887(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2887_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2887_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2887_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2887_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2888
#define MACROLOP_PRIVATE_EVAL_REC_2887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2888(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2888_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2888_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2888_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2888_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2889
#define MACROLOP_PRIVATE_EVAL_REC_2888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2889(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2889_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2889_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2889_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2889_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2890
#define MACROLOP_PRIVATE_EVAL_REC_2889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2890(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2890_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2890_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2890_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2890_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2891
#define MACROLOP_PRIVATE_EVAL_REC_2890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2891(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2891_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2891_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2891_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2891_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2892
#define MACROLOP_PRIVATE_EVAL_REC_2891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2892(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2892_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2892_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2892_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2892_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2893
#define MACROLOP_PRIVATE_EVAL_REC_2892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2893(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2893_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2893_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2893_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2893_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2894
#define MACROLOP_PRIVATE_EVAL_REC_2893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2894(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2894_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2894_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2894_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2894_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2895
#define MACROLOP_PRIVATE_EVAL_REC_2894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2895(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2895_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2895_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2895_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2895_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2896
#define MACROLOP_PRIVATE_EVAL_REC_2895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2896(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2896_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2896_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2896_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2896_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2897
#define MACROLOP_PRIVATE_EVAL_REC_2896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2897(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2897_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2897_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2897_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2897_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2898
#define MACROLOP_PRIVATE_EVAL_REC_2897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2898(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2898_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2898_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2898_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2898_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2899
#define MACROLOP_PRIVATE_EVAL_REC_2898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2899(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2899_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2899_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2899_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2899_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2900
#define MACROLOP_PRIVATE_EVAL_REC_2899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2900(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2900_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2900_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2900_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2900_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2901
#define MACROLOP_PRIVATE_EVAL_REC_2900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2901(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2901_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2901_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2901_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2901_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2902
#define MACROLOP_PRIVATE_EVAL_REC_2901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2902(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2902_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2902_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2902_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2902_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2903
#define MACROLOP_PRIVATE_EVAL_REC_2902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2903(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2903_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2903_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2903_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2903_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2904
#define MACROLOP_PRIVATE_EVAL_REC_2903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2904(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2904_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2904_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2904_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2904_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2905
#define MACROLOP_PRIVATE_EVAL_REC_2904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2905(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2905_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2905_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2905_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2905_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2906
#define MACROLOP_PRIVATE_EVAL_REC_2905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2906(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2906_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2906_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2906_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2906_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2907
#define MACROLOP_PRIVATE_EVAL_REC_2906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2907(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2907_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2907_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2907_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2907_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2908
#define MACROLOP_PRIVATE_EVAL_REC_2907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2908(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2908_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2908_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2908_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2908_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2909
#define MACROLOP_PRIVATE_EVAL_REC_2908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2909(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2909_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2909_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2909_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2909_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2910
#define MACROLOP_PRIVATE_EVAL_REC_2909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2910(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2910_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2910_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2910_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2910_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2911
#define MACROLOP_PRIVATE_EVAL_REC_2910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2911(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2911_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2911_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2911_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2911_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2912
#define MACROLOP_PRIVATE_EVAL_REC_2911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2912(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2912_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2912_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2912_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2912_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2913
#define MACROLOP_PRIVATE_EVAL_REC_2912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2913(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2913_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2913_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2913_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2913_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2914
#define MACROLOP_PRIVATE_EVAL_REC_2913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2914(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2914_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2914_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2914_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2914_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2915
#define MACROLOP_PRIVATE_EVAL_REC_2914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2915(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2915_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2915_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2915_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2915_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2916
#define MACROLOP_PRIVATE_EVAL_REC_2915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2916(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2916_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2916_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2916_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2916_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2917
#define MACROLOP_PRIVATE_EVAL_REC_2916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2917(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2917_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2917_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2917_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2917_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2918
#define MACROLOP_PRIVATE_EVAL_REC_2917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2918(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2918_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2918_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2918_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2918_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2919
#define MACROLOP_PRIVATE_EVAL_REC_2918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2919(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2919_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2919_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2919_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2919_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2920
#define MACROLOP_PRIVATE_EVAL_REC_2919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2920(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2920_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2920_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2920_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2920_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2921
#define MACROLOP_PRIVATE_EVAL_REC_2920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2921(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2921_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2921_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2921_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2921_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2922
#define MACROLOP_PRIVATE_EVAL_REC_2921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2922(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2922_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2922_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2922_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2922_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2923
#define MACROLOP_PRIVATE_EVAL_REC_2922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2923(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2923_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2923_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2923_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2923_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2924
#define MACROLOP_PRIVATE_EVAL_REC_2923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2924(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2924_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2924_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2924_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2924_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2925
#define MACROLOP_PRIVATE_EVAL_REC_2924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2925(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2925_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2925_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2925_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2925_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2926
#define MACROLOP_PRIVATE_EVAL_REC_2925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2926(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2926_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2926_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2926_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2926_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2927
#define MACROLOP_PRIVATE_EVAL_REC_2926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2927(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2927_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2927_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2927_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2927_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2928
#define MACROLOP_PRIVATE_EVAL_REC_2927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2928(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2928_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2928_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2928_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2928_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2929
#define MACROLOP_PRIVATE_EVAL_REC_2928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2929(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2929_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2929_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2929_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2929_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2930
#define MACROLOP_PRIVATE_EVAL_REC_2929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2930(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2930_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2930_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2930_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2930_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2931
#define MACROLOP_PRIVATE_EVAL_REC_2930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2931(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2931_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2931_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2931_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2931_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2932
#define MACROLOP_PRIVATE_EVAL_REC_2931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2932(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2932_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2932_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2932_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2932_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2933
#define MACROLOP_PRIVATE_EVAL_REC_2932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2933(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2933_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2933_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2933_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2933_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2934
#define MACROLOP_PRIVATE_EVAL_REC_2933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2934(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2934_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2934_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2934_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2934_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2935
#define MACROLOP_PRIVATE_EVAL_REC_2934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2935(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2935_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2935_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2935_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2935_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2936
#define MACROLOP_PRIVATE_EVAL_REC_2935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2936(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2936_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2936_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2936_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2936_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2937
#define MACROLOP_PRIVATE_EVAL_REC_2936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2937(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2937_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2937_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2937_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2937_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2938
#define MACROLOP_PRIVATE_EVAL_REC_2937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2938(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2938_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2938_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2938_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2938_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2939
#define MACROLOP_PRIVATE_EVAL_REC_2938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2939(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2939_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2939_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2939_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2939_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2940
#define MACROLOP_PRIVATE_EVAL_REC_2939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2940(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2940_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2940_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2940_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2940_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2941
#define MACROLOP_PRIVATE_EVAL_REC_2940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2941(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2941_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2941_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2941_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2941_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2942
#define MACROLOP_PRIVATE_EVAL_REC_2941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2942(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2942_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2942_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2942_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2942_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2943
#define MACROLOP_PRIVATE_EVAL_REC_2942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2943(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2943_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2943_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2943_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2943_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2944
#define MACROLOP_PRIVATE_EVAL_REC_2943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2944(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2944_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2944_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2944_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2944_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2945
#define MACROLOP_PRIVATE_EVAL_REC_2944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2945(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2945_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2945_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2945_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2945_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2946
#define MACROLOP_PRIVATE_EVAL_REC_2945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2946(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2946_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2946_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2946_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2946_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2947
#define MACROLOP_PRIVATE_EVAL_REC_2946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2947(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2947_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2947_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2947_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2947_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2948
#define MACROLOP_PRIVATE_EVAL_REC_2947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2948(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2948_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2948_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2948_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2948_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2949
#define MACROLOP_PRIVATE_EVAL_REC_2948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2949(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2949_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2949_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2949_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2949_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2950
#define MACROLOP_PRIVATE_EVAL_REC_2949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2950(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2950_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2950_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2950_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2950_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2951
#define MACROLOP_PRIVATE_EVAL_REC_2950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2951(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2951_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2951_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2951_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2951_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2952
#define MACROLOP_PRIVATE_EVAL_REC_2951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2952(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2952_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2952_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2952_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2952_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2953
#define MACROLOP_PRIVATE_EVAL_REC_2952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2953(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2953_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2953_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2953_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2953_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2954
#define MACROLOP_PRIVATE_EVAL_REC_2953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2954(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2954_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2954_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2954_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2954_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2955
#define MACROLOP_PRIVATE_EVAL_REC_2954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2955(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2955_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2955_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2955_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2955_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2956
#define MACROLOP_PRIVATE_EVAL_REC_2955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2956(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2956_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2956_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2956_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2956_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2957
#define MACROLOP_PRIVATE_EVAL_REC_2956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2957(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2957_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2957_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2957_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2957_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2958
#define MACROLOP_PRIVATE_EVAL_REC_2957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2958(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2958_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2958_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2958_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2958_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2959
#define MACROLOP_PRIVATE_EVAL_REC_2958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2959(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2959_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2959_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2959_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2959_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2960
#define MACROLOP_PRIVATE_EVAL_REC_2959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2960(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2960_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2960_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2960_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2960_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2961
#define MACROLOP_PRIVATE_EVAL_REC_2960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2961(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2961_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2961_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2961_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2961_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2962
#define MACROLOP_PRIVATE_EVAL_REC_2961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2962(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2962_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2962_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2962_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2962_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2963
#define MACROLOP_PRIVATE_EVAL_REC_2962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2963(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2963_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2963_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2963_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2963_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2964
#define MACROLOP_PRIVATE_EVAL_REC_2963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2964(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2964_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2964_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2964_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2964_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2965
#define MACROLOP_PRIVATE_EVAL_REC_2964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2965(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2965_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2965_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2965_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2965_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2966
#define MACROLOP_PRIVATE_EVAL_REC_2965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2966(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2966_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2966_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2966_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2966_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2967
#define MACROLOP_PRIVATE_EVAL_REC_2966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2967(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2967_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2967_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2967_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2967_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2968
#define MACROLOP_PRIVATE_EVAL_REC_2967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2968(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2968_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2968_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2968_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2968_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2969
#define MACROLOP_PRIVATE_EVAL_REC_2968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2969(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2969_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2969_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2969_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2969_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2970
#define MACROLOP_PRIVATE_EVAL_REC_2969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2970(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2970_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2970_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2970_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2970_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2971
#define MACROLOP_PRIVATE_EVAL_REC_2970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2971(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2971_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2971_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2971_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2971_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2972
#define MACROLOP_PRIVATE_EVAL_REC_2971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2972(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2972_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2972_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2972_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2972_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2973
#define MACROLOP_PRIVATE_EVAL_REC_2972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2973(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2973_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2973_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2973_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2973_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2974
#define MACROLOP_PRIVATE_EVAL_REC_2973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2974(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2974_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2974_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2974_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2974_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2975
#define MACROLOP_PRIVATE_EVAL_REC_2974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2975(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2975_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2975_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2975_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2975_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2976
#define MACROLOP_PRIVATE_EVAL_REC_2975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2976(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2976_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2976_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2976_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2976_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2977
#define MACROLOP_PRIVATE_EVAL_REC_2976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2977(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2977_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2977_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2977_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2977_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2978
#define MACROLOP_PRIVATE_EVAL_REC_2977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2978(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2978_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2978_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2978_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2978_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2979
#define MACROLOP_PRIVATE_EVAL_REC_2978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2979(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2979_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2979_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2979_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2979_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2980
#define MACROLOP_PRIVATE_EVAL_REC_2979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2980(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2980_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2980_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2980_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2980_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2981
#define MACROLOP_PRIVATE_EVAL_REC_2980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2981(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2981_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2981_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2981_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2981_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2982
#define MACROLOP_PRIVATE_EVAL_REC_2981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2982(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2982_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2982_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2982_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2982_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2983
#define MACROLOP_PRIVATE_EVAL_REC_2982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2983(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2983_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2983_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2983_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2983_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2984
#define MACROLOP_PRIVATE_EVAL_REC_2983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2984(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2984_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2984_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2984_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2984_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2985
#define MACROLOP_PRIVATE_EVAL_REC_2984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2985(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2985_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2985_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2985_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2985_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2986
#define MACROLOP_PRIVATE_EVAL_REC_2985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2986(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2986_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2986_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2986_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2986_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2987
#define MACROLOP_PRIVATE_EVAL_REC_2986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2987(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2987_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2987_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2987_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2987_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2988
#define MACROLOP_PRIVATE_EVAL_REC_2987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2988(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2988_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2988_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2988_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2988_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2989
#define MACROLOP_PRIVATE_EVAL_REC_2988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2989(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2989_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2989_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2989_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2989_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2990
#define MACROLOP_PRIVATE_EVAL_REC_2989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2990(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2990_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2990_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2990_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2990_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2991
#define MACROLOP_PRIVATE_EVAL_REC_2990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2991(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2991_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2991_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2991_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2991_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2992
#define MACROLOP_PRIVATE_EVAL_REC_2991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2992(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2992_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2992_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2992_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2992_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2993
#define MACROLOP_PRIVATE_EVAL_REC_2992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2993(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2993_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2993_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2993_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2993_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2994
#define MACROLOP_PRIVATE_EVAL_REC_2993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2994(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2994_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2994_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2994_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2994_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2995
#define MACROLOP_PRIVATE_EVAL_REC_2994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2995(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2995_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2995_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2995_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2995_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2996
#define MACROLOP_PRIVATE_EVAL_REC_2995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2996(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2996_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2996_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2996_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2996_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2997
#define MACROLOP_PRIVATE_EVAL_REC_2996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2997(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2997_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2997_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2997_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2997_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2998
#define MACROLOP_PRIVATE_EVAL_REC_2997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2998(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2998_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2998_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2998_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2998_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_2999
#define MACROLOP_PRIVATE_EVAL_REC_2998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_2999(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_2999_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_2999_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_2999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_2999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_2999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_2999_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_2999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_2999_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_2999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_2999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3000
#define MACROLOP_PRIVATE_EVAL_REC_2999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3000(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3000_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3000_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3000_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3000_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3001
#define MACROLOP_PRIVATE_EVAL_REC_3000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3001(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3001_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3001_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3001_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3001_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3002
#define MACROLOP_PRIVATE_EVAL_REC_3001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3002(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3002_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3002_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3002_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3002_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3003
#define MACROLOP_PRIVATE_EVAL_REC_3002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3003(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3003_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3003_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3003_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3003_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3004
#define MACROLOP_PRIVATE_EVAL_REC_3003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3004(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3004_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3004_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3004_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3004_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3005
#define MACROLOP_PRIVATE_EVAL_REC_3004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3005(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3005_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3005_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3005_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3005_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3006
#define MACROLOP_PRIVATE_EVAL_REC_3005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3006(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3006_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3006_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3006_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3006_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3007
#define MACROLOP_PRIVATE_EVAL_REC_3006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3007(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3007_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3007_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3007_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3007_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3008
#define MACROLOP_PRIVATE_EVAL_REC_3007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3008(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3008_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3008_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3008_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3008_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3009
#define MACROLOP_PRIVATE_EVAL_REC_3008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3009(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3009_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3009_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3009_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3009_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3010
#define MACROLOP_PRIVATE_EVAL_REC_3009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3010(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3010_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3010_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3010_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3010_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3011
#define MACROLOP_PRIVATE_EVAL_REC_3010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3011(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3011_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3011_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3011_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3011_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3012
#define MACROLOP_PRIVATE_EVAL_REC_3011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3012(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3012_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3012_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3012_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3012_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3013
#define MACROLOP_PRIVATE_EVAL_REC_3012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3013(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3013_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3013_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3013_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3013_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3014
#define MACROLOP_PRIVATE_EVAL_REC_3013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3014(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3014_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3014_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3014_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3014_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3015
#define MACROLOP_PRIVATE_EVAL_REC_3014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3015(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3015_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3015_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3015_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3015_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3016
#define MACROLOP_PRIVATE_EVAL_REC_3015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3016(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3016_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3016_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3016_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3016_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3017
#define MACROLOP_PRIVATE_EVAL_REC_3016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3017(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3017_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3017_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3017_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3017_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3018
#define MACROLOP_PRIVATE_EVAL_REC_3017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3018(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3018_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3018_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3018_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3018_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3019
#define MACROLOP_PRIVATE_EVAL_REC_3018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3019(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3019_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3019_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3019_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3019_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3020
#define MACROLOP_PRIVATE_EVAL_REC_3019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3020(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3020_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3020_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3020_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3020_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3021
#define MACROLOP_PRIVATE_EVAL_REC_3020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3021(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3021_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3021_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3021_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3021_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3022
#define MACROLOP_PRIVATE_EVAL_REC_3021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3022(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3022_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3022_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3022_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3022_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3023
#define MACROLOP_PRIVATE_EVAL_REC_3022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3023(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3023_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3023_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3023_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3023_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3024
#define MACROLOP_PRIVATE_EVAL_REC_3023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3024(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3024_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3024_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3024_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3024_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3025
#define MACROLOP_PRIVATE_EVAL_REC_3024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3025(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3025_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3025_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3025_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3025_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3026
#define MACROLOP_PRIVATE_EVAL_REC_3025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3026(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3026_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3026_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3026_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3026_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3027
#define MACROLOP_PRIVATE_EVAL_REC_3026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3027(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3027_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3027_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3027_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3027_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3028
#define MACROLOP_PRIVATE_EVAL_REC_3027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3028(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3028_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3028_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3028_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3028_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3029
#define MACROLOP_PRIVATE_EVAL_REC_3028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3029(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3029_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3029_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3029_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3029_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3030
#define MACROLOP_PRIVATE_EVAL_REC_3029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3030(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3030_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3030_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3030_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3030_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3031
#define MACROLOP_PRIVATE_EVAL_REC_3030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3031(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3031_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3031_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3031_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3031_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3032
#define MACROLOP_PRIVATE_EVAL_REC_3031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3032(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3032_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3032_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3032_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3032_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3033
#define MACROLOP_PRIVATE_EVAL_REC_3032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3033(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3033_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3033_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3033_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3033_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3034
#define MACROLOP_PRIVATE_EVAL_REC_3033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3034(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3034_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3034_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3034_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3034_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3035
#define MACROLOP_PRIVATE_EVAL_REC_3034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3035(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3035_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3035_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3035_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3035_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3036
#define MACROLOP_PRIVATE_EVAL_REC_3035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3036(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3036_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3036_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3036_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3036_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3037
#define MACROLOP_PRIVATE_EVAL_REC_3036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3037(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3037_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3037_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3037_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3037_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3038
#define MACROLOP_PRIVATE_EVAL_REC_3037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3038(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3038_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3038_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3038_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3038_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3039
#define MACROLOP_PRIVATE_EVAL_REC_3038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3039(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3039_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3039_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3039_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3039_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3040
#define MACROLOP_PRIVATE_EVAL_REC_3039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3040(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3040_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3040_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3040_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3040_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3041
#define MACROLOP_PRIVATE_EVAL_REC_3040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3041(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3041_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3041_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3041_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3041_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3042
#define MACROLOP_PRIVATE_EVAL_REC_3041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3042(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3042_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3042_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3042_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3042_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3043
#define MACROLOP_PRIVATE_EVAL_REC_3042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3043(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3043_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3043_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3043_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3043_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3044
#define MACROLOP_PRIVATE_EVAL_REC_3043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3044(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3044_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3044_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3044_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3044_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3045
#define MACROLOP_PRIVATE_EVAL_REC_3044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3045(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3045_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3045_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3045_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3045_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3046
#define MACROLOP_PRIVATE_EVAL_REC_3045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3046(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3046_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3046_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3046_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3046_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3047
#define MACROLOP_PRIVATE_EVAL_REC_3046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3047(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3047_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3047_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3047_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3047_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3048
#define MACROLOP_PRIVATE_EVAL_REC_3047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3048(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3048_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3048_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3048_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3048_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3049
#define MACROLOP_PRIVATE_EVAL_REC_3048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3049(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3049_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3049_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3049_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3049_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3050
#define MACROLOP_PRIVATE_EVAL_REC_3049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3050(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3050_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3050_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3050_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3050_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3051
#define MACROLOP_PRIVATE_EVAL_REC_3050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3051(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3051_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3051_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3051_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3051_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3052
#define MACROLOP_PRIVATE_EVAL_REC_3051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3052(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3052_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3052_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3052_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3052_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3053
#define MACROLOP_PRIVATE_EVAL_REC_3052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3053(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3053_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3053_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3053_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3053_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3054
#define MACROLOP_PRIVATE_EVAL_REC_3053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3054(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3054_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3054_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3054_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3054_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3055
#define MACROLOP_PRIVATE_EVAL_REC_3054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3055(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3055_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3055_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3055_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3055_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3056
#define MACROLOP_PRIVATE_EVAL_REC_3055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3056(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3056_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3056_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3056_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3056_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3057
#define MACROLOP_PRIVATE_EVAL_REC_3056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3057(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3057_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3057_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3057_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3057_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3058
#define MACROLOP_PRIVATE_EVAL_REC_3057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3058(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3058_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3058_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3058_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3058_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3059
#define MACROLOP_PRIVATE_EVAL_REC_3058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3059(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3059_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3059_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3059_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3059_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3060
#define MACROLOP_PRIVATE_EVAL_REC_3059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3060(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3060_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3060_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3060_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3060_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3061
#define MACROLOP_PRIVATE_EVAL_REC_3060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3061(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3061_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3061_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3061_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3061_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3062
#define MACROLOP_PRIVATE_EVAL_REC_3061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3062(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3062_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3062_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3062_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3062_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3063
#define MACROLOP_PRIVATE_EVAL_REC_3062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3063(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3063_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3063_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3063_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3063_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3064
#define MACROLOP_PRIVATE_EVAL_REC_3063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3064(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3064_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3064_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3064_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3064_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3065
#define MACROLOP_PRIVATE_EVAL_REC_3064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3065(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3065_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3065_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3065_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3065_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3066
#define MACROLOP_PRIVATE_EVAL_REC_3065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3066(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3066_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3066_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3066_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3066_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3067
#define MACROLOP_PRIVATE_EVAL_REC_3066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3067(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3067_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3067_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3067_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3067_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3068
#define MACROLOP_PRIVATE_EVAL_REC_3067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3068(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3068_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3068_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3068_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3068_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3069
#define MACROLOP_PRIVATE_EVAL_REC_3068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3069(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3069_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3069_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3069_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3069_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3070
#define MACROLOP_PRIVATE_EVAL_REC_3069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3070(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3070_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3070_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3070_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3070_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3071
#define MACROLOP_PRIVATE_EVAL_REC_3070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_3071(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_3071_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_3071_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_3071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_3071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_3071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_3071_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_3071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_3071_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_3071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_3071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_3072
#define MACROLOP_PRIVATE_EVAL_REC_3071_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_2048_TO_3071_H
