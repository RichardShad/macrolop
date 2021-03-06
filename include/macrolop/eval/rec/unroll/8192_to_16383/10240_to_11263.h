#ifndef MACROLOP_EVAL_REC_UNROLL_10240_TO_11263_H
#define MACROLOP_EVAL_REC_UNROLL_10240_TO_11263_H

#define MACROLOP_PRIVATE_EVAL_REC_10240(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10240_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10240_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10240_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10240_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10241
#define MACROLOP_PRIVATE_EVAL_REC_10240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10241(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10241_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10241_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10241_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10241_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10242
#define MACROLOP_PRIVATE_EVAL_REC_10241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10242(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10242_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10242_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10242_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10242_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10243
#define MACROLOP_PRIVATE_EVAL_REC_10242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10243(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10243_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10243_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10243_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10243_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10244
#define MACROLOP_PRIVATE_EVAL_REC_10243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10244(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10244_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10244_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10244_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10244_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10245
#define MACROLOP_PRIVATE_EVAL_REC_10244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10245(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10245_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10245_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10245_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10245_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10246
#define MACROLOP_PRIVATE_EVAL_REC_10245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10246(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10246_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10246_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10246_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10246_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10247
#define MACROLOP_PRIVATE_EVAL_REC_10246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10247(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10247_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10247_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10247_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10247_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10248
#define MACROLOP_PRIVATE_EVAL_REC_10247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10248(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10248_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10248_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10248_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10248_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10249
#define MACROLOP_PRIVATE_EVAL_REC_10248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10249(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10249_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10249_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10249_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10249_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10250
#define MACROLOP_PRIVATE_EVAL_REC_10249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10250(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10250_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10250_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10250_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10250_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10251
#define MACROLOP_PRIVATE_EVAL_REC_10250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10251(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10251_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10251_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10251_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10251_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10252
#define MACROLOP_PRIVATE_EVAL_REC_10251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10252(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10252_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10252_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10252_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10252_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10253
#define MACROLOP_PRIVATE_EVAL_REC_10252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10253(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10253_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10253_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10253_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10253_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10254
#define MACROLOP_PRIVATE_EVAL_REC_10253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10254(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10254_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10254_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10254_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10254_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10255
#define MACROLOP_PRIVATE_EVAL_REC_10254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10255(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10255_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10255_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10255_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10255_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10256
#define MACROLOP_PRIVATE_EVAL_REC_10255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10256(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10256_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10256_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10256_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10256_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10257
#define MACROLOP_PRIVATE_EVAL_REC_10256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10257(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10257_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10257_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10257_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10257_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10258
#define MACROLOP_PRIVATE_EVAL_REC_10257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10258(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10258_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10258_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10258_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10258_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10259
#define MACROLOP_PRIVATE_EVAL_REC_10258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10259(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10259_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10259_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10259_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10259_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10260
#define MACROLOP_PRIVATE_EVAL_REC_10259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10260(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10260_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10260_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10260_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10260_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10261
#define MACROLOP_PRIVATE_EVAL_REC_10260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10261(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10261_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10261_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10261_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10261_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10262
#define MACROLOP_PRIVATE_EVAL_REC_10261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10262(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10262_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10262_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10262_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10262_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10263
#define MACROLOP_PRIVATE_EVAL_REC_10262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10263(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10263_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10263_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10263_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10263_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10264
#define MACROLOP_PRIVATE_EVAL_REC_10263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10264(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10264_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10264_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10264_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10264_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10265
#define MACROLOP_PRIVATE_EVAL_REC_10264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10265(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10265_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10265_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10265_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10265_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10266
#define MACROLOP_PRIVATE_EVAL_REC_10265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10266(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10266_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10266_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10266_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10266_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10267
#define MACROLOP_PRIVATE_EVAL_REC_10266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10267(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10267_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10267_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10267_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10267_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10268
#define MACROLOP_PRIVATE_EVAL_REC_10267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10268(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10268_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10268_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10268_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10268_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10269
#define MACROLOP_PRIVATE_EVAL_REC_10268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10269(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10269_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10269_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10269_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10269_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10270
#define MACROLOP_PRIVATE_EVAL_REC_10269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10270(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10270_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10270_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10270_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10270_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10271
#define MACROLOP_PRIVATE_EVAL_REC_10270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10271(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10271_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10271_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10271_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10271_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10272
#define MACROLOP_PRIVATE_EVAL_REC_10271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10272(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10272_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10272_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10272_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10272_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10273
#define MACROLOP_PRIVATE_EVAL_REC_10272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10273(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10273_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10273_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10273_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10273_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10274
#define MACROLOP_PRIVATE_EVAL_REC_10273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10274(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10274_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10274_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10274_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10274_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10275
#define MACROLOP_PRIVATE_EVAL_REC_10274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10275(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10275_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10275_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10275_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10275_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10276
#define MACROLOP_PRIVATE_EVAL_REC_10275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10276(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10276_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10276_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10276_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10276_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10277
#define MACROLOP_PRIVATE_EVAL_REC_10276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10277(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10277_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10277_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10277_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10277_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10278
#define MACROLOP_PRIVATE_EVAL_REC_10277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10278(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10278_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10278_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10278_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10278_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10279
#define MACROLOP_PRIVATE_EVAL_REC_10278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10279(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10279_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10279_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10279_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10279_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10280
#define MACROLOP_PRIVATE_EVAL_REC_10279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10280(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10280_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10280_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10280_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10280_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10281
#define MACROLOP_PRIVATE_EVAL_REC_10280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10281(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10281_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10281_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10281_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10281_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10282
#define MACROLOP_PRIVATE_EVAL_REC_10281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10282(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10282_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10282_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10282_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10282_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10283
#define MACROLOP_PRIVATE_EVAL_REC_10282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10283(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10283_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10283_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10283_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10283_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10284
#define MACROLOP_PRIVATE_EVAL_REC_10283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10284(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10284_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10284_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10284_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10284_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10285
#define MACROLOP_PRIVATE_EVAL_REC_10284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10285(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10285_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10285_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10285_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10285_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10286
#define MACROLOP_PRIVATE_EVAL_REC_10285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10286(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10286_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10286_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10286_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10286_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10287
#define MACROLOP_PRIVATE_EVAL_REC_10286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10287(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10287_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10287_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10287_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10287_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10288
#define MACROLOP_PRIVATE_EVAL_REC_10287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10288(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10288_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10288_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10288_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10288_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10289
#define MACROLOP_PRIVATE_EVAL_REC_10288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10289(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10289_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10289_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10289_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10289_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10290
#define MACROLOP_PRIVATE_EVAL_REC_10289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10290(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10290_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10290_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10290_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10290_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10291
#define MACROLOP_PRIVATE_EVAL_REC_10290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10291(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10291_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10291_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10291_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10291_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10292
#define MACROLOP_PRIVATE_EVAL_REC_10291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10292(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10292_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10292_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10292_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10292_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10293
#define MACROLOP_PRIVATE_EVAL_REC_10292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10293(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10293_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10293_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10293_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10293_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10294
#define MACROLOP_PRIVATE_EVAL_REC_10293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10294(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10294_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10294_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10294_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10294_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10295
#define MACROLOP_PRIVATE_EVAL_REC_10294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10295(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10295_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10295_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10295_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10295_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10296
#define MACROLOP_PRIVATE_EVAL_REC_10295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10296(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10296_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10296_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10296_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10296_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10297
#define MACROLOP_PRIVATE_EVAL_REC_10296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10297(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10297_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10297_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10297_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10297_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10298
#define MACROLOP_PRIVATE_EVAL_REC_10297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10298(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10298_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10298_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10298_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10298_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10299
#define MACROLOP_PRIVATE_EVAL_REC_10298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10299(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10299_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10299_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10299_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10299_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10300
#define MACROLOP_PRIVATE_EVAL_REC_10299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10300(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10300_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10300_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10300_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10300_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10301
#define MACROLOP_PRIVATE_EVAL_REC_10300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10301(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10301_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10301_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10301_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10301_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10302
#define MACROLOP_PRIVATE_EVAL_REC_10301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10302(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10302_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10302_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10302_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10302_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10303
#define MACROLOP_PRIVATE_EVAL_REC_10302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10303(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10303_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10303_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10303_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10303_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10304
#define MACROLOP_PRIVATE_EVAL_REC_10303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10304(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10304_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10304_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10304_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10304_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10305
#define MACROLOP_PRIVATE_EVAL_REC_10304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10305(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10305_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10305_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10305_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10305_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10306
#define MACROLOP_PRIVATE_EVAL_REC_10305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10306(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10306_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10306_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10306_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10306_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10307
#define MACROLOP_PRIVATE_EVAL_REC_10306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10307(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10307_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10307_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10307_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10307_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10308
#define MACROLOP_PRIVATE_EVAL_REC_10307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10308(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10308_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10308_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10308_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10308_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10309
#define MACROLOP_PRIVATE_EVAL_REC_10308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10309(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10309_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10309_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10309_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10309_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10310
#define MACROLOP_PRIVATE_EVAL_REC_10309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10310(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10310_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10310_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10310_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10310_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10311
#define MACROLOP_PRIVATE_EVAL_REC_10310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10311(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10311_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10311_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10311_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10311_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10312
#define MACROLOP_PRIVATE_EVAL_REC_10311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10312(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10312_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10312_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10312_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10312_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10313
#define MACROLOP_PRIVATE_EVAL_REC_10312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10313(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10313_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10313_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10313_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10313_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10314
#define MACROLOP_PRIVATE_EVAL_REC_10313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10314(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10314_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10314_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10314_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10314_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10315
#define MACROLOP_PRIVATE_EVAL_REC_10314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10315(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10315_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10315_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10315_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10315_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10316
#define MACROLOP_PRIVATE_EVAL_REC_10315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10316(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10316_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10316_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10316_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10316_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10317
#define MACROLOP_PRIVATE_EVAL_REC_10316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10317(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10317_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10317_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10317_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10317_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10318
#define MACROLOP_PRIVATE_EVAL_REC_10317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10318(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10318_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10318_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10318_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10318_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10319
#define MACROLOP_PRIVATE_EVAL_REC_10318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10319(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10319_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10319_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10319_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10319_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10320
#define MACROLOP_PRIVATE_EVAL_REC_10319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10320(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10320_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10320_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10320_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10320_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10321
#define MACROLOP_PRIVATE_EVAL_REC_10320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10321(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10321_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10321_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10321_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10321_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10322
#define MACROLOP_PRIVATE_EVAL_REC_10321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10322(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10322_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10322_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10322_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10322_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10323
#define MACROLOP_PRIVATE_EVAL_REC_10322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10323(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10323_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10323_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10323_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10323_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10324
#define MACROLOP_PRIVATE_EVAL_REC_10323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10324(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10324_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10324_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10324_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10324_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10325
#define MACROLOP_PRIVATE_EVAL_REC_10324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10325(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10325_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10325_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10325_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10325_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10326
#define MACROLOP_PRIVATE_EVAL_REC_10325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10326(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10326_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10326_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10326_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10326_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10327
#define MACROLOP_PRIVATE_EVAL_REC_10326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10327(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10327_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10327_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10327_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10327_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10328
#define MACROLOP_PRIVATE_EVAL_REC_10327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10328(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10328_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10328_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10328_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10328_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10329
#define MACROLOP_PRIVATE_EVAL_REC_10328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10329(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10329_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10329_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10329_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10329_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10330
#define MACROLOP_PRIVATE_EVAL_REC_10329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10330(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10330_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10330_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10330_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10330_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10331
#define MACROLOP_PRIVATE_EVAL_REC_10330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10331(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10331_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10331_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10331_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10331_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10332
#define MACROLOP_PRIVATE_EVAL_REC_10331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10332(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10332_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10332_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10332_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10332_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10333
#define MACROLOP_PRIVATE_EVAL_REC_10332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10333(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10333_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10333_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10333_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10333_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10334
#define MACROLOP_PRIVATE_EVAL_REC_10333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10334(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10334_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10334_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10334_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10334_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10335
#define MACROLOP_PRIVATE_EVAL_REC_10334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10335(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10335_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10335_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10335_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10335_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10336
#define MACROLOP_PRIVATE_EVAL_REC_10335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10336(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10336_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10336_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10336_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10336_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10337
#define MACROLOP_PRIVATE_EVAL_REC_10336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10337(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10337_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10337_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10337_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10337_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10338
#define MACROLOP_PRIVATE_EVAL_REC_10337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10338(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10338_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10338_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10338_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10338_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10339
#define MACROLOP_PRIVATE_EVAL_REC_10338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10339(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10339_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10339_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10339_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10339_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10340
#define MACROLOP_PRIVATE_EVAL_REC_10339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10340(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10340_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10340_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10340_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10340_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10341
#define MACROLOP_PRIVATE_EVAL_REC_10340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10341(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10341_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10341_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10341_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10341_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10342
#define MACROLOP_PRIVATE_EVAL_REC_10341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10342(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10342_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10342_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10342_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10342_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10343
#define MACROLOP_PRIVATE_EVAL_REC_10342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10343(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10343_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10343_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10343_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10343_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10344
#define MACROLOP_PRIVATE_EVAL_REC_10343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10344(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10344_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10344_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10344_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10344_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10345
#define MACROLOP_PRIVATE_EVAL_REC_10344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10345(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10345_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10345_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10345_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10345_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10346
#define MACROLOP_PRIVATE_EVAL_REC_10345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10346(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10346_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10346_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10346_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10346_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10347
#define MACROLOP_PRIVATE_EVAL_REC_10346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10347(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10347_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10347_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10347_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10347_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10348
#define MACROLOP_PRIVATE_EVAL_REC_10347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10348(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10348_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10348_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10348_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10348_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10349
#define MACROLOP_PRIVATE_EVAL_REC_10348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10349(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10349_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10349_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10349_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10349_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10350
#define MACROLOP_PRIVATE_EVAL_REC_10349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10350(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10350_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10350_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10350_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10350_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10351
#define MACROLOP_PRIVATE_EVAL_REC_10350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10351(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10351_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10351_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10351_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10351_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10352
#define MACROLOP_PRIVATE_EVAL_REC_10351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10352(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10352_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10352_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10352_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10352_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10353
#define MACROLOP_PRIVATE_EVAL_REC_10352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10353(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10353_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10353_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10353_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10353_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10354
#define MACROLOP_PRIVATE_EVAL_REC_10353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10354(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10354_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10354_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10354_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10354_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10355
#define MACROLOP_PRIVATE_EVAL_REC_10354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10355(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10355_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10355_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10355_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10355_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10356
#define MACROLOP_PRIVATE_EVAL_REC_10355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10356(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10356_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10356_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10356_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10356_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10357
#define MACROLOP_PRIVATE_EVAL_REC_10356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10357(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10357_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10357_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10357_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10357_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10358
#define MACROLOP_PRIVATE_EVAL_REC_10357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10358(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10358_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10358_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10358_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10358_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10359
#define MACROLOP_PRIVATE_EVAL_REC_10358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10359(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10359_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10359_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10359_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10359_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10360
#define MACROLOP_PRIVATE_EVAL_REC_10359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10360(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10360_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10360_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10360_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10360_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10361
#define MACROLOP_PRIVATE_EVAL_REC_10360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10361(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10361_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10361_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10361_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10361_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10362
#define MACROLOP_PRIVATE_EVAL_REC_10361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10362(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10362_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10362_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10362_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10362_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10363
#define MACROLOP_PRIVATE_EVAL_REC_10362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10363(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10363_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10363_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10363_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10363_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10364
#define MACROLOP_PRIVATE_EVAL_REC_10363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10364(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10364_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10364_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10364_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10364_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10365
#define MACROLOP_PRIVATE_EVAL_REC_10364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10365(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10365_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10365_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10365_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10365_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10366
#define MACROLOP_PRIVATE_EVAL_REC_10365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10366(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10366_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10366_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10366_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10366_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10367
#define MACROLOP_PRIVATE_EVAL_REC_10366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10367(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10367_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10367_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10367_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10367_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10368
#define MACROLOP_PRIVATE_EVAL_REC_10367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10368(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10368_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10368_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10368_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10368_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10369
#define MACROLOP_PRIVATE_EVAL_REC_10368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10369(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10369_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10369_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10369_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10369_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10370
#define MACROLOP_PRIVATE_EVAL_REC_10369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10370(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10370_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10370_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10370_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10370_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10371
#define MACROLOP_PRIVATE_EVAL_REC_10370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10371(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10371_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10371_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10371_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10371_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10372
#define MACROLOP_PRIVATE_EVAL_REC_10371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10372(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10372_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10372_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10372_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10372_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10373
#define MACROLOP_PRIVATE_EVAL_REC_10372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10373(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10373_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10373_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10373_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10373_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10374
#define MACROLOP_PRIVATE_EVAL_REC_10373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10374(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10374_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10374_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10374_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10374_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10375
#define MACROLOP_PRIVATE_EVAL_REC_10374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10375(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10375_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10375_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10375_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10375_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10376
#define MACROLOP_PRIVATE_EVAL_REC_10375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10376(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10376_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10376_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10376_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10376_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10377
#define MACROLOP_PRIVATE_EVAL_REC_10376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10377(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10377_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10377_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10377_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10377_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10378
#define MACROLOP_PRIVATE_EVAL_REC_10377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10378(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10378_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10378_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10378_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10378_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10379
#define MACROLOP_PRIVATE_EVAL_REC_10378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10379(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10379_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10379_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10379_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10379_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10380
#define MACROLOP_PRIVATE_EVAL_REC_10379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10380(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10380_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10380_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10380_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10380_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10381
#define MACROLOP_PRIVATE_EVAL_REC_10380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10381(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10381_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10381_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10381_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10381_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10382
#define MACROLOP_PRIVATE_EVAL_REC_10381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10382(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10382_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10382_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10382_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10382_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10383
#define MACROLOP_PRIVATE_EVAL_REC_10382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10383(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10383_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10383_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10383_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10383_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10384
#define MACROLOP_PRIVATE_EVAL_REC_10383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10384(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10384_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10384_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10384_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10384_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10385
#define MACROLOP_PRIVATE_EVAL_REC_10384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10385(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10385_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10385_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10385_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10385_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10386
#define MACROLOP_PRIVATE_EVAL_REC_10385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10386(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10386_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10386_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10386_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10386_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10387
#define MACROLOP_PRIVATE_EVAL_REC_10386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10387(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10387_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10387_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10387_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10387_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10388
#define MACROLOP_PRIVATE_EVAL_REC_10387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10388(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10388_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10388_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10388_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10388_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10389
#define MACROLOP_PRIVATE_EVAL_REC_10388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10389(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10389_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10389_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10389_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10389_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10390
#define MACROLOP_PRIVATE_EVAL_REC_10389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10390(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10390_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10390_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10390_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10390_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10391
#define MACROLOP_PRIVATE_EVAL_REC_10390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10391(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10391_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10391_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10391_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10391_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10392
#define MACROLOP_PRIVATE_EVAL_REC_10391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10392(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10392_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10392_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10392_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10392_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10393
#define MACROLOP_PRIVATE_EVAL_REC_10392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10393(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10393_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10393_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10393_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10393_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10394
#define MACROLOP_PRIVATE_EVAL_REC_10393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10394(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10394_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10394_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10394_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10394_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10395
#define MACROLOP_PRIVATE_EVAL_REC_10394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10395(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10395_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10395_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10395_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10395_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10396
#define MACROLOP_PRIVATE_EVAL_REC_10395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10396(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10396_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10396_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10396_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10396_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10397
#define MACROLOP_PRIVATE_EVAL_REC_10396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10397(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10397_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10397_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10397_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10397_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10398
#define MACROLOP_PRIVATE_EVAL_REC_10397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10398(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10398_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10398_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10398_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10398_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10399
#define MACROLOP_PRIVATE_EVAL_REC_10398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10399(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10399_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10399_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10399_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10399_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10400
#define MACROLOP_PRIVATE_EVAL_REC_10399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10400(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10400_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10400_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10400_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10400_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10401
#define MACROLOP_PRIVATE_EVAL_REC_10400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10401(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10401_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10401_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10401_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10401_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10402
#define MACROLOP_PRIVATE_EVAL_REC_10401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10402(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10402_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10402_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10402_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10402_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10403
#define MACROLOP_PRIVATE_EVAL_REC_10402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10403(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10403_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10403_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10403_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10403_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10404
#define MACROLOP_PRIVATE_EVAL_REC_10403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10404(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10404_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10404_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10404_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10404_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10405
#define MACROLOP_PRIVATE_EVAL_REC_10404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10405(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10405_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10405_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10405_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10405_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10406
#define MACROLOP_PRIVATE_EVAL_REC_10405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10406(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10406_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10406_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10406_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10406_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10407
#define MACROLOP_PRIVATE_EVAL_REC_10406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10407(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10407_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10407_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10407_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10407_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10408
#define MACROLOP_PRIVATE_EVAL_REC_10407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10408(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10408_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10408_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10408_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10408_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10409
#define MACROLOP_PRIVATE_EVAL_REC_10408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10409(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10409_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10409_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10409_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10409_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10410
#define MACROLOP_PRIVATE_EVAL_REC_10409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10410(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10410_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10410_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10410_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10410_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10411
#define MACROLOP_PRIVATE_EVAL_REC_10410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10411(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10411_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10411_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10411_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10411_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10412
#define MACROLOP_PRIVATE_EVAL_REC_10411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10412(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10412_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10412_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10412_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10412_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10413
#define MACROLOP_PRIVATE_EVAL_REC_10412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10413(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10413_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10413_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10413_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10413_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10414
#define MACROLOP_PRIVATE_EVAL_REC_10413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10414(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10414_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10414_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10414_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10414_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10415
#define MACROLOP_PRIVATE_EVAL_REC_10414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10415(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10415_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10415_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10415_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10415_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10416
#define MACROLOP_PRIVATE_EVAL_REC_10415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10416(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10416_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10416_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10416_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10416_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10417
#define MACROLOP_PRIVATE_EVAL_REC_10416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10417(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10417_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10417_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10417_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10417_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10418
#define MACROLOP_PRIVATE_EVAL_REC_10417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10418(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10418_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10418_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10418_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10418_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10419
#define MACROLOP_PRIVATE_EVAL_REC_10418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10419(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10419_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10419_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10419_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10419_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10420
#define MACROLOP_PRIVATE_EVAL_REC_10419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10420(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10420_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10420_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10420_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10420_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10421
#define MACROLOP_PRIVATE_EVAL_REC_10420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10421(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10421_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10421_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10421_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10421_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10422
#define MACROLOP_PRIVATE_EVAL_REC_10421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10422(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10422_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10422_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10422_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10422_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10423
#define MACROLOP_PRIVATE_EVAL_REC_10422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10423(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10423_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10423_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10423_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10423_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10424
#define MACROLOP_PRIVATE_EVAL_REC_10423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10424(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10424_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10424_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10424_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10424_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10425
#define MACROLOP_PRIVATE_EVAL_REC_10424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10425(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10425_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10425_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10425_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10425_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10426
#define MACROLOP_PRIVATE_EVAL_REC_10425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10426(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10426_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10426_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10426_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10426_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10427
#define MACROLOP_PRIVATE_EVAL_REC_10426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10427(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10427_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10427_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10427_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10427_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10428
#define MACROLOP_PRIVATE_EVAL_REC_10427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10428(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10428_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10428_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10428_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10428_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10429
#define MACROLOP_PRIVATE_EVAL_REC_10428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10429(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10429_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10429_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10429_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10429_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10430
#define MACROLOP_PRIVATE_EVAL_REC_10429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10430(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10430_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10430_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10430_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10430_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10431
#define MACROLOP_PRIVATE_EVAL_REC_10430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10431(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10431_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10431_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10431_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10431_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10432
#define MACROLOP_PRIVATE_EVAL_REC_10431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10432(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10432_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10432_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10432_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10432_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10433
#define MACROLOP_PRIVATE_EVAL_REC_10432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10433(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10433_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10433_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10433_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10433_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10434
#define MACROLOP_PRIVATE_EVAL_REC_10433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10434(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10434_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10434_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10434_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10434_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10435
#define MACROLOP_PRIVATE_EVAL_REC_10434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10435(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10435_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10435_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10435_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10435_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10436
#define MACROLOP_PRIVATE_EVAL_REC_10435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10436(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10436_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10436_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10436_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10436_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10437
#define MACROLOP_PRIVATE_EVAL_REC_10436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10437(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10437_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10437_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10437_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10437_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10438
#define MACROLOP_PRIVATE_EVAL_REC_10437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10438(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10438_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10438_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10438_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10438_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10439
#define MACROLOP_PRIVATE_EVAL_REC_10438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10439(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10439_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10439_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10439_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10439_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10440
#define MACROLOP_PRIVATE_EVAL_REC_10439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10440(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10440_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10440_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10440_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10440_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10441
#define MACROLOP_PRIVATE_EVAL_REC_10440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10441(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10441_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10441_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10441_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10441_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10442
#define MACROLOP_PRIVATE_EVAL_REC_10441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10442(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10442_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10442_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10442_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10442_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10443
#define MACROLOP_PRIVATE_EVAL_REC_10442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10443(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10443_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10443_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10443_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10443_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10444
#define MACROLOP_PRIVATE_EVAL_REC_10443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10444(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10444_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10444_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10444_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10444_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10445
#define MACROLOP_PRIVATE_EVAL_REC_10444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10445(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10445_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10445_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10445_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10445_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10446
#define MACROLOP_PRIVATE_EVAL_REC_10445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10446(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10446_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10446_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10446_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10446_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10447
#define MACROLOP_PRIVATE_EVAL_REC_10446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10447(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10447_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10447_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10447_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10447_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10448
#define MACROLOP_PRIVATE_EVAL_REC_10447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10448(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10448_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10448_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10448_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10448_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10449
#define MACROLOP_PRIVATE_EVAL_REC_10448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10449(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10449_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10449_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10449_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10449_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10450
#define MACROLOP_PRIVATE_EVAL_REC_10449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10450(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10450_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10450_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10450_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10450_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10451
#define MACROLOP_PRIVATE_EVAL_REC_10450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10451(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10451_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10451_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10451_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10451_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10452
#define MACROLOP_PRIVATE_EVAL_REC_10451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10452(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10452_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10452_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10452_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10452_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10453
#define MACROLOP_PRIVATE_EVAL_REC_10452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10453(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10453_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10453_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10453_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10453_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10454
#define MACROLOP_PRIVATE_EVAL_REC_10453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10454(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10454_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10454_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10454_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10454_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10455
#define MACROLOP_PRIVATE_EVAL_REC_10454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10455(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10455_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10455_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10455_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10455_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10456
#define MACROLOP_PRIVATE_EVAL_REC_10455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10456(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10456_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10456_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10456_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10456_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10457
#define MACROLOP_PRIVATE_EVAL_REC_10456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10457(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10457_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10457_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10457_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10457_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10458
#define MACROLOP_PRIVATE_EVAL_REC_10457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10458(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10458_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10458_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10458_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10458_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10459
#define MACROLOP_PRIVATE_EVAL_REC_10458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10459(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10459_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10459_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10459_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10459_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10460
#define MACROLOP_PRIVATE_EVAL_REC_10459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10460(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10460_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10460_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10460_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10460_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10461
#define MACROLOP_PRIVATE_EVAL_REC_10460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10461(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10461_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10461_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10461_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10461_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10462
#define MACROLOP_PRIVATE_EVAL_REC_10461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10462(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10462_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10462_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10462_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10462_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10463
#define MACROLOP_PRIVATE_EVAL_REC_10462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10463(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10463_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10463_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10463_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10463_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10464
#define MACROLOP_PRIVATE_EVAL_REC_10463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10464(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10464_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10464_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10464_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10464_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10465
#define MACROLOP_PRIVATE_EVAL_REC_10464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10465(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10465_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10465_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10465_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10465_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10466
#define MACROLOP_PRIVATE_EVAL_REC_10465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10466(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10466_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10466_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10466_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10466_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10467
#define MACROLOP_PRIVATE_EVAL_REC_10466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10467(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10467_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10467_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10467_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10467_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10468
#define MACROLOP_PRIVATE_EVAL_REC_10467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10468(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10468_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10468_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10468_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10468_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10469
#define MACROLOP_PRIVATE_EVAL_REC_10468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10469(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10469_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10469_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10469_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10469_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10470
#define MACROLOP_PRIVATE_EVAL_REC_10469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10470(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10470_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10470_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10470_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10470_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10471
#define MACROLOP_PRIVATE_EVAL_REC_10470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10471(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10471_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10471_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10471_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10471_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10472
#define MACROLOP_PRIVATE_EVAL_REC_10471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10472(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10472_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10472_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10472_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10472_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10473
#define MACROLOP_PRIVATE_EVAL_REC_10472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10473(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10473_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10473_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10473_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10473_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10474
#define MACROLOP_PRIVATE_EVAL_REC_10473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10474(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10474_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10474_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10474_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10474_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10475
#define MACROLOP_PRIVATE_EVAL_REC_10474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10475(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10475_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10475_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10475_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10475_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10476
#define MACROLOP_PRIVATE_EVAL_REC_10475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10476(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10476_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10476_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10476_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10476_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10477
#define MACROLOP_PRIVATE_EVAL_REC_10476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10477(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10477_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10477_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10477_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10477_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10478
#define MACROLOP_PRIVATE_EVAL_REC_10477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10478(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10478_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10478_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10478_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10478_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10479
#define MACROLOP_PRIVATE_EVAL_REC_10478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10479(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10479_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10479_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10479_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10479_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10480
#define MACROLOP_PRIVATE_EVAL_REC_10479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10480(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10480_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10480_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10480_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10480_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10481
#define MACROLOP_PRIVATE_EVAL_REC_10480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10481(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10481_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10481_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10481_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10481_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10482
#define MACROLOP_PRIVATE_EVAL_REC_10481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10482(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10482_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10482_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10482_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10482_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10483
#define MACROLOP_PRIVATE_EVAL_REC_10482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10483(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10483_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10483_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10483_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10483_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10484
#define MACROLOP_PRIVATE_EVAL_REC_10483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10484(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10484_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10484_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10484_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10484_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10485
#define MACROLOP_PRIVATE_EVAL_REC_10484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10485(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10485_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10485_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10485_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10485_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10486
#define MACROLOP_PRIVATE_EVAL_REC_10485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10486(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10486_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10486_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10486_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10486_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10487
#define MACROLOP_PRIVATE_EVAL_REC_10486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10487(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10487_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10487_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10487_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10487_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10488
#define MACROLOP_PRIVATE_EVAL_REC_10487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10488(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10488_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10488_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10488_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10488_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10489
#define MACROLOP_PRIVATE_EVAL_REC_10488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10489(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10489_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10489_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10489_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10489_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10490
#define MACROLOP_PRIVATE_EVAL_REC_10489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10490(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10490_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10490_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10490_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10490_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10491
#define MACROLOP_PRIVATE_EVAL_REC_10490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10491(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10491_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10491_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10491_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10491_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10492
#define MACROLOP_PRIVATE_EVAL_REC_10491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10492(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10492_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10492_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10492_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10492_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10493
#define MACROLOP_PRIVATE_EVAL_REC_10492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10493(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10493_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10493_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10493_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10493_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10494
#define MACROLOP_PRIVATE_EVAL_REC_10493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10494(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10494_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10494_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10494_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10494_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10495
#define MACROLOP_PRIVATE_EVAL_REC_10494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10495(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10495_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10495_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10495_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10495_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10496
#define MACROLOP_PRIVATE_EVAL_REC_10495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10496(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10496_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10496_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10496_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10496_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10497
#define MACROLOP_PRIVATE_EVAL_REC_10496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10497(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10497_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10497_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10497_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10497_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10498
#define MACROLOP_PRIVATE_EVAL_REC_10497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10498(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10498_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10498_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10498_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10498_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10499
#define MACROLOP_PRIVATE_EVAL_REC_10498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10499(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10499_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10499_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10499_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10499_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10500
#define MACROLOP_PRIVATE_EVAL_REC_10499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10500(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10500_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10500_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10500_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10500_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10501
#define MACROLOP_PRIVATE_EVAL_REC_10500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10501(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10501_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10501_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10501_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10501_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10502
#define MACROLOP_PRIVATE_EVAL_REC_10501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10502(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10502_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10502_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10502_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10502_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10503
#define MACROLOP_PRIVATE_EVAL_REC_10502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10503(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10503_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10503_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10503_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10503_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10504
#define MACROLOP_PRIVATE_EVAL_REC_10503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10504(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10504_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10504_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10504_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10504_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10505
#define MACROLOP_PRIVATE_EVAL_REC_10504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10505(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10505_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10505_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10505_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10505_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10506
#define MACROLOP_PRIVATE_EVAL_REC_10505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10506(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10506_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10506_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10506_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10506_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10507
#define MACROLOP_PRIVATE_EVAL_REC_10506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10507(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10507_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10507_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10507_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10507_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10508
#define MACROLOP_PRIVATE_EVAL_REC_10507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10508(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10508_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10508_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10508_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10508_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10509
#define MACROLOP_PRIVATE_EVAL_REC_10508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10509(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10509_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10509_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10509_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10509_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10510
#define MACROLOP_PRIVATE_EVAL_REC_10509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10510(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10510_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10510_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10510_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10510_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10511
#define MACROLOP_PRIVATE_EVAL_REC_10510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10511(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10511_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10511_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10511_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10511_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10512
#define MACROLOP_PRIVATE_EVAL_REC_10511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10512(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10512_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10512_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10512_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10512_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10513
#define MACROLOP_PRIVATE_EVAL_REC_10512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10513(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10513_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10513_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10513_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10513_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10514
#define MACROLOP_PRIVATE_EVAL_REC_10513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10514(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10514_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10514_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10514_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10514_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10515
#define MACROLOP_PRIVATE_EVAL_REC_10514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10515(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10515_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10515_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10515_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10515_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10516
#define MACROLOP_PRIVATE_EVAL_REC_10515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10516(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10516_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10516_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10516_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10516_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10517
#define MACROLOP_PRIVATE_EVAL_REC_10516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10517(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10517_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10517_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10517_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10517_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10518
#define MACROLOP_PRIVATE_EVAL_REC_10517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10518(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10518_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10518_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10518_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10518_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10519
#define MACROLOP_PRIVATE_EVAL_REC_10518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10519(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10519_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10519_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10519_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10519_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10520
#define MACROLOP_PRIVATE_EVAL_REC_10519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10520(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10520_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10520_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10520_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10520_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10521
#define MACROLOP_PRIVATE_EVAL_REC_10520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10521(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10521_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10521_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10521_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10521_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10522
#define MACROLOP_PRIVATE_EVAL_REC_10521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10522(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10522_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10522_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10522_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10522_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10523
#define MACROLOP_PRIVATE_EVAL_REC_10522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10523(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10523_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10523_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10523_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10523_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10524
#define MACROLOP_PRIVATE_EVAL_REC_10523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10524(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10524_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10524_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10524_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10524_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10525
#define MACROLOP_PRIVATE_EVAL_REC_10524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10525(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10525_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10525_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10525_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10525_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10526
#define MACROLOP_PRIVATE_EVAL_REC_10525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10526(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10526_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10526_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10526_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10526_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10527
#define MACROLOP_PRIVATE_EVAL_REC_10526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10527(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10527_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10527_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10527_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10527_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10528
#define MACROLOP_PRIVATE_EVAL_REC_10527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10528(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10528_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10528_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10528_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10528_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10529
#define MACROLOP_PRIVATE_EVAL_REC_10528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10529(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10529_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10529_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10529_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10529_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10530
#define MACROLOP_PRIVATE_EVAL_REC_10529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10530(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10530_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10530_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10530_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10530_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10531
#define MACROLOP_PRIVATE_EVAL_REC_10530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10531(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10531_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10531_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10531_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10531_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10532
#define MACROLOP_PRIVATE_EVAL_REC_10531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10532(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10532_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10532_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10532_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10532_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10533
#define MACROLOP_PRIVATE_EVAL_REC_10532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10533(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10533_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10533_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10533_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10533_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10534
#define MACROLOP_PRIVATE_EVAL_REC_10533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10534(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10534_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10534_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10534_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10534_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10535
#define MACROLOP_PRIVATE_EVAL_REC_10534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10535(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10535_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10535_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10535_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10535_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10536
#define MACROLOP_PRIVATE_EVAL_REC_10535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10536(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10536_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10536_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10536_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10536_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10537
#define MACROLOP_PRIVATE_EVAL_REC_10536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10537(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10537_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10537_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10537_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10537_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10538
#define MACROLOP_PRIVATE_EVAL_REC_10537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10538(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10538_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10538_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10538_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10538_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10539
#define MACROLOP_PRIVATE_EVAL_REC_10538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10539(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10539_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10539_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10539_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10539_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10540
#define MACROLOP_PRIVATE_EVAL_REC_10539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10540(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10540_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10540_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10540_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10540_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10541
#define MACROLOP_PRIVATE_EVAL_REC_10540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10541(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10541_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10541_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10541_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10541_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10542
#define MACROLOP_PRIVATE_EVAL_REC_10541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10542(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10542_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10542_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10542_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10542_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10543
#define MACROLOP_PRIVATE_EVAL_REC_10542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10543(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10543_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10543_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10543_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10543_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10544
#define MACROLOP_PRIVATE_EVAL_REC_10543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10544(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10544_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10544_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10544_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10544_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10545
#define MACROLOP_PRIVATE_EVAL_REC_10544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10545(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10545_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10545_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10545_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10545_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10546
#define MACROLOP_PRIVATE_EVAL_REC_10545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10546(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10546_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10546_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10546_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10546_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10547
#define MACROLOP_PRIVATE_EVAL_REC_10546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10547(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10547_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10547_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10547_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10547_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10548
#define MACROLOP_PRIVATE_EVAL_REC_10547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10548(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10548_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10548_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10548_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10548_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10549
#define MACROLOP_PRIVATE_EVAL_REC_10548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10549(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10549_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10549_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10549_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10549_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10550
#define MACROLOP_PRIVATE_EVAL_REC_10549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10550(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10550_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10550_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10550_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10550_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10551
#define MACROLOP_PRIVATE_EVAL_REC_10550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10551(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10551_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10551_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10551_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10551_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10552
#define MACROLOP_PRIVATE_EVAL_REC_10551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10552(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10552_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10552_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10552_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10552_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10553
#define MACROLOP_PRIVATE_EVAL_REC_10552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10553(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10553_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10553_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10553_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10553_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10554
#define MACROLOP_PRIVATE_EVAL_REC_10553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10554(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10554_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10554_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10554_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10554_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10555
#define MACROLOP_PRIVATE_EVAL_REC_10554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10555(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10555_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10555_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10555_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10555_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10556
#define MACROLOP_PRIVATE_EVAL_REC_10555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10556(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10556_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10556_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10556_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10556_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10557
#define MACROLOP_PRIVATE_EVAL_REC_10556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10557(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10557_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10557_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10557_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10557_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10558
#define MACROLOP_PRIVATE_EVAL_REC_10557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10558(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10558_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10558_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10558_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10558_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10559
#define MACROLOP_PRIVATE_EVAL_REC_10558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10559(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10559_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10559_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10559_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10559_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10560
#define MACROLOP_PRIVATE_EVAL_REC_10559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10560(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10560_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10560_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10560_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10560_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10561
#define MACROLOP_PRIVATE_EVAL_REC_10560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10561(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10561_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10561_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10561_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10561_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10562
#define MACROLOP_PRIVATE_EVAL_REC_10561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10562(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10562_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10562_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10562_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10562_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10563
#define MACROLOP_PRIVATE_EVAL_REC_10562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10563(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10563_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10563_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10563_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10563_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10564
#define MACROLOP_PRIVATE_EVAL_REC_10563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10564(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10564_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10564_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10564_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10564_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10565
#define MACROLOP_PRIVATE_EVAL_REC_10564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10565(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10565_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10565_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10565_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10565_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10566
#define MACROLOP_PRIVATE_EVAL_REC_10565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10566(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10566_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10566_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10566_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10566_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10567
#define MACROLOP_PRIVATE_EVAL_REC_10566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10567(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10567_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10567_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10567_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10567_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10568
#define MACROLOP_PRIVATE_EVAL_REC_10567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10568(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10568_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10568_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10568_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10568_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10569
#define MACROLOP_PRIVATE_EVAL_REC_10568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10569(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10569_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10569_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10569_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10569_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10570
#define MACROLOP_PRIVATE_EVAL_REC_10569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10570(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10570_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10570_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10570_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10570_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10571
#define MACROLOP_PRIVATE_EVAL_REC_10570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10571(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10571_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10571_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10571_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10571_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10572
#define MACROLOP_PRIVATE_EVAL_REC_10571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10572(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10572_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10572_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10572_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10572_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10573
#define MACROLOP_PRIVATE_EVAL_REC_10572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10573(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10573_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10573_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10573_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10573_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10574
#define MACROLOP_PRIVATE_EVAL_REC_10573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10574(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10574_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10574_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10574_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10574_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10575
#define MACROLOP_PRIVATE_EVAL_REC_10574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10575(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10575_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10575_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10575_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10575_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10576
#define MACROLOP_PRIVATE_EVAL_REC_10575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10576(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10576_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10576_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10576_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10576_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10577
#define MACROLOP_PRIVATE_EVAL_REC_10576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10577(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10577_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10577_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10577_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10577_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10578
#define MACROLOP_PRIVATE_EVAL_REC_10577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10578(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10578_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10578_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10578_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10578_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10579
#define MACROLOP_PRIVATE_EVAL_REC_10578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10579(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10579_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10579_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10579_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10579_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10580
#define MACROLOP_PRIVATE_EVAL_REC_10579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10580(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10580_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10580_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10580_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10580_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10581
#define MACROLOP_PRIVATE_EVAL_REC_10580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10581(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10581_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10581_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10581_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10581_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10582
#define MACROLOP_PRIVATE_EVAL_REC_10581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10582(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10582_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10582_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10582_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10582_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10583
#define MACROLOP_PRIVATE_EVAL_REC_10582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10583(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10583_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10583_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10583_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10583_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10584
#define MACROLOP_PRIVATE_EVAL_REC_10583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10584(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10584_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10584_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10584_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10584_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10585
#define MACROLOP_PRIVATE_EVAL_REC_10584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10585(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10585_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10585_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10585_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10585_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10586
#define MACROLOP_PRIVATE_EVAL_REC_10585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10586(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10586_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10586_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10586_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10586_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10587
#define MACROLOP_PRIVATE_EVAL_REC_10586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10587(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10587_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10587_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10587_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10587_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10588
#define MACROLOP_PRIVATE_EVAL_REC_10587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10588(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10588_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10588_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10588_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10588_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10589
#define MACROLOP_PRIVATE_EVAL_REC_10588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10589(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10589_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10589_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10589_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10589_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10590
#define MACROLOP_PRIVATE_EVAL_REC_10589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10590(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10590_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10590_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10590_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10590_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10591
#define MACROLOP_PRIVATE_EVAL_REC_10590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10591(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10591_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10591_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10591_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10591_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10592
#define MACROLOP_PRIVATE_EVAL_REC_10591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10592(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10592_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10592_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10592_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10592_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10593
#define MACROLOP_PRIVATE_EVAL_REC_10592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10593(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10593_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10593_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10593_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10593_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10594
#define MACROLOP_PRIVATE_EVAL_REC_10593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10594(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10594_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10594_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10594_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10594_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10595
#define MACROLOP_PRIVATE_EVAL_REC_10594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10595(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10595_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10595_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10595_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10595_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10596
#define MACROLOP_PRIVATE_EVAL_REC_10595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10596(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10596_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10596_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10596_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10596_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10597
#define MACROLOP_PRIVATE_EVAL_REC_10596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10597(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10597_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10597_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10597_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10597_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10598
#define MACROLOP_PRIVATE_EVAL_REC_10597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10598(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10598_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10598_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10598_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10598_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10599
#define MACROLOP_PRIVATE_EVAL_REC_10598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10599(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10599_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10599_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10599_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10599_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10600
#define MACROLOP_PRIVATE_EVAL_REC_10599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10600(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10600_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10600_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10600_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10600_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10601
#define MACROLOP_PRIVATE_EVAL_REC_10600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10601(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10601_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10601_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10601_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10601_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10602
#define MACROLOP_PRIVATE_EVAL_REC_10601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10602(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10602_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10602_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10602_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10602_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10603
#define MACROLOP_PRIVATE_EVAL_REC_10602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10603(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10603_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10603_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10603_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10603_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10604
#define MACROLOP_PRIVATE_EVAL_REC_10603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10604(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10604_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10604_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10604_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10604_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10605
#define MACROLOP_PRIVATE_EVAL_REC_10604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10605(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10605_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10605_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10605_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10605_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10606
#define MACROLOP_PRIVATE_EVAL_REC_10605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10606(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10606_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10606_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10606_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10606_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10607
#define MACROLOP_PRIVATE_EVAL_REC_10606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10607(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10607_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10607_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10607_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10607_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10608
#define MACROLOP_PRIVATE_EVAL_REC_10607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10608(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10608_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10608_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10608_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10608_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10609
#define MACROLOP_PRIVATE_EVAL_REC_10608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10609(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10609_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10609_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10609_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10609_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10610
#define MACROLOP_PRIVATE_EVAL_REC_10609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10610(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10610_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10610_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10610_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10610_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10611
#define MACROLOP_PRIVATE_EVAL_REC_10610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10611(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10611_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10611_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10611_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10611_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10612
#define MACROLOP_PRIVATE_EVAL_REC_10611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10612(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10612_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10612_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10612_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10612_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10613
#define MACROLOP_PRIVATE_EVAL_REC_10612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10613(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10613_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10613_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10613_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10613_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10614
#define MACROLOP_PRIVATE_EVAL_REC_10613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10614(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10614_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10614_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10614_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10614_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10615
#define MACROLOP_PRIVATE_EVAL_REC_10614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10615(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10615_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10615_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10615_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10615_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10616
#define MACROLOP_PRIVATE_EVAL_REC_10615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10616(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10616_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10616_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10616_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10616_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10617
#define MACROLOP_PRIVATE_EVAL_REC_10616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10617(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10617_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10617_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10617_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10617_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10618
#define MACROLOP_PRIVATE_EVAL_REC_10617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10618(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10618_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10618_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10618_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10618_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10619
#define MACROLOP_PRIVATE_EVAL_REC_10618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10619(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10619_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10619_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10619_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10619_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10620
#define MACROLOP_PRIVATE_EVAL_REC_10619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10620(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10620_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10620_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10620_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10620_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10621
#define MACROLOP_PRIVATE_EVAL_REC_10620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10621(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10621_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10621_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10621_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10621_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10622
#define MACROLOP_PRIVATE_EVAL_REC_10621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10622(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10622_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10622_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10622_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10622_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10623
#define MACROLOP_PRIVATE_EVAL_REC_10622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10623(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10623_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10623_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10623_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10623_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10624
#define MACROLOP_PRIVATE_EVAL_REC_10623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10624(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10624_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10624_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10624_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10624_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10625
#define MACROLOP_PRIVATE_EVAL_REC_10624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10625(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10625_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10625_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10625_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10625_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10626
#define MACROLOP_PRIVATE_EVAL_REC_10625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10626(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10626_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10626_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10626_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10626_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10627
#define MACROLOP_PRIVATE_EVAL_REC_10626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10627(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10627_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10627_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10627_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10627_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10628
#define MACROLOP_PRIVATE_EVAL_REC_10627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10628(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10628_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10628_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10628_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10628_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10629
#define MACROLOP_PRIVATE_EVAL_REC_10628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10629(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10629_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10629_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10629_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10629_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10630
#define MACROLOP_PRIVATE_EVAL_REC_10629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10630(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10630_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10630_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10630_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10630_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10631
#define MACROLOP_PRIVATE_EVAL_REC_10630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10631(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10631_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10631_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10631_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10631_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10632
#define MACROLOP_PRIVATE_EVAL_REC_10631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10632(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10632_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10632_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10632_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10632_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10633
#define MACROLOP_PRIVATE_EVAL_REC_10632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10633(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10633_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10633_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10633_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10633_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10634
#define MACROLOP_PRIVATE_EVAL_REC_10633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10634(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10634_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10634_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10634_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10634_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10635
#define MACROLOP_PRIVATE_EVAL_REC_10634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10635(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10635_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10635_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10635_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10635_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10636
#define MACROLOP_PRIVATE_EVAL_REC_10635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10636(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10636_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10636_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10636_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10636_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10637
#define MACROLOP_PRIVATE_EVAL_REC_10636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10637(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10637_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10637_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10637_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10637_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10638
#define MACROLOP_PRIVATE_EVAL_REC_10637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10638(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10638_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10638_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10638_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10638_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10639
#define MACROLOP_PRIVATE_EVAL_REC_10638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10639(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10639_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10639_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10639_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10639_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10640
#define MACROLOP_PRIVATE_EVAL_REC_10639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10640(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10640_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10640_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10640_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10640_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10641
#define MACROLOP_PRIVATE_EVAL_REC_10640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10641(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10641_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10641_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10641_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10641_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10642
#define MACROLOP_PRIVATE_EVAL_REC_10641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10642(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10642_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10642_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10642_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10642_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10643
#define MACROLOP_PRIVATE_EVAL_REC_10642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10643(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10643_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10643_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10643_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10643_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10644
#define MACROLOP_PRIVATE_EVAL_REC_10643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10644(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10644_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10644_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10644_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10644_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10645
#define MACROLOP_PRIVATE_EVAL_REC_10644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10645(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10645_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10645_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10645_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10645_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10646
#define MACROLOP_PRIVATE_EVAL_REC_10645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10646(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10646_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10646_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10646_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10646_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10647
#define MACROLOP_PRIVATE_EVAL_REC_10646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10647(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10647_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10647_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10647_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10647_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10648
#define MACROLOP_PRIVATE_EVAL_REC_10647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10648(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10648_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10648_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10648_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10648_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10649
#define MACROLOP_PRIVATE_EVAL_REC_10648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10649(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10649_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10649_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10649_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10649_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10650
#define MACROLOP_PRIVATE_EVAL_REC_10649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10650(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10650_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10650_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10650_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10650_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10651
#define MACROLOP_PRIVATE_EVAL_REC_10650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10651(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10651_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10651_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10651_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10651_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10652
#define MACROLOP_PRIVATE_EVAL_REC_10651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10652(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10652_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10652_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10652_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10652_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10653
#define MACROLOP_PRIVATE_EVAL_REC_10652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10653(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10653_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10653_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10653_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10653_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10654
#define MACROLOP_PRIVATE_EVAL_REC_10653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10654(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10654_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10654_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10654_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10654_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10655
#define MACROLOP_PRIVATE_EVAL_REC_10654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10655(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10655_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10655_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10655_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10655_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10656
#define MACROLOP_PRIVATE_EVAL_REC_10655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10656(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10656_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10656_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10656_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10656_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10657
#define MACROLOP_PRIVATE_EVAL_REC_10656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10657(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10657_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10657_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10657_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10657_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10658
#define MACROLOP_PRIVATE_EVAL_REC_10657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10658(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10658_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10658_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10658_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10658_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10659
#define MACROLOP_PRIVATE_EVAL_REC_10658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10659(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10659_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10659_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10659_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10659_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10660
#define MACROLOP_PRIVATE_EVAL_REC_10659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10660(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10660_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10660_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10660_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10660_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10661
#define MACROLOP_PRIVATE_EVAL_REC_10660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10661(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10661_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10661_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10661_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10661_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10662
#define MACROLOP_PRIVATE_EVAL_REC_10661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10662(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10662_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10662_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10662_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10662_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10663
#define MACROLOP_PRIVATE_EVAL_REC_10662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10663(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10663_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10663_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10663_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10663_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10664
#define MACROLOP_PRIVATE_EVAL_REC_10663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10664(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10664_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10664_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10664_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10664_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10665
#define MACROLOP_PRIVATE_EVAL_REC_10664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10665(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10665_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10665_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10665_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10665_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10666
#define MACROLOP_PRIVATE_EVAL_REC_10665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10666(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10666_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10666_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10666_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10666_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10667
#define MACROLOP_PRIVATE_EVAL_REC_10666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10667(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10667_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10667_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10667_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10667_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10668
#define MACROLOP_PRIVATE_EVAL_REC_10667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10668(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10668_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10668_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10668_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10668_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10669
#define MACROLOP_PRIVATE_EVAL_REC_10668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10669(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10669_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10669_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10669_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10669_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10670
#define MACROLOP_PRIVATE_EVAL_REC_10669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10670(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10670_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10670_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10670_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10670_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10671
#define MACROLOP_PRIVATE_EVAL_REC_10670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10671(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10671_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10671_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10671_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10671_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10672
#define MACROLOP_PRIVATE_EVAL_REC_10671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10672(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10672_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10672_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10672_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10672_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10673
#define MACROLOP_PRIVATE_EVAL_REC_10672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10673(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10673_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10673_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10673_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10673_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10674
#define MACROLOP_PRIVATE_EVAL_REC_10673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10674(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10674_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10674_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10674_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10674_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10675
#define MACROLOP_PRIVATE_EVAL_REC_10674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10675(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10675_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10675_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10675_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10675_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10676
#define MACROLOP_PRIVATE_EVAL_REC_10675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10676(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10676_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10676_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10676_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10676_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10677
#define MACROLOP_PRIVATE_EVAL_REC_10676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10677(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10677_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10677_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10677_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10677_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10678
#define MACROLOP_PRIVATE_EVAL_REC_10677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10678(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10678_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10678_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10678_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10678_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10679
#define MACROLOP_PRIVATE_EVAL_REC_10678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10679(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10679_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10679_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10679_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10679_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10680
#define MACROLOP_PRIVATE_EVAL_REC_10679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10680(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10680_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10680_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10680_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10680_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10681
#define MACROLOP_PRIVATE_EVAL_REC_10680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10681(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10681_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10681_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10681_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10681_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10682
#define MACROLOP_PRIVATE_EVAL_REC_10681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10682(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10682_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10682_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10682_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10682_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10683
#define MACROLOP_PRIVATE_EVAL_REC_10682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10683(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10683_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10683_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10683_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10683_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10684
#define MACROLOP_PRIVATE_EVAL_REC_10683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10684(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10684_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10684_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10684_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10684_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10685
#define MACROLOP_PRIVATE_EVAL_REC_10684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10685(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10685_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10685_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10685_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10685_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10686
#define MACROLOP_PRIVATE_EVAL_REC_10685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10686(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10686_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10686_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10686_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10686_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10687
#define MACROLOP_PRIVATE_EVAL_REC_10686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10687(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10687_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10687_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10687_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10687_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10688
#define MACROLOP_PRIVATE_EVAL_REC_10687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10688(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10688_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10688_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10688_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10688_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10689
#define MACROLOP_PRIVATE_EVAL_REC_10688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10689(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10689_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10689_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10689_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10689_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10690
#define MACROLOP_PRIVATE_EVAL_REC_10689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10690(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10690_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10690_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10690_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10690_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10691
#define MACROLOP_PRIVATE_EVAL_REC_10690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10691(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10691_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10691_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10691_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10691_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10692
#define MACROLOP_PRIVATE_EVAL_REC_10691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10692(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10692_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10692_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10692_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10692_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10693
#define MACROLOP_PRIVATE_EVAL_REC_10692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10693(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10693_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10693_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10693_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10693_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10694
#define MACROLOP_PRIVATE_EVAL_REC_10693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10694(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10694_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10694_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10694_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10694_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10695
#define MACROLOP_PRIVATE_EVAL_REC_10694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10695(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10695_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10695_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10695_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10695_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10696
#define MACROLOP_PRIVATE_EVAL_REC_10695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10696(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10696_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10696_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10696_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10696_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10697
#define MACROLOP_PRIVATE_EVAL_REC_10696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10697(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10697_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10697_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10697_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10697_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10698
#define MACROLOP_PRIVATE_EVAL_REC_10697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10698(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10698_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10698_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10698_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10698_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10699
#define MACROLOP_PRIVATE_EVAL_REC_10698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10699(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10699_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10699_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10699_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10699_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10700
#define MACROLOP_PRIVATE_EVAL_REC_10699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10700(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10700_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10700_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10700_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10700_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10701
#define MACROLOP_PRIVATE_EVAL_REC_10700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10701(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10701_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10701_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10701_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10701_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10702
#define MACROLOP_PRIVATE_EVAL_REC_10701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10702(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10702_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10702_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10702_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10702_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10703
#define MACROLOP_PRIVATE_EVAL_REC_10702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10703(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10703_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10703_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10703_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10703_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10704
#define MACROLOP_PRIVATE_EVAL_REC_10703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10704(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10704_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10704_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10704_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10704_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10705
#define MACROLOP_PRIVATE_EVAL_REC_10704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10705(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10705_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10705_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10705_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10705_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10706
#define MACROLOP_PRIVATE_EVAL_REC_10705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10706(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10706_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10706_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10706_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10706_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10707
#define MACROLOP_PRIVATE_EVAL_REC_10706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10707(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10707_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10707_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10707_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10707_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10708
#define MACROLOP_PRIVATE_EVAL_REC_10707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10708(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10708_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10708_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10708_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10708_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10709
#define MACROLOP_PRIVATE_EVAL_REC_10708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10709(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10709_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10709_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10709_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10709_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10710
#define MACROLOP_PRIVATE_EVAL_REC_10709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10710(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10710_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10710_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10710_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10710_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10711
#define MACROLOP_PRIVATE_EVAL_REC_10710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10711(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10711_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10711_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10711_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10711_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10712
#define MACROLOP_PRIVATE_EVAL_REC_10711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10712(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10712_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10712_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10712_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10712_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10713
#define MACROLOP_PRIVATE_EVAL_REC_10712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10713(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10713_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10713_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10713_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10713_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10714
#define MACROLOP_PRIVATE_EVAL_REC_10713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10714(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10714_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10714_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10714_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10714_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10715
#define MACROLOP_PRIVATE_EVAL_REC_10714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10715(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10715_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10715_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10715_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10715_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10716
#define MACROLOP_PRIVATE_EVAL_REC_10715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10716(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10716_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10716_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10716_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10716_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10717
#define MACROLOP_PRIVATE_EVAL_REC_10716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10717(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10717_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10717_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10717_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10717_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10718
#define MACROLOP_PRIVATE_EVAL_REC_10717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10718(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10718_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10718_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10718_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10718_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10719
#define MACROLOP_PRIVATE_EVAL_REC_10718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10719(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10719_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10719_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10719_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10719_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10720
#define MACROLOP_PRIVATE_EVAL_REC_10719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10720(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10720_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10720_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10720_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10720_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10721
#define MACROLOP_PRIVATE_EVAL_REC_10720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10721(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10721_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10721_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10721_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10721_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10722
#define MACROLOP_PRIVATE_EVAL_REC_10721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10722(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10722_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10722_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10722_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10722_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10723
#define MACROLOP_PRIVATE_EVAL_REC_10722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10723(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10723_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10723_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10723_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10723_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10724
#define MACROLOP_PRIVATE_EVAL_REC_10723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10724(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10724_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10724_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10724_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10724_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10725
#define MACROLOP_PRIVATE_EVAL_REC_10724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10725(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10725_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10725_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10725_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10725_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10726
#define MACROLOP_PRIVATE_EVAL_REC_10725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10726(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10726_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10726_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10726_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10726_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10727
#define MACROLOP_PRIVATE_EVAL_REC_10726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10727(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10727_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10727_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10727_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10727_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10728
#define MACROLOP_PRIVATE_EVAL_REC_10727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10728(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10728_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10728_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10728_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10728_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10729
#define MACROLOP_PRIVATE_EVAL_REC_10728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10729(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10729_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10729_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10729_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10729_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10730
#define MACROLOP_PRIVATE_EVAL_REC_10729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10730(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10730_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10730_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10730_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10730_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10731
#define MACROLOP_PRIVATE_EVAL_REC_10730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10731(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10731_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10731_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10731_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10731_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10732
#define MACROLOP_PRIVATE_EVAL_REC_10731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10732(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10732_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10732_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10732_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10732_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10733
#define MACROLOP_PRIVATE_EVAL_REC_10732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10733(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10733_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10733_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10733_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10733_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10734
#define MACROLOP_PRIVATE_EVAL_REC_10733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10734(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10734_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10734_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10734_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10734_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10735
#define MACROLOP_PRIVATE_EVAL_REC_10734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10735(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10735_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10735_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10735_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10735_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10736
#define MACROLOP_PRIVATE_EVAL_REC_10735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10736(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10736_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10736_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10736_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10736_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10737
#define MACROLOP_PRIVATE_EVAL_REC_10736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10737(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10737_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10737_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10737_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10737_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10738
#define MACROLOP_PRIVATE_EVAL_REC_10737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10738(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10738_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10738_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10738_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10738_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10739
#define MACROLOP_PRIVATE_EVAL_REC_10738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10739(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10739_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10739_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10739_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10739_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10740
#define MACROLOP_PRIVATE_EVAL_REC_10739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10740(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10740_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10740_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10740_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10740_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10741
#define MACROLOP_PRIVATE_EVAL_REC_10740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10741(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10741_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10741_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10741_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10741_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10742
#define MACROLOP_PRIVATE_EVAL_REC_10741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10742(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10742_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10742_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10742_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10742_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10743
#define MACROLOP_PRIVATE_EVAL_REC_10742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10743(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10743_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10743_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10743_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10743_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10744
#define MACROLOP_PRIVATE_EVAL_REC_10743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10744(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10744_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10744_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10744_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10744_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10745
#define MACROLOP_PRIVATE_EVAL_REC_10744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10745(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10745_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10745_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10745_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10745_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10746
#define MACROLOP_PRIVATE_EVAL_REC_10745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10746(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10746_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10746_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10746_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10746_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10747
#define MACROLOP_PRIVATE_EVAL_REC_10746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10747(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10747_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10747_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10747_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10747_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10748
#define MACROLOP_PRIVATE_EVAL_REC_10747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10748(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10748_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10748_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10748_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10748_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10749
#define MACROLOP_PRIVATE_EVAL_REC_10748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10749(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10749_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10749_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10749_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10749_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10750
#define MACROLOP_PRIVATE_EVAL_REC_10749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10750(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10750_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10750_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10750_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10750_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10751
#define MACROLOP_PRIVATE_EVAL_REC_10750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10751(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10751_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10751_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10751_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10751_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10752
#define MACROLOP_PRIVATE_EVAL_REC_10751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10752(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10752_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10752_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10752_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10752_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10753
#define MACROLOP_PRIVATE_EVAL_REC_10752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10753(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10753_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10753_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10753_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10753_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10754
#define MACROLOP_PRIVATE_EVAL_REC_10753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10754(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10754_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10754_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10754_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10754_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10755
#define MACROLOP_PRIVATE_EVAL_REC_10754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10755(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10755_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10755_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10755_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10755_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10756
#define MACROLOP_PRIVATE_EVAL_REC_10755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10756(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10756_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10756_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10756_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10756_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10757
#define MACROLOP_PRIVATE_EVAL_REC_10756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10757(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10757_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10757_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10757_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10757_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10758
#define MACROLOP_PRIVATE_EVAL_REC_10757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10758(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10758_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10758_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10758_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10758_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10759
#define MACROLOP_PRIVATE_EVAL_REC_10758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10759(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10759_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10759_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10759_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10759_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10760
#define MACROLOP_PRIVATE_EVAL_REC_10759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10760(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10760_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10760_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10760_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10760_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10761
#define MACROLOP_PRIVATE_EVAL_REC_10760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10761(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10761_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10761_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10761_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10761_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10762
#define MACROLOP_PRIVATE_EVAL_REC_10761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10762(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10762_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10762_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10762_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10762_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10763
#define MACROLOP_PRIVATE_EVAL_REC_10762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10763(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10763_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10763_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10763_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10763_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10764
#define MACROLOP_PRIVATE_EVAL_REC_10763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10764(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10764_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10764_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10764_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10764_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10765
#define MACROLOP_PRIVATE_EVAL_REC_10764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10765(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10765_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10765_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10765_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10765_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10766
#define MACROLOP_PRIVATE_EVAL_REC_10765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10766(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10766_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10766_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10766_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10766_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10767
#define MACROLOP_PRIVATE_EVAL_REC_10766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10767(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10767_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10767_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10767_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10767_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10768
#define MACROLOP_PRIVATE_EVAL_REC_10767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10768(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10768_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10768_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10768_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10768_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10769
#define MACROLOP_PRIVATE_EVAL_REC_10768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10769(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10769_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10769_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10769_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10769_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10770
#define MACROLOP_PRIVATE_EVAL_REC_10769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10770(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10770_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10770_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10770_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10770_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10771
#define MACROLOP_PRIVATE_EVAL_REC_10770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10771(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10771_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10771_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10771_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10771_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10772
#define MACROLOP_PRIVATE_EVAL_REC_10771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10772(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10772_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10772_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10772_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10772_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10773
#define MACROLOP_PRIVATE_EVAL_REC_10772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10773(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10773_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10773_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10773_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10773_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10774
#define MACROLOP_PRIVATE_EVAL_REC_10773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10774(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10774_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10774_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10774_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10774_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10775
#define MACROLOP_PRIVATE_EVAL_REC_10774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10775(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10775_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10775_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10775_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10775_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10776
#define MACROLOP_PRIVATE_EVAL_REC_10775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10776(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10776_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10776_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10776_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10776_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10777
#define MACROLOP_PRIVATE_EVAL_REC_10776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10777(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10777_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10777_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10777_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10777_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10778
#define MACROLOP_PRIVATE_EVAL_REC_10777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10778(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10778_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10778_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10778_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10778_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10779
#define MACROLOP_PRIVATE_EVAL_REC_10778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10779(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10779_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10779_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10779_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10779_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10780
#define MACROLOP_PRIVATE_EVAL_REC_10779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10780(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10780_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10780_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10780_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10780_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10781
#define MACROLOP_PRIVATE_EVAL_REC_10780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10781(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10781_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10781_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10781_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10781_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10782
#define MACROLOP_PRIVATE_EVAL_REC_10781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10782(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10782_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10782_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10782_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10782_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10783
#define MACROLOP_PRIVATE_EVAL_REC_10782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10783(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10783_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10783_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10783_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10783_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10784
#define MACROLOP_PRIVATE_EVAL_REC_10783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10784(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10784_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10784_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10784_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10784_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10785
#define MACROLOP_PRIVATE_EVAL_REC_10784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10785(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10785_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10785_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10785_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10785_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10786
#define MACROLOP_PRIVATE_EVAL_REC_10785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10786(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10786_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10786_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10786_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10786_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10787
#define MACROLOP_PRIVATE_EVAL_REC_10786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10787(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10787_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10787_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10787_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10787_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10788
#define MACROLOP_PRIVATE_EVAL_REC_10787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10788(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10788_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10788_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10788_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10788_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10789
#define MACROLOP_PRIVATE_EVAL_REC_10788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10789(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10789_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10789_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10789_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10789_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10790
#define MACROLOP_PRIVATE_EVAL_REC_10789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10790(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10790_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10790_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10790_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10790_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10791
#define MACROLOP_PRIVATE_EVAL_REC_10790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10791(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10791_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10791_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10791_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10791_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10792
#define MACROLOP_PRIVATE_EVAL_REC_10791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10792(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10792_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10792_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10792_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10792_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10793
#define MACROLOP_PRIVATE_EVAL_REC_10792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10793(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10793_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10793_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10793_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10793_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10794
#define MACROLOP_PRIVATE_EVAL_REC_10793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10794(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10794_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10794_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10794_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10794_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10795
#define MACROLOP_PRIVATE_EVAL_REC_10794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10795(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10795_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10795_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10795_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10795_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10796
#define MACROLOP_PRIVATE_EVAL_REC_10795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10796(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10796_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10796_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10796_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10796_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10797
#define MACROLOP_PRIVATE_EVAL_REC_10796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10797(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10797_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10797_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10797_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10797_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10798
#define MACROLOP_PRIVATE_EVAL_REC_10797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10798(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10798_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10798_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10798_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10798_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10799
#define MACROLOP_PRIVATE_EVAL_REC_10798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10799(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10799_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10799_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10799_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10799_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10800
#define MACROLOP_PRIVATE_EVAL_REC_10799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10800(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10800_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10800_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10800_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10800_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10801
#define MACROLOP_PRIVATE_EVAL_REC_10800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10801(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10801_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10801_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10801_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10801_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10802
#define MACROLOP_PRIVATE_EVAL_REC_10801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10802(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10802_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10802_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10802_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10802_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10803
#define MACROLOP_PRIVATE_EVAL_REC_10802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10803(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10803_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10803_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10803_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10803_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10804
#define MACROLOP_PRIVATE_EVAL_REC_10803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10804(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10804_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10804_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10804_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10804_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10805
#define MACROLOP_PRIVATE_EVAL_REC_10804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10805(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10805_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10805_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10805_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10805_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10806
#define MACROLOP_PRIVATE_EVAL_REC_10805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10806(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10806_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10806_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10806_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10806_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10807
#define MACROLOP_PRIVATE_EVAL_REC_10806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10807(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10807_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10807_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10807_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10807_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10808
#define MACROLOP_PRIVATE_EVAL_REC_10807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10808(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10808_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10808_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10808_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10808_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10809
#define MACROLOP_PRIVATE_EVAL_REC_10808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10809(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10809_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10809_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10809_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10809_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10810
#define MACROLOP_PRIVATE_EVAL_REC_10809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10810(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10810_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10810_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10810_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10810_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10811
#define MACROLOP_PRIVATE_EVAL_REC_10810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10811(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10811_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10811_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10811_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10811_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10812
#define MACROLOP_PRIVATE_EVAL_REC_10811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10812(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10812_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10812_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10812_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10812_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10813
#define MACROLOP_PRIVATE_EVAL_REC_10812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10813(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10813_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10813_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10813_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10813_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10814
#define MACROLOP_PRIVATE_EVAL_REC_10813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10814(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10814_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10814_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10814_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10814_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10815
#define MACROLOP_PRIVATE_EVAL_REC_10814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10815(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10815_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10815_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10815_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10815_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10816
#define MACROLOP_PRIVATE_EVAL_REC_10815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10816(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10816_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10816_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10816_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10816_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10817
#define MACROLOP_PRIVATE_EVAL_REC_10816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10817(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10817_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10817_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10817_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10817_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10818
#define MACROLOP_PRIVATE_EVAL_REC_10817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10818(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10818_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10818_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10818_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10818_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10819
#define MACROLOP_PRIVATE_EVAL_REC_10818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10819(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10819_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10819_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10819_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10819_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10820
#define MACROLOP_PRIVATE_EVAL_REC_10819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10820(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10820_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10820_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10820_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10820_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10821
#define MACROLOP_PRIVATE_EVAL_REC_10820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10821(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10821_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10821_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10821_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10821_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10822
#define MACROLOP_PRIVATE_EVAL_REC_10821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10822(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10822_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10822_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10822_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10822_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10823
#define MACROLOP_PRIVATE_EVAL_REC_10822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10823(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10823_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10823_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10823_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10823_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10824
#define MACROLOP_PRIVATE_EVAL_REC_10823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10824(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10824_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10824_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10824_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10824_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10825
#define MACROLOP_PRIVATE_EVAL_REC_10824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10825(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10825_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10825_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10825_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10825_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10826
#define MACROLOP_PRIVATE_EVAL_REC_10825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10826(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10826_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10826_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10826_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10826_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10827
#define MACROLOP_PRIVATE_EVAL_REC_10826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10827(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10827_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10827_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10827_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10827_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10828
#define MACROLOP_PRIVATE_EVAL_REC_10827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10828(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10828_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10828_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10828_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10828_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10829
#define MACROLOP_PRIVATE_EVAL_REC_10828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10829(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10829_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10829_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10829_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10829_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10830
#define MACROLOP_PRIVATE_EVAL_REC_10829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10830(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10830_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10830_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10830_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10830_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10831
#define MACROLOP_PRIVATE_EVAL_REC_10830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10831(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10831_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10831_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10831_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10831_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10832
#define MACROLOP_PRIVATE_EVAL_REC_10831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10832(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10832_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10832_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10832_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10832_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10833
#define MACROLOP_PRIVATE_EVAL_REC_10832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10833(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10833_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10833_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10833_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10833_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10834
#define MACROLOP_PRIVATE_EVAL_REC_10833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10834(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10834_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10834_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10834_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10834_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10835
#define MACROLOP_PRIVATE_EVAL_REC_10834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10835(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10835_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10835_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10835_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10835_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10836
#define MACROLOP_PRIVATE_EVAL_REC_10835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10836(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10836_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10836_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10836_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10836_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10837
#define MACROLOP_PRIVATE_EVAL_REC_10836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10837(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10837_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10837_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10837_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10837_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10838
#define MACROLOP_PRIVATE_EVAL_REC_10837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10838(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10838_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10838_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10838_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10838_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10839
#define MACROLOP_PRIVATE_EVAL_REC_10838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10839(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10839_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10839_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10839_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10839_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10840
#define MACROLOP_PRIVATE_EVAL_REC_10839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10840(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10840_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10840_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10840_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10840_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10841
#define MACROLOP_PRIVATE_EVAL_REC_10840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10841(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10841_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10841_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10841_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10841_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10842
#define MACROLOP_PRIVATE_EVAL_REC_10841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10842(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10842_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10842_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10842_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10842_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10843
#define MACROLOP_PRIVATE_EVAL_REC_10842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10843(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10843_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10843_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10843_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10843_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10844
#define MACROLOP_PRIVATE_EVAL_REC_10843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10844(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10844_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10844_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10844_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10844_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10845
#define MACROLOP_PRIVATE_EVAL_REC_10844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10845(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10845_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10845_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10845_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10845_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10846
#define MACROLOP_PRIVATE_EVAL_REC_10845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10846(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10846_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10846_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10846_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10846_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10847
#define MACROLOP_PRIVATE_EVAL_REC_10846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10847(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10847_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10847_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10847_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10847_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10848
#define MACROLOP_PRIVATE_EVAL_REC_10847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10848(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10848_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10848_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10848_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10848_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10849
#define MACROLOP_PRIVATE_EVAL_REC_10848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10849(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10849_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10849_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10849_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10849_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10850
#define MACROLOP_PRIVATE_EVAL_REC_10849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10850(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10850_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10850_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10850_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10850_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10851
#define MACROLOP_PRIVATE_EVAL_REC_10850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10851(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10851_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10851_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10851_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10851_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10852
#define MACROLOP_PRIVATE_EVAL_REC_10851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10852(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10852_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10852_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10852_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10852_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10853
#define MACROLOP_PRIVATE_EVAL_REC_10852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10853(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10853_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10853_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10853_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10853_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10854
#define MACROLOP_PRIVATE_EVAL_REC_10853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10854(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10854_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10854_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10854_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10854_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10855
#define MACROLOP_PRIVATE_EVAL_REC_10854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10855(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10855_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10855_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10855_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10855_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10856
#define MACROLOP_PRIVATE_EVAL_REC_10855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10856(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10856_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10856_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10856_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10856_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10857
#define MACROLOP_PRIVATE_EVAL_REC_10856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10857(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10857_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10857_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10857_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10857_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10858
#define MACROLOP_PRIVATE_EVAL_REC_10857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10858(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10858_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10858_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10858_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10858_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10859
#define MACROLOP_PRIVATE_EVAL_REC_10858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10859(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10859_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10859_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10859_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10859_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10860
#define MACROLOP_PRIVATE_EVAL_REC_10859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10860(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10860_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10860_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10860_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10860_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10861
#define MACROLOP_PRIVATE_EVAL_REC_10860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10861(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10861_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10861_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10861_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10861_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10862
#define MACROLOP_PRIVATE_EVAL_REC_10861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10862(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10862_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10862_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10862_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10862_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10863
#define MACROLOP_PRIVATE_EVAL_REC_10862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10863(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10863_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10863_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10863_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10863_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10864
#define MACROLOP_PRIVATE_EVAL_REC_10863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10864(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10864_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10864_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10864_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10864_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10865
#define MACROLOP_PRIVATE_EVAL_REC_10864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10865(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10865_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10865_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10865_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10865_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10866
#define MACROLOP_PRIVATE_EVAL_REC_10865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10866(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10866_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10866_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10866_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10866_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10867
#define MACROLOP_PRIVATE_EVAL_REC_10866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10867(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10867_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10867_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10867_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10867_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10868
#define MACROLOP_PRIVATE_EVAL_REC_10867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10868(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10868_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10868_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10868_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10868_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10869
#define MACROLOP_PRIVATE_EVAL_REC_10868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10869(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10869_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10869_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10869_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10869_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10870
#define MACROLOP_PRIVATE_EVAL_REC_10869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10870(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10870_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10870_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10870_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10870_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10871
#define MACROLOP_PRIVATE_EVAL_REC_10870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10871(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10871_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10871_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10871_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10871_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10872
#define MACROLOP_PRIVATE_EVAL_REC_10871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10872(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10872_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10872_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10872_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10872_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10873
#define MACROLOP_PRIVATE_EVAL_REC_10872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10873(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10873_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10873_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10873_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10873_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10874
#define MACROLOP_PRIVATE_EVAL_REC_10873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10874(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10874_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10874_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10874_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10874_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10875
#define MACROLOP_PRIVATE_EVAL_REC_10874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10875(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10875_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10875_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10875_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10875_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10876
#define MACROLOP_PRIVATE_EVAL_REC_10875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10876(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10876_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10876_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10876_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10876_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10877
#define MACROLOP_PRIVATE_EVAL_REC_10876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10877(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10877_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10877_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10877_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10877_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10878
#define MACROLOP_PRIVATE_EVAL_REC_10877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10878(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10878_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10878_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10878_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10878_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10879
#define MACROLOP_PRIVATE_EVAL_REC_10878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10879(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10879_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10879_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10879_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10879_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10880
#define MACROLOP_PRIVATE_EVAL_REC_10879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10880(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10880_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10880_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10880_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10880_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10881
#define MACROLOP_PRIVATE_EVAL_REC_10880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10881(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10881_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10881_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10881_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10881_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10882
#define MACROLOP_PRIVATE_EVAL_REC_10881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10882(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10882_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10882_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10882_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10882_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10883
#define MACROLOP_PRIVATE_EVAL_REC_10882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10883(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10883_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10883_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10883_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10883_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10884
#define MACROLOP_PRIVATE_EVAL_REC_10883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10884(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10884_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10884_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10884_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10884_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10885
#define MACROLOP_PRIVATE_EVAL_REC_10884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10885(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10885_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10885_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10885_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10885_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10886
#define MACROLOP_PRIVATE_EVAL_REC_10885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10886(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10886_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10886_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10886_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10886_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10887
#define MACROLOP_PRIVATE_EVAL_REC_10886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10887(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10887_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10887_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10887_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10887_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10888
#define MACROLOP_PRIVATE_EVAL_REC_10887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10888(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10888_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10888_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10888_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10888_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10889
#define MACROLOP_PRIVATE_EVAL_REC_10888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10889(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10889_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10889_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10889_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10889_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10890
#define MACROLOP_PRIVATE_EVAL_REC_10889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10890(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10890_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10890_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10890_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10890_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10891
#define MACROLOP_PRIVATE_EVAL_REC_10890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10891(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10891_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10891_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10891_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10891_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10892
#define MACROLOP_PRIVATE_EVAL_REC_10891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10892(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10892_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10892_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10892_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10892_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10893
#define MACROLOP_PRIVATE_EVAL_REC_10892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10893(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10893_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10893_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10893_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10893_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10894
#define MACROLOP_PRIVATE_EVAL_REC_10893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10894(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10894_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10894_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10894_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10894_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10895
#define MACROLOP_PRIVATE_EVAL_REC_10894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10895(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10895_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10895_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10895_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10895_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10896
#define MACROLOP_PRIVATE_EVAL_REC_10895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10896(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10896_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10896_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10896_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10896_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10897
#define MACROLOP_PRIVATE_EVAL_REC_10896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10897(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10897_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10897_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10897_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10897_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10898
#define MACROLOP_PRIVATE_EVAL_REC_10897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10898(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10898_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10898_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10898_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10898_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10899
#define MACROLOP_PRIVATE_EVAL_REC_10898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10899(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10899_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10899_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10899_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10899_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10900
#define MACROLOP_PRIVATE_EVAL_REC_10899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10900(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10900_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10900_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10900_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10900_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10901
#define MACROLOP_PRIVATE_EVAL_REC_10900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10901(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10901_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10901_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10901_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10901_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10902
#define MACROLOP_PRIVATE_EVAL_REC_10901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10902(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10902_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10902_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10902_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10902_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10903
#define MACROLOP_PRIVATE_EVAL_REC_10902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10903(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10903_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10903_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10903_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10903_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10904
#define MACROLOP_PRIVATE_EVAL_REC_10903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10904(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10904_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10904_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10904_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10904_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10905
#define MACROLOP_PRIVATE_EVAL_REC_10904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10905(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10905_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10905_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10905_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10905_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10906
#define MACROLOP_PRIVATE_EVAL_REC_10905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10906(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10906_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10906_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10906_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10906_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10907
#define MACROLOP_PRIVATE_EVAL_REC_10906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10907(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10907_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10907_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10907_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10907_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10908
#define MACROLOP_PRIVATE_EVAL_REC_10907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10908(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10908_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10908_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10908_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10908_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10909
#define MACROLOP_PRIVATE_EVAL_REC_10908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10909(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10909_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10909_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10909_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10909_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10910
#define MACROLOP_PRIVATE_EVAL_REC_10909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10910(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10910_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10910_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10910_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10910_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10911
#define MACROLOP_PRIVATE_EVAL_REC_10910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10911(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10911_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10911_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10911_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10911_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10912
#define MACROLOP_PRIVATE_EVAL_REC_10911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10912(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10912_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10912_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10912_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10912_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10913
#define MACROLOP_PRIVATE_EVAL_REC_10912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10913(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10913_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10913_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10913_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10913_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10914
#define MACROLOP_PRIVATE_EVAL_REC_10913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10914(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10914_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10914_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10914_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10914_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10915
#define MACROLOP_PRIVATE_EVAL_REC_10914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10915(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10915_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10915_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10915_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10915_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10916
#define MACROLOP_PRIVATE_EVAL_REC_10915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10916(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10916_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10916_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10916_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10916_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10917
#define MACROLOP_PRIVATE_EVAL_REC_10916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10917(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10917_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10917_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10917_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10917_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10918
#define MACROLOP_PRIVATE_EVAL_REC_10917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10918(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10918_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10918_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10918_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10918_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10919
#define MACROLOP_PRIVATE_EVAL_REC_10918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10919(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10919_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10919_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10919_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10919_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10920
#define MACROLOP_PRIVATE_EVAL_REC_10919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10920(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10920_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10920_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10920_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10920_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10921
#define MACROLOP_PRIVATE_EVAL_REC_10920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10921(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10921_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10921_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10921_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10921_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10922
#define MACROLOP_PRIVATE_EVAL_REC_10921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10922(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10922_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10922_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10922_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10922_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10923
#define MACROLOP_PRIVATE_EVAL_REC_10922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10923(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10923_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10923_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10923_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10923_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10924
#define MACROLOP_PRIVATE_EVAL_REC_10923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10924(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10924_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10924_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10924_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10924_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10925
#define MACROLOP_PRIVATE_EVAL_REC_10924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10925(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10925_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10925_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10925_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10925_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10926
#define MACROLOP_PRIVATE_EVAL_REC_10925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10926(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10926_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10926_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10926_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10926_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10927
#define MACROLOP_PRIVATE_EVAL_REC_10926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10927(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10927_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10927_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10927_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10927_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10928
#define MACROLOP_PRIVATE_EVAL_REC_10927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10928(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10928_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10928_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10928_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10928_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10929
#define MACROLOP_PRIVATE_EVAL_REC_10928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10929(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10929_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10929_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10929_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10929_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10930
#define MACROLOP_PRIVATE_EVAL_REC_10929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10930(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10930_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10930_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10930_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10930_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10931
#define MACROLOP_PRIVATE_EVAL_REC_10930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10931(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10931_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10931_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10931_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10931_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10932
#define MACROLOP_PRIVATE_EVAL_REC_10931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10932(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10932_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10932_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10932_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10932_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10933
#define MACROLOP_PRIVATE_EVAL_REC_10932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10933(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10933_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10933_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10933_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10933_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10934
#define MACROLOP_PRIVATE_EVAL_REC_10933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10934(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10934_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10934_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10934_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10934_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10935
#define MACROLOP_PRIVATE_EVAL_REC_10934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10935(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10935_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10935_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10935_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10935_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10936
#define MACROLOP_PRIVATE_EVAL_REC_10935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10936(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10936_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10936_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10936_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10936_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10937
#define MACROLOP_PRIVATE_EVAL_REC_10936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10937(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10937_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10937_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10937_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10937_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10938
#define MACROLOP_PRIVATE_EVAL_REC_10937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10938(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10938_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10938_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10938_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10938_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10939
#define MACROLOP_PRIVATE_EVAL_REC_10938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10939(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10939_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10939_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10939_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10939_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10940
#define MACROLOP_PRIVATE_EVAL_REC_10939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10940(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10940_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10940_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10940_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10940_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10941
#define MACROLOP_PRIVATE_EVAL_REC_10940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10941(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10941_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10941_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10941_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10941_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10942
#define MACROLOP_PRIVATE_EVAL_REC_10941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10942(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10942_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10942_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10942_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10942_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10943
#define MACROLOP_PRIVATE_EVAL_REC_10942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10943(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10943_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10943_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10943_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10943_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10944
#define MACROLOP_PRIVATE_EVAL_REC_10943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10944(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10944_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10944_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10944_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10944_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10945
#define MACROLOP_PRIVATE_EVAL_REC_10944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10945(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10945_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10945_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10945_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10945_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10946
#define MACROLOP_PRIVATE_EVAL_REC_10945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10946(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10946_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10946_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10946_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10946_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10947
#define MACROLOP_PRIVATE_EVAL_REC_10946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10947(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10947_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10947_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10947_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10947_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10948
#define MACROLOP_PRIVATE_EVAL_REC_10947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10948(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10948_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10948_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10948_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10948_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10949
#define MACROLOP_PRIVATE_EVAL_REC_10948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10949(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10949_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10949_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10949_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10949_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10950
#define MACROLOP_PRIVATE_EVAL_REC_10949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10950(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10950_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10950_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10950_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10950_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10951
#define MACROLOP_PRIVATE_EVAL_REC_10950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10951(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10951_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10951_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10951_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10951_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10952
#define MACROLOP_PRIVATE_EVAL_REC_10951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10952(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10952_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10952_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10952_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10952_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10953
#define MACROLOP_PRIVATE_EVAL_REC_10952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10953(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10953_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10953_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10953_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10953_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10954
#define MACROLOP_PRIVATE_EVAL_REC_10953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10954(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10954_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10954_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10954_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10954_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10955
#define MACROLOP_PRIVATE_EVAL_REC_10954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10955(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10955_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10955_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10955_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10955_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10956
#define MACROLOP_PRIVATE_EVAL_REC_10955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10956(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10956_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10956_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10956_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10956_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10957
#define MACROLOP_PRIVATE_EVAL_REC_10956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10957(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10957_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10957_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10957_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10957_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10958
#define MACROLOP_PRIVATE_EVAL_REC_10957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10958(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10958_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10958_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10958_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10958_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10959
#define MACROLOP_PRIVATE_EVAL_REC_10958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10959(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10959_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10959_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10959_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10959_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10960
#define MACROLOP_PRIVATE_EVAL_REC_10959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10960(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10960_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10960_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10960_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10960_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10961
#define MACROLOP_PRIVATE_EVAL_REC_10960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10961(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10961_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10961_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10961_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10961_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10962
#define MACROLOP_PRIVATE_EVAL_REC_10961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10962(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10962_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10962_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10962_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10962_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10963
#define MACROLOP_PRIVATE_EVAL_REC_10962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10963(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10963_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10963_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10963_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10963_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10964
#define MACROLOP_PRIVATE_EVAL_REC_10963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10964(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10964_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10964_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10964_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10964_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10965
#define MACROLOP_PRIVATE_EVAL_REC_10964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10965(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10965_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10965_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10965_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10965_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10966
#define MACROLOP_PRIVATE_EVAL_REC_10965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10966(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10966_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10966_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10966_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10966_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10967
#define MACROLOP_PRIVATE_EVAL_REC_10966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10967(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10967_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10967_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10967_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10967_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10968
#define MACROLOP_PRIVATE_EVAL_REC_10967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10968(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10968_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10968_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10968_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10968_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10969
#define MACROLOP_PRIVATE_EVAL_REC_10968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10969(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10969_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10969_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10969_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10969_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10970
#define MACROLOP_PRIVATE_EVAL_REC_10969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10970(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10970_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10970_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10970_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10970_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10971
#define MACROLOP_PRIVATE_EVAL_REC_10970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10971(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10971_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10971_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10971_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10971_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10972
#define MACROLOP_PRIVATE_EVAL_REC_10971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10972(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10972_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10972_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10972_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10972_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10973
#define MACROLOP_PRIVATE_EVAL_REC_10972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10973(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10973_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10973_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10973_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10973_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10974
#define MACROLOP_PRIVATE_EVAL_REC_10973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10974(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10974_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10974_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10974_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10974_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10975
#define MACROLOP_PRIVATE_EVAL_REC_10974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10975(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10975_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10975_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10975_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10975_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10976
#define MACROLOP_PRIVATE_EVAL_REC_10975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10976(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10976_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10976_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10976_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10976_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10977
#define MACROLOP_PRIVATE_EVAL_REC_10976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10977(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10977_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10977_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10977_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10977_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10978
#define MACROLOP_PRIVATE_EVAL_REC_10977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10978(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10978_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10978_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10978_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10978_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10979
#define MACROLOP_PRIVATE_EVAL_REC_10978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10979(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10979_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10979_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10979_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10979_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10980
#define MACROLOP_PRIVATE_EVAL_REC_10979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10980(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10980_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10980_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10980_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10980_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10981
#define MACROLOP_PRIVATE_EVAL_REC_10980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10981(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10981_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10981_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10981_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10981_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10982
#define MACROLOP_PRIVATE_EVAL_REC_10981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10982(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10982_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10982_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10982_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10982_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10983
#define MACROLOP_PRIVATE_EVAL_REC_10982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10983(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10983_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10983_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10983_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10983_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10984
#define MACROLOP_PRIVATE_EVAL_REC_10983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10984(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10984_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10984_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10984_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10984_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10985
#define MACROLOP_PRIVATE_EVAL_REC_10984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10985(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10985_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10985_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10985_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10985_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10986
#define MACROLOP_PRIVATE_EVAL_REC_10985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10986(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10986_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10986_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10986_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10986_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10987
#define MACROLOP_PRIVATE_EVAL_REC_10986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10987(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10987_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10987_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10987_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10987_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10988
#define MACROLOP_PRIVATE_EVAL_REC_10987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10988(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10988_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10988_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10988_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10988_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10989
#define MACROLOP_PRIVATE_EVAL_REC_10988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10989(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10989_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10989_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10989_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10989_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10990
#define MACROLOP_PRIVATE_EVAL_REC_10989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10990(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10990_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10990_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10990_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10990_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10991
#define MACROLOP_PRIVATE_EVAL_REC_10990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10991(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10991_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10991_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10991_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10991_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10992
#define MACROLOP_PRIVATE_EVAL_REC_10991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10992(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10992_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10992_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10992_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10992_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10993
#define MACROLOP_PRIVATE_EVAL_REC_10992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10993(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10993_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10993_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10993_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10993_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10994
#define MACROLOP_PRIVATE_EVAL_REC_10993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10994(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10994_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10994_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10994_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10994_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10995
#define MACROLOP_PRIVATE_EVAL_REC_10994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10995(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10995_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10995_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10995_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10995_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10996
#define MACROLOP_PRIVATE_EVAL_REC_10995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10996(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10996_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10996_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10996_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10996_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10997
#define MACROLOP_PRIVATE_EVAL_REC_10996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10997(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10997_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10997_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10997_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10997_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10998
#define MACROLOP_PRIVATE_EVAL_REC_10997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10998(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10998_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10998_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10998_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10998_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_10999
#define MACROLOP_PRIVATE_EVAL_REC_10998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_10999(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_10999_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_10999_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_10999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_10999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_10999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_10999_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_10999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_10999_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_10999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_10999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11000
#define MACROLOP_PRIVATE_EVAL_REC_10999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11000(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11000_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11000_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11000_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11000_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11001
#define MACROLOP_PRIVATE_EVAL_REC_11000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11001(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11001_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11001_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11001_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11001_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11002
#define MACROLOP_PRIVATE_EVAL_REC_11001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11002(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11002_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11002_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11002_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11002_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11003
#define MACROLOP_PRIVATE_EVAL_REC_11002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11003(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11003_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11003_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11003_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11003_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11004
#define MACROLOP_PRIVATE_EVAL_REC_11003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11004(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11004_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11004_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11004_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11004_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11005
#define MACROLOP_PRIVATE_EVAL_REC_11004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11005(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11005_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11005_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11005_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11005_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11006
#define MACROLOP_PRIVATE_EVAL_REC_11005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11006(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11006_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11006_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11006_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11006_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11007
#define MACROLOP_PRIVATE_EVAL_REC_11006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11007(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11007_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11007_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11007_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11007_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11008
#define MACROLOP_PRIVATE_EVAL_REC_11007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11008(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11008_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11008_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11008_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11008_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11009
#define MACROLOP_PRIVATE_EVAL_REC_11008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11009(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11009_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11009_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11009_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11009_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11010
#define MACROLOP_PRIVATE_EVAL_REC_11009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11010(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11010_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11010_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11010_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11010_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11011
#define MACROLOP_PRIVATE_EVAL_REC_11010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11011(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11011_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11011_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11011_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11011_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11012
#define MACROLOP_PRIVATE_EVAL_REC_11011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11012(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11012_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11012_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11012_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11012_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11013
#define MACROLOP_PRIVATE_EVAL_REC_11012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11013(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11013_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11013_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11013_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11013_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11014
#define MACROLOP_PRIVATE_EVAL_REC_11013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11014(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11014_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11014_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11014_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11014_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11015
#define MACROLOP_PRIVATE_EVAL_REC_11014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11015(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11015_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11015_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11015_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11015_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11016
#define MACROLOP_PRIVATE_EVAL_REC_11015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11016(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11016_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11016_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11016_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11016_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11017
#define MACROLOP_PRIVATE_EVAL_REC_11016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11017(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11017_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11017_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11017_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11017_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11018
#define MACROLOP_PRIVATE_EVAL_REC_11017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11018(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11018_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11018_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11018_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11018_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11019
#define MACROLOP_PRIVATE_EVAL_REC_11018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11019(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11019_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11019_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11019_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11019_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11020
#define MACROLOP_PRIVATE_EVAL_REC_11019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11020(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11020_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11020_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11020_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11020_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11021
#define MACROLOP_PRIVATE_EVAL_REC_11020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11021(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11021_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11021_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11021_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11021_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11022
#define MACROLOP_PRIVATE_EVAL_REC_11021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11022(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11022_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11022_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11022_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11022_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11023
#define MACROLOP_PRIVATE_EVAL_REC_11022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11023(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11023_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11023_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11023_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11023_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11024
#define MACROLOP_PRIVATE_EVAL_REC_11023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11024(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11024_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11024_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11024_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11024_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11025
#define MACROLOP_PRIVATE_EVAL_REC_11024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11025(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11025_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11025_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11025_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11025_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11026
#define MACROLOP_PRIVATE_EVAL_REC_11025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11026(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11026_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11026_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11026_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11026_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11027
#define MACROLOP_PRIVATE_EVAL_REC_11026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11027(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11027_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11027_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11027_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11027_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11028
#define MACROLOP_PRIVATE_EVAL_REC_11027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11028(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11028_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11028_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11028_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11028_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11029
#define MACROLOP_PRIVATE_EVAL_REC_11028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11029(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11029_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11029_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11029_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11029_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11030
#define MACROLOP_PRIVATE_EVAL_REC_11029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11030(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11030_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11030_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11030_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11030_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11031
#define MACROLOP_PRIVATE_EVAL_REC_11030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11031(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11031_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11031_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11031_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11031_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11032
#define MACROLOP_PRIVATE_EVAL_REC_11031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11032(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11032_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11032_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11032_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11032_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11033
#define MACROLOP_PRIVATE_EVAL_REC_11032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11033(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11033_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11033_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11033_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11033_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11034
#define MACROLOP_PRIVATE_EVAL_REC_11033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11034(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11034_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11034_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11034_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11034_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11035
#define MACROLOP_PRIVATE_EVAL_REC_11034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11035(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11035_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11035_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11035_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11035_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11036
#define MACROLOP_PRIVATE_EVAL_REC_11035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11036(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11036_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11036_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11036_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11036_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11037
#define MACROLOP_PRIVATE_EVAL_REC_11036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11037(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11037_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11037_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11037_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11037_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11038
#define MACROLOP_PRIVATE_EVAL_REC_11037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11038(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11038_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11038_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11038_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11038_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11039
#define MACROLOP_PRIVATE_EVAL_REC_11038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11039(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11039_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11039_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11039_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11039_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11040
#define MACROLOP_PRIVATE_EVAL_REC_11039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11040(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11040_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11040_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11040_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11040_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11041
#define MACROLOP_PRIVATE_EVAL_REC_11040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11041(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11041_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11041_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11041_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11041_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11042
#define MACROLOP_PRIVATE_EVAL_REC_11041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11042(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11042_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11042_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11042_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11042_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11043
#define MACROLOP_PRIVATE_EVAL_REC_11042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11043(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11043_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11043_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11043_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11043_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11044
#define MACROLOP_PRIVATE_EVAL_REC_11043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11044(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11044_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11044_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11044_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11044_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11045
#define MACROLOP_PRIVATE_EVAL_REC_11044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11045(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11045_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11045_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11045_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11045_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11046
#define MACROLOP_PRIVATE_EVAL_REC_11045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11046(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11046_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11046_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11046_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11046_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11047
#define MACROLOP_PRIVATE_EVAL_REC_11046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11047(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11047_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11047_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11047_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11047_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11048
#define MACROLOP_PRIVATE_EVAL_REC_11047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11048(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11048_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11048_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11048_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11048_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11049
#define MACROLOP_PRIVATE_EVAL_REC_11048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11049(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11049_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11049_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11049_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11049_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11050
#define MACROLOP_PRIVATE_EVAL_REC_11049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11050(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11050_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11050_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11050_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11050_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11051
#define MACROLOP_PRIVATE_EVAL_REC_11050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11051(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11051_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11051_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11051_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11051_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11052
#define MACROLOP_PRIVATE_EVAL_REC_11051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11052(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11052_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11052_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11052_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11052_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11053
#define MACROLOP_PRIVATE_EVAL_REC_11052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11053(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11053_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11053_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11053_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11053_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11054
#define MACROLOP_PRIVATE_EVAL_REC_11053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11054(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11054_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11054_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11054_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11054_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11055
#define MACROLOP_PRIVATE_EVAL_REC_11054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11055(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11055_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11055_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11055_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11055_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11056
#define MACROLOP_PRIVATE_EVAL_REC_11055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11056(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11056_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11056_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11056_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11056_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11057
#define MACROLOP_PRIVATE_EVAL_REC_11056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11057(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11057_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11057_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11057_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11057_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11058
#define MACROLOP_PRIVATE_EVAL_REC_11057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11058(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11058_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11058_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11058_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11058_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11059
#define MACROLOP_PRIVATE_EVAL_REC_11058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11059(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11059_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11059_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11059_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11059_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11060
#define MACROLOP_PRIVATE_EVAL_REC_11059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11060(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11060_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11060_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11060_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11060_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11061
#define MACROLOP_PRIVATE_EVAL_REC_11060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11061(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11061_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11061_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11061_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11061_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11062
#define MACROLOP_PRIVATE_EVAL_REC_11061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11062(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11062_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11062_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11062_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11062_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11063
#define MACROLOP_PRIVATE_EVAL_REC_11062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11063(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11063_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11063_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11063_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11063_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11064
#define MACROLOP_PRIVATE_EVAL_REC_11063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11064(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11064_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11064_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11064_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11064_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11065
#define MACROLOP_PRIVATE_EVAL_REC_11064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11065(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11065_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11065_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11065_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11065_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11066
#define MACROLOP_PRIVATE_EVAL_REC_11065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11066(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11066_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11066_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11066_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11066_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11067
#define MACROLOP_PRIVATE_EVAL_REC_11066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11067(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11067_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11067_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11067_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11067_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11068
#define MACROLOP_PRIVATE_EVAL_REC_11067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11068(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11068_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11068_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11068_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11068_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11069
#define MACROLOP_PRIVATE_EVAL_REC_11068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11069(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11069_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11069_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11069_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11069_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11070
#define MACROLOP_PRIVATE_EVAL_REC_11069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11070(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11070_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11070_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11070_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11070_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11071
#define MACROLOP_PRIVATE_EVAL_REC_11070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11071(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11071_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11071_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11071_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11071_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11072
#define MACROLOP_PRIVATE_EVAL_REC_11071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11072(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11072_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11072_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11072_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11072_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11073
#define MACROLOP_PRIVATE_EVAL_REC_11072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11073(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11073_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11073_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11073_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11073_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11074
#define MACROLOP_PRIVATE_EVAL_REC_11073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11074(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11074_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11074_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11074_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11074_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11075
#define MACROLOP_PRIVATE_EVAL_REC_11074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11075(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11075_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11075_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11075_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11075_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11076
#define MACROLOP_PRIVATE_EVAL_REC_11075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11076(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11076_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11076_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11076_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11076_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11077
#define MACROLOP_PRIVATE_EVAL_REC_11076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11077(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11077_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11077_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11077_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11077_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11078
#define MACROLOP_PRIVATE_EVAL_REC_11077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11078(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11078_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11078_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11078_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11078_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11079
#define MACROLOP_PRIVATE_EVAL_REC_11078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11079(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11079_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11079_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11079_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11079_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11080
#define MACROLOP_PRIVATE_EVAL_REC_11079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11080(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11080_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11080_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11080_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11080_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11081
#define MACROLOP_PRIVATE_EVAL_REC_11080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11081(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11081_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11081_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11081_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11081_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11082
#define MACROLOP_PRIVATE_EVAL_REC_11081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11082(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11082_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11082_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11082_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11082_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11083
#define MACROLOP_PRIVATE_EVAL_REC_11082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11083(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11083_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11083_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11083_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11083_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11084
#define MACROLOP_PRIVATE_EVAL_REC_11083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11084(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11084_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11084_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11084_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11084_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11085
#define MACROLOP_PRIVATE_EVAL_REC_11084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11085(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11085_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11085_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11085_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11085_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11086
#define MACROLOP_PRIVATE_EVAL_REC_11085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11086(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11086_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11086_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11086_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11086_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11087
#define MACROLOP_PRIVATE_EVAL_REC_11086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11087(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11087_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11087_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11087_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11087_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11088
#define MACROLOP_PRIVATE_EVAL_REC_11087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11088(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11088_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11088_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11088_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11088_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11089
#define MACROLOP_PRIVATE_EVAL_REC_11088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11089(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11089_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11089_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11089_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11089_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11090
#define MACROLOP_PRIVATE_EVAL_REC_11089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11090(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11090_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11090_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11090_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11090_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11091
#define MACROLOP_PRIVATE_EVAL_REC_11090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11091(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11091_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11091_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11091_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11091_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11092
#define MACROLOP_PRIVATE_EVAL_REC_11091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11092(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11092_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11092_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11092_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11092_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11093
#define MACROLOP_PRIVATE_EVAL_REC_11092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11093(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11093_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11093_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11093_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11093_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11094
#define MACROLOP_PRIVATE_EVAL_REC_11093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11094(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11094_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11094_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11094_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11094_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11095
#define MACROLOP_PRIVATE_EVAL_REC_11094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11095(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11095_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11095_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11095_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11095_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11096
#define MACROLOP_PRIVATE_EVAL_REC_11095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11096(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11096_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11096_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11096_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11096_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11097
#define MACROLOP_PRIVATE_EVAL_REC_11096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11097(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11097_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11097_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11097_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11097_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11098
#define MACROLOP_PRIVATE_EVAL_REC_11097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11098(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11098_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11098_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11098_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11098_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11099
#define MACROLOP_PRIVATE_EVAL_REC_11098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11099(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11099_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11099_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11099_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11099_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11100
#define MACROLOP_PRIVATE_EVAL_REC_11099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11100(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11100_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11100_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11100_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11100_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11101
#define MACROLOP_PRIVATE_EVAL_REC_11100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11101(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11101_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11101_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11101_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11101_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11102
#define MACROLOP_PRIVATE_EVAL_REC_11101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11102(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11102_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11102_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11102_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11102_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11103
#define MACROLOP_PRIVATE_EVAL_REC_11102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11103(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11103_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11103_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11103_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11103_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11104
#define MACROLOP_PRIVATE_EVAL_REC_11103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11104(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11104_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11104_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11104_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11104_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11105
#define MACROLOP_PRIVATE_EVAL_REC_11104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11105(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11105_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11105_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11105_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11105_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11106
#define MACROLOP_PRIVATE_EVAL_REC_11105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11106(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11106_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11106_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11106_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11106_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11107
#define MACROLOP_PRIVATE_EVAL_REC_11106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11107(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11107_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11107_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11107_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11107_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11108
#define MACROLOP_PRIVATE_EVAL_REC_11107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11108(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11108_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11108_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11108_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11108_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11109
#define MACROLOP_PRIVATE_EVAL_REC_11108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11109(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11109_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11109_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11109_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11109_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11110
#define MACROLOP_PRIVATE_EVAL_REC_11109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11110(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11110_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11110_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11110_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11110_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11111
#define MACROLOP_PRIVATE_EVAL_REC_11110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11111(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11111_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11111_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11111_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11111_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11112
#define MACROLOP_PRIVATE_EVAL_REC_11111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11112(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11112_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11112_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11112_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11112_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11113
#define MACROLOP_PRIVATE_EVAL_REC_11112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11113(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11113_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11113_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11113_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11113_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11114
#define MACROLOP_PRIVATE_EVAL_REC_11113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11114(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11114_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11114_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11114_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11114_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11115
#define MACROLOP_PRIVATE_EVAL_REC_11114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11115(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11115_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11115_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11115_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11115_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11116
#define MACROLOP_PRIVATE_EVAL_REC_11115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11116(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11116_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11116_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11116_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11116_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11117
#define MACROLOP_PRIVATE_EVAL_REC_11116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11117(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11117_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11117_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11117_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11117_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11118
#define MACROLOP_PRIVATE_EVAL_REC_11117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11118(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11118_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11118_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11118_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11118_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11119
#define MACROLOP_PRIVATE_EVAL_REC_11118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11119(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11119_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11119_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11119_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11119_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11120
#define MACROLOP_PRIVATE_EVAL_REC_11119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11120(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11120_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11120_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11120_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11120_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11121
#define MACROLOP_PRIVATE_EVAL_REC_11120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11121(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11121_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11121_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11121_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11121_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11122
#define MACROLOP_PRIVATE_EVAL_REC_11121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11122(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11122_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11122_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11122_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11122_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11123
#define MACROLOP_PRIVATE_EVAL_REC_11122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11123(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11123_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11123_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11123_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11123_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11124
#define MACROLOP_PRIVATE_EVAL_REC_11123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11124(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11124_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11124_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11124_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11124_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11125
#define MACROLOP_PRIVATE_EVAL_REC_11124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11125(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11125_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11125_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11125_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11125_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11126
#define MACROLOP_PRIVATE_EVAL_REC_11125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11126(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11126_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11126_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11126_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11126_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11127
#define MACROLOP_PRIVATE_EVAL_REC_11126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11127(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11127_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11127_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11127_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11127_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11128
#define MACROLOP_PRIVATE_EVAL_REC_11127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11128(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11128_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11128_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11128_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11128_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11129
#define MACROLOP_PRIVATE_EVAL_REC_11128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11129(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11129_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11129_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11129_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11129_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11130
#define MACROLOP_PRIVATE_EVAL_REC_11129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11130(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11130_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11130_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11130_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11130_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11131
#define MACROLOP_PRIVATE_EVAL_REC_11130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11131(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11131_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11131_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11131_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11131_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11132
#define MACROLOP_PRIVATE_EVAL_REC_11131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11132(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11132_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11132_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11132_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11132_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11133
#define MACROLOP_PRIVATE_EVAL_REC_11132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11133(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11133_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11133_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11133_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11133_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11134
#define MACROLOP_PRIVATE_EVAL_REC_11133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11134(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11134_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11134_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11134_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11134_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11135
#define MACROLOP_PRIVATE_EVAL_REC_11134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11135(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11135_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11135_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11135_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11135_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11136
#define MACROLOP_PRIVATE_EVAL_REC_11135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11136(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11136_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11136_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11136_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11136_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11137
#define MACROLOP_PRIVATE_EVAL_REC_11136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11137(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11137_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11137_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11137_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11137_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11138
#define MACROLOP_PRIVATE_EVAL_REC_11137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11138(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11138_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11138_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11138_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11138_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11139
#define MACROLOP_PRIVATE_EVAL_REC_11138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11139(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11139_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11139_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11139_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11139_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11140
#define MACROLOP_PRIVATE_EVAL_REC_11139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11140(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11140_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11140_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11140_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11140_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11141
#define MACROLOP_PRIVATE_EVAL_REC_11140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11141(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11141_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11141_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11141_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11141_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11142
#define MACROLOP_PRIVATE_EVAL_REC_11141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11142(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11142_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11142_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11142_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11142_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11143
#define MACROLOP_PRIVATE_EVAL_REC_11142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11143(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11143_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11143_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11143_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11143_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11144
#define MACROLOP_PRIVATE_EVAL_REC_11143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11144(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11144_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11144_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11144_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11144_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11145
#define MACROLOP_PRIVATE_EVAL_REC_11144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11145(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11145_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11145_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11145_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11145_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11146
#define MACROLOP_PRIVATE_EVAL_REC_11145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11146(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11146_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11146_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11146_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11146_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11147
#define MACROLOP_PRIVATE_EVAL_REC_11146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11147(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11147_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11147_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11147_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11147_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11148
#define MACROLOP_PRIVATE_EVAL_REC_11147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11148(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11148_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11148_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11148_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11148_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11149
#define MACROLOP_PRIVATE_EVAL_REC_11148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11149(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11149_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11149_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11149_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11149_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11150
#define MACROLOP_PRIVATE_EVAL_REC_11149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11150(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11150_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11150_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11150_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11150_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11151
#define MACROLOP_PRIVATE_EVAL_REC_11150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11151(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11151_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11151_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11151_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11151_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11152
#define MACROLOP_PRIVATE_EVAL_REC_11151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11152(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11152_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11152_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11152_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11152_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11153
#define MACROLOP_PRIVATE_EVAL_REC_11152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11153(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11153_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11153_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11153_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11153_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11154
#define MACROLOP_PRIVATE_EVAL_REC_11153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11154(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11154_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11154_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11154_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11154_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11155
#define MACROLOP_PRIVATE_EVAL_REC_11154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11155(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11155_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11155_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11155_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11155_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11156
#define MACROLOP_PRIVATE_EVAL_REC_11155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11156(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11156_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11156_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11156_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11156_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11157
#define MACROLOP_PRIVATE_EVAL_REC_11156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11157(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11157_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11157_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11157_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11157_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11158
#define MACROLOP_PRIVATE_EVAL_REC_11157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11158(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11158_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11158_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11158_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11158_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11159
#define MACROLOP_PRIVATE_EVAL_REC_11158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11159(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11159_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11159_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11159_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11159_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11160
#define MACROLOP_PRIVATE_EVAL_REC_11159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11160(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11160_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11160_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11160_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11160_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11161
#define MACROLOP_PRIVATE_EVAL_REC_11160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11161(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11161_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11161_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11161_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11161_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11162
#define MACROLOP_PRIVATE_EVAL_REC_11161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11162(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11162_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11162_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11162_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11162_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11163
#define MACROLOP_PRIVATE_EVAL_REC_11162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11163(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11163_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11163_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11163_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11163_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11164
#define MACROLOP_PRIVATE_EVAL_REC_11163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11164(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11164_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11164_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11164_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11164_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11165
#define MACROLOP_PRIVATE_EVAL_REC_11164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11165(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11165_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11165_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11165_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11165_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11166
#define MACROLOP_PRIVATE_EVAL_REC_11165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11166(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11166_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11166_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11166_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11166_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11167
#define MACROLOP_PRIVATE_EVAL_REC_11166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11167(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11167_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11167_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11167_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11167_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11168
#define MACROLOP_PRIVATE_EVAL_REC_11167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11168(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11168_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11168_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11168_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11168_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11169
#define MACROLOP_PRIVATE_EVAL_REC_11168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11169(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11169_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11169_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11169_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11169_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11170
#define MACROLOP_PRIVATE_EVAL_REC_11169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11170(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11170_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11170_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11170_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11170_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11171
#define MACROLOP_PRIVATE_EVAL_REC_11170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11171(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11171_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11171_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11171_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11171_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11172
#define MACROLOP_PRIVATE_EVAL_REC_11171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11172(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11172_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11172_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11172_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11172_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11173
#define MACROLOP_PRIVATE_EVAL_REC_11172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11173(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11173_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11173_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11173_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11173_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11174
#define MACROLOP_PRIVATE_EVAL_REC_11173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11174(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11174_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11174_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11174_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11174_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11175
#define MACROLOP_PRIVATE_EVAL_REC_11174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11175(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11175_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11175_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11175_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11175_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11176
#define MACROLOP_PRIVATE_EVAL_REC_11175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11176(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11176_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11176_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11176_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11176_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11177
#define MACROLOP_PRIVATE_EVAL_REC_11176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11177(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11177_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11177_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11177_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11177_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11178
#define MACROLOP_PRIVATE_EVAL_REC_11177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11178(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11178_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11178_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11178_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11178_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11179
#define MACROLOP_PRIVATE_EVAL_REC_11178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11179(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11179_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11179_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11179_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11179_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11180
#define MACROLOP_PRIVATE_EVAL_REC_11179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11180(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11180_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11180_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11180_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11180_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11181
#define MACROLOP_PRIVATE_EVAL_REC_11180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11181(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11181_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11181_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11181_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11181_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11182
#define MACROLOP_PRIVATE_EVAL_REC_11181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11182(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11182_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11182_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11182_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11182_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11183
#define MACROLOP_PRIVATE_EVAL_REC_11182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11183(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11183_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11183_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11183_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11183_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11184
#define MACROLOP_PRIVATE_EVAL_REC_11183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11184(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11184_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11184_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11184_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11184_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11185
#define MACROLOP_PRIVATE_EVAL_REC_11184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11185(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11185_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11185_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11185_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11185_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11186
#define MACROLOP_PRIVATE_EVAL_REC_11185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11186(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11186_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11186_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11186_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11186_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11187
#define MACROLOP_PRIVATE_EVAL_REC_11186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11187(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11187_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11187_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11187_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11187_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11188
#define MACROLOP_PRIVATE_EVAL_REC_11187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11188(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11188_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11188_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11188_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11188_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11189
#define MACROLOP_PRIVATE_EVAL_REC_11188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11189(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11189_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11189_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11189_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11189_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11190
#define MACROLOP_PRIVATE_EVAL_REC_11189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11190(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11190_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11190_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11190_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11190_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11191
#define MACROLOP_PRIVATE_EVAL_REC_11190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11191(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11191_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11191_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11191_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11191_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11192
#define MACROLOP_PRIVATE_EVAL_REC_11191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11192(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11192_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11192_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11192_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11192_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11193
#define MACROLOP_PRIVATE_EVAL_REC_11192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11193(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11193_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11193_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11193_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11193_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11194
#define MACROLOP_PRIVATE_EVAL_REC_11193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11194(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11194_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11194_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11194_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11194_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11195
#define MACROLOP_PRIVATE_EVAL_REC_11194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11195(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11195_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11195_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11195_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11195_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11196
#define MACROLOP_PRIVATE_EVAL_REC_11195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11196(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11196_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11196_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11196_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11196_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11197
#define MACROLOP_PRIVATE_EVAL_REC_11196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11197(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11197_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11197_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11197_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11197_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11198
#define MACROLOP_PRIVATE_EVAL_REC_11197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11198(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11198_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11198_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11198_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11198_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11199
#define MACROLOP_PRIVATE_EVAL_REC_11198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11199(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11199_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11199_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11199_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11199_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11200
#define MACROLOP_PRIVATE_EVAL_REC_11199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11200(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11200_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11200_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11200_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11200_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11201
#define MACROLOP_PRIVATE_EVAL_REC_11200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11201(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11201_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11201_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11201_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11201_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11202
#define MACROLOP_PRIVATE_EVAL_REC_11201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11202(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11202_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11202_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11202_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11202_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11203
#define MACROLOP_PRIVATE_EVAL_REC_11202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11203(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11203_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11203_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11203_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11203_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11204
#define MACROLOP_PRIVATE_EVAL_REC_11203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11204(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11204_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11204_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11204_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11204_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11205
#define MACROLOP_PRIVATE_EVAL_REC_11204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11205(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11205_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11205_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11205_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11205_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11206
#define MACROLOP_PRIVATE_EVAL_REC_11205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11206(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11206_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11206_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11206_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11206_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11207
#define MACROLOP_PRIVATE_EVAL_REC_11206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11207(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11207_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11207_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11207_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11207_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11208
#define MACROLOP_PRIVATE_EVAL_REC_11207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11208(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11208_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11208_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11208_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11208_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11209
#define MACROLOP_PRIVATE_EVAL_REC_11208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11209(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11209_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11209_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11209_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11209_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11210
#define MACROLOP_PRIVATE_EVAL_REC_11209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11210(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11210_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11210_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11210_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11210_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11211
#define MACROLOP_PRIVATE_EVAL_REC_11210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11211(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11211_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11211_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11211_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11211_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11212
#define MACROLOP_PRIVATE_EVAL_REC_11211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11212(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11212_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11212_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11212_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11212_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11213
#define MACROLOP_PRIVATE_EVAL_REC_11212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11213(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11213_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11213_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11213_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11213_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11214
#define MACROLOP_PRIVATE_EVAL_REC_11213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11214(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11214_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11214_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11214_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11214_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11215
#define MACROLOP_PRIVATE_EVAL_REC_11214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11215(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11215_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11215_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11215_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11215_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11216
#define MACROLOP_PRIVATE_EVAL_REC_11215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11216(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11216_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11216_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11216_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11216_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11217
#define MACROLOP_PRIVATE_EVAL_REC_11216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11217(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11217_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11217_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11217_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11217_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11218
#define MACROLOP_PRIVATE_EVAL_REC_11217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11218(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11218_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11218_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11218_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11218_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11219
#define MACROLOP_PRIVATE_EVAL_REC_11218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11219(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11219_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11219_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11219_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11219_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11220
#define MACROLOP_PRIVATE_EVAL_REC_11219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11220(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11220_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11220_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11220_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11220_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11221
#define MACROLOP_PRIVATE_EVAL_REC_11220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11221(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11221_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11221_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11221_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11221_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11222
#define MACROLOP_PRIVATE_EVAL_REC_11221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11222(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11222_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11222_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11222_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11222_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11223
#define MACROLOP_PRIVATE_EVAL_REC_11222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11223(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11223_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11223_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11223_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11223_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11224
#define MACROLOP_PRIVATE_EVAL_REC_11223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11224(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11224_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11224_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11224_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11224_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11225
#define MACROLOP_PRIVATE_EVAL_REC_11224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11225(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11225_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11225_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11225_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11225_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11226
#define MACROLOP_PRIVATE_EVAL_REC_11225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11226(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11226_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11226_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11226_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11226_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11227
#define MACROLOP_PRIVATE_EVAL_REC_11226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11227(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11227_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11227_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11227_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11227_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11228
#define MACROLOP_PRIVATE_EVAL_REC_11227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11228(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11228_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11228_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11228_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11228_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11229
#define MACROLOP_PRIVATE_EVAL_REC_11228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11229(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11229_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11229_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11229_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11229_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11230
#define MACROLOP_PRIVATE_EVAL_REC_11229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11230(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11230_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11230_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11230_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11230_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11231
#define MACROLOP_PRIVATE_EVAL_REC_11230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11231(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11231_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11231_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11231_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11231_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11232
#define MACROLOP_PRIVATE_EVAL_REC_11231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11232(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11232_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11232_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11232_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11232_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11233
#define MACROLOP_PRIVATE_EVAL_REC_11232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11233(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11233_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11233_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11233_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11233_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11234
#define MACROLOP_PRIVATE_EVAL_REC_11233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11234(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11234_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11234_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11234_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11234_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11235
#define MACROLOP_PRIVATE_EVAL_REC_11234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11235(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11235_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11235_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11235_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11235_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11236
#define MACROLOP_PRIVATE_EVAL_REC_11235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11236(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11236_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11236_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11236_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11236_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11237
#define MACROLOP_PRIVATE_EVAL_REC_11236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11237(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11237_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11237_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11237_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11237_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11238
#define MACROLOP_PRIVATE_EVAL_REC_11237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11238(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11238_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11238_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11238_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11238_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11239
#define MACROLOP_PRIVATE_EVAL_REC_11238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11239(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11239_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11239_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11239_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11239_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11240
#define MACROLOP_PRIVATE_EVAL_REC_11239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11240(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11240_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11240_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11240_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11240_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11241
#define MACROLOP_PRIVATE_EVAL_REC_11240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11241(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11241_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11241_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11241_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11241_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11242
#define MACROLOP_PRIVATE_EVAL_REC_11241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11242(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11242_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11242_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11242_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11242_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11243
#define MACROLOP_PRIVATE_EVAL_REC_11242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11243(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11243_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11243_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11243_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11243_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11244
#define MACROLOP_PRIVATE_EVAL_REC_11243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11244(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11244_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11244_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11244_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11244_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11245
#define MACROLOP_PRIVATE_EVAL_REC_11244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11245(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11245_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11245_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11245_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11245_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11246
#define MACROLOP_PRIVATE_EVAL_REC_11245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11246(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11246_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11246_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11246_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11246_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11247
#define MACROLOP_PRIVATE_EVAL_REC_11246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11247(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11247_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11247_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11247_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11247_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11248
#define MACROLOP_PRIVATE_EVAL_REC_11247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11248(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11248_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11248_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11248_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11248_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11249
#define MACROLOP_PRIVATE_EVAL_REC_11248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11249(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11249_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11249_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11249_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11249_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11250
#define MACROLOP_PRIVATE_EVAL_REC_11249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11250(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11250_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11250_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11250_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11250_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11251
#define MACROLOP_PRIVATE_EVAL_REC_11250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11251(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11251_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11251_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11251_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11251_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11252
#define MACROLOP_PRIVATE_EVAL_REC_11251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11252(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11252_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11252_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11252_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11252_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11253
#define MACROLOP_PRIVATE_EVAL_REC_11252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11253(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11253_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11253_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11253_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11253_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11254
#define MACROLOP_PRIVATE_EVAL_REC_11253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11254(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11254_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11254_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11254_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11254_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11255
#define MACROLOP_PRIVATE_EVAL_REC_11254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11255(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11255_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11255_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11255_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11255_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11256
#define MACROLOP_PRIVATE_EVAL_REC_11255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11256(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11256_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11256_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11256_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11256_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11257
#define MACROLOP_PRIVATE_EVAL_REC_11256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11257(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11257_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11257_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11257_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11257_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11258
#define MACROLOP_PRIVATE_EVAL_REC_11257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11258(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11258_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11258_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11258_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11258_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11259
#define MACROLOP_PRIVATE_EVAL_REC_11258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11259(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11259_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11259_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11259_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11259_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11260
#define MACROLOP_PRIVATE_EVAL_REC_11259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11260(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11260_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11260_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11260_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11260_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11261
#define MACROLOP_PRIVATE_EVAL_REC_11260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11261(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11261_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11261_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11261_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11261_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11262
#define MACROLOP_PRIVATE_EVAL_REC_11261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11262(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11262_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11262_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11262_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11262_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11263
#define MACROLOP_PRIVATE_EVAL_REC_11262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11263(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11263_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11263_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11263_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11263_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11264
#define MACROLOP_PRIVATE_EVAL_REC_11263_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_10240_TO_11263_H
