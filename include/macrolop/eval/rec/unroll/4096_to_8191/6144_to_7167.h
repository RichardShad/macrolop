#ifndef MACROLOP_EVAL_REC_UNROLL_6144_TO_7167_H
#define MACROLOP_EVAL_REC_UNROLL_6144_TO_7167_H

#define MACROLOP_PRIVATE_EVAL_REC_6144(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6144_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6144_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6144_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6144_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6145
#define MACROLOP_PRIVATE_EVAL_REC_6144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6145(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6145_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6145_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6145_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6145_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6146
#define MACROLOP_PRIVATE_EVAL_REC_6145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6146(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6146_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6146_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6146_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6146_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6147
#define MACROLOP_PRIVATE_EVAL_REC_6146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6147(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6147_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6147_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6147_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6147_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6148
#define MACROLOP_PRIVATE_EVAL_REC_6147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6148(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6148_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6148_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6148_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6148_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6149
#define MACROLOP_PRIVATE_EVAL_REC_6148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6149(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6149_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6149_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6149_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6149_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6150
#define MACROLOP_PRIVATE_EVAL_REC_6149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6150(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6150_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6150_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6150_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6150_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6151
#define MACROLOP_PRIVATE_EVAL_REC_6150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6151(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6151_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6151_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6151_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6151_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6152
#define MACROLOP_PRIVATE_EVAL_REC_6151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6152(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6152_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6152_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6152_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6152_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6153
#define MACROLOP_PRIVATE_EVAL_REC_6152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6153(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6153_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6153_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6153_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6153_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6154
#define MACROLOP_PRIVATE_EVAL_REC_6153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6154(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6154_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6154_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6154_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6154_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6155
#define MACROLOP_PRIVATE_EVAL_REC_6154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6155(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6155_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6155_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6155_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6155_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6156
#define MACROLOP_PRIVATE_EVAL_REC_6155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6156(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6156_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6156_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6156_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6156_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6157
#define MACROLOP_PRIVATE_EVAL_REC_6156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6157(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6157_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6157_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6157_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6157_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6158
#define MACROLOP_PRIVATE_EVAL_REC_6157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6158(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6158_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6158_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6158_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6158_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6159
#define MACROLOP_PRIVATE_EVAL_REC_6158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6159(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6159_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6159_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6159_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6159_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6160
#define MACROLOP_PRIVATE_EVAL_REC_6159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6160(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6160_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6160_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6160_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6160_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6161
#define MACROLOP_PRIVATE_EVAL_REC_6160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6161(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6161_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6161_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6161_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6161_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6162
#define MACROLOP_PRIVATE_EVAL_REC_6161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6162(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6162_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6162_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6162_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6162_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6163
#define MACROLOP_PRIVATE_EVAL_REC_6162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6163(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6163_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6163_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6163_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6163_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6164
#define MACROLOP_PRIVATE_EVAL_REC_6163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6164(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6164_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6164_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6164_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6164_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6165
#define MACROLOP_PRIVATE_EVAL_REC_6164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6165(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6165_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6165_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6165_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6165_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6166
#define MACROLOP_PRIVATE_EVAL_REC_6165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6166(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6166_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6166_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6166_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6166_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6167
#define MACROLOP_PRIVATE_EVAL_REC_6166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6167(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6167_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6167_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6167_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6167_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6168
#define MACROLOP_PRIVATE_EVAL_REC_6167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6168(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6168_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6168_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6168_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6168_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6169
#define MACROLOP_PRIVATE_EVAL_REC_6168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6169(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6169_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6169_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6169_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6169_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6170
#define MACROLOP_PRIVATE_EVAL_REC_6169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6170(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6170_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6170_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6170_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6170_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6171
#define MACROLOP_PRIVATE_EVAL_REC_6170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6171(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6171_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6171_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6171_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6171_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6172
#define MACROLOP_PRIVATE_EVAL_REC_6171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6172(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6172_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6172_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6172_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6172_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6173
#define MACROLOP_PRIVATE_EVAL_REC_6172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6173(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6173_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6173_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6173_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6173_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6174
#define MACROLOP_PRIVATE_EVAL_REC_6173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6174(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6174_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6174_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6174_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6174_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6175
#define MACROLOP_PRIVATE_EVAL_REC_6174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6175(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6175_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6175_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6175_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6175_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6176
#define MACROLOP_PRIVATE_EVAL_REC_6175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6176(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6176_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6176_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6176_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6176_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6177
#define MACROLOP_PRIVATE_EVAL_REC_6176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6177(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6177_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6177_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6177_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6177_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6178
#define MACROLOP_PRIVATE_EVAL_REC_6177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6178(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6178_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6178_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6178_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6178_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6179
#define MACROLOP_PRIVATE_EVAL_REC_6178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6179(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6179_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6179_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6179_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6179_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6180
#define MACROLOP_PRIVATE_EVAL_REC_6179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6180(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6180_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6180_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6180_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6180_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6181
#define MACROLOP_PRIVATE_EVAL_REC_6180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6181(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6181_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6181_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6181_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6181_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6182
#define MACROLOP_PRIVATE_EVAL_REC_6181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6182(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6182_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6182_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6182_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6182_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6183
#define MACROLOP_PRIVATE_EVAL_REC_6182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6183(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6183_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6183_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6183_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6183_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6184
#define MACROLOP_PRIVATE_EVAL_REC_6183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6184(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6184_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6184_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6184_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6184_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6185
#define MACROLOP_PRIVATE_EVAL_REC_6184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6185(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6185_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6185_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6185_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6185_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6186
#define MACROLOP_PRIVATE_EVAL_REC_6185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6186(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6186_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6186_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6186_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6186_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6187
#define MACROLOP_PRIVATE_EVAL_REC_6186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6187(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6187_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6187_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6187_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6187_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6188
#define MACROLOP_PRIVATE_EVAL_REC_6187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6188(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6188_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6188_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6188_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6188_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6189
#define MACROLOP_PRIVATE_EVAL_REC_6188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6189(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6189_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6189_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6189_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6189_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6190
#define MACROLOP_PRIVATE_EVAL_REC_6189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6190(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6190_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6190_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6190_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6190_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6191
#define MACROLOP_PRIVATE_EVAL_REC_6190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6191(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6191_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6191_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6191_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6191_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6192
#define MACROLOP_PRIVATE_EVAL_REC_6191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6192(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6192_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6192_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6192_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6192_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6193
#define MACROLOP_PRIVATE_EVAL_REC_6192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6193(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6193_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6193_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6193_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6193_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6194
#define MACROLOP_PRIVATE_EVAL_REC_6193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6194(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6194_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6194_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6194_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6194_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6195
#define MACROLOP_PRIVATE_EVAL_REC_6194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6195(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6195_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6195_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6195_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6195_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6196
#define MACROLOP_PRIVATE_EVAL_REC_6195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6196(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6196_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6196_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6196_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6196_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6197
#define MACROLOP_PRIVATE_EVAL_REC_6196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6197(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6197_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6197_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6197_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6197_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6198
#define MACROLOP_PRIVATE_EVAL_REC_6197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6198(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6198_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6198_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6198_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6198_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6199
#define MACROLOP_PRIVATE_EVAL_REC_6198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6199(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6199_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6199_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6199_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6199_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6200
#define MACROLOP_PRIVATE_EVAL_REC_6199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6200(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6200_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6200_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6200_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6200_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6201
#define MACROLOP_PRIVATE_EVAL_REC_6200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6201(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6201_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6201_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6201_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6201_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6202
#define MACROLOP_PRIVATE_EVAL_REC_6201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6202(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6202_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6202_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6202_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6202_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6203
#define MACROLOP_PRIVATE_EVAL_REC_6202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6203(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6203_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6203_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6203_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6203_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6204
#define MACROLOP_PRIVATE_EVAL_REC_6203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6204(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6204_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6204_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6204_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6204_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6205
#define MACROLOP_PRIVATE_EVAL_REC_6204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6205(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6205_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6205_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6205_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6205_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6206
#define MACROLOP_PRIVATE_EVAL_REC_6205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6206(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6206_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6206_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6206_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6206_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6207
#define MACROLOP_PRIVATE_EVAL_REC_6206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6207(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6207_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6207_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6207_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6207_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6208
#define MACROLOP_PRIVATE_EVAL_REC_6207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6208(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6208_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6208_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6208_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6208_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6209
#define MACROLOP_PRIVATE_EVAL_REC_6208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6209(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6209_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6209_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6209_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6209_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6210
#define MACROLOP_PRIVATE_EVAL_REC_6209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6210(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6210_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6210_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6210_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6210_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6211
#define MACROLOP_PRIVATE_EVAL_REC_6210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6211(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6211_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6211_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6211_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6211_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6212
#define MACROLOP_PRIVATE_EVAL_REC_6211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6212(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6212_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6212_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6212_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6212_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6213
#define MACROLOP_PRIVATE_EVAL_REC_6212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6213(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6213_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6213_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6213_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6213_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6214
#define MACROLOP_PRIVATE_EVAL_REC_6213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6214(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6214_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6214_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6214_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6214_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6215
#define MACROLOP_PRIVATE_EVAL_REC_6214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6215(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6215_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6215_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6215_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6215_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6216
#define MACROLOP_PRIVATE_EVAL_REC_6215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6216(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6216_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6216_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6216_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6216_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6217
#define MACROLOP_PRIVATE_EVAL_REC_6216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6217(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6217_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6217_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6217_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6217_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6218
#define MACROLOP_PRIVATE_EVAL_REC_6217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6218(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6218_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6218_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6218_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6218_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6219
#define MACROLOP_PRIVATE_EVAL_REC_6218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6219(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6219_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6219_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6219_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6219_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6220
#define MACROLOP_PRIVATE_EVAL_REC_6219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6220(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6220_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6220_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6220_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6220_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6221
#define MACROLOP_PRIVATE_EVAL_REC_6220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6221(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6221_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6221_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6221_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6221_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6222
#define MACROLOP_PRIVATE_EVAL_REC_6221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6222(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6222_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6222_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6222_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6222_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6223
#define MACROLOP_PRIVATE_EVAL_REC_6222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6223(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6223_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6223_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6223_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6223_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6224
#define MACROLOP_PRIVATE_EVAL_REC_6223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6224(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6224_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6224_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6224_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6224_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6225
#define MACROLOP_PRIVATE_EVAL_REC_6224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6225(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6225_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6225_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6225_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6225_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6226
#define MACROLOP_PRIVATE_EVAL_REC_6225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6226(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6226_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6226_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6226_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6226_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6227
#define MACROLOP_PRIVATE_EVAL_REC_6226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6227(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6227_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6227_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6227_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6227_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6228
#define MACROLOP_PRIVATE_EVAL_REC_6227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6228(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6228_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6228_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6228_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6228_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6229
#define MACROLOP_PRIVATE_EVAL_REC_6228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6229(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6229_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6229_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6229_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6229_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6230
#define MACROLOP_PRIVATE_EVAL_REC_6229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6230(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6230_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6230_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6230_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6230_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6231
#define MACROLOP_PRIVATE_EVAL_REC_6230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6231(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6231_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6231_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6231_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6231_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6232
#define MACROLOP_PRIVATE_EVAL_REC_6231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6232(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6232_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6232_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6232_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6232_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6233
#define MACROLOP_PRIVATE_EVAL_REC_6232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6233(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6233_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6233_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6233_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6233_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6234
#define MACROLOP_PRIVATE_EVAL_REC_6233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6234(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6234_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6234_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6234_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6234_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6235
#define MACROLOP_PRIVATE_EVAL_REC_6234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6235(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6235_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6235_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6235_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6235_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6236
#define MACROLOP_PRIVATE_EVAL_REC_6235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6236(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6236_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6236_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6236_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6236_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6237
#define MACROLOP_PRIVATE_EVAL_REC_6236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6237(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6237_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6237_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6237_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6237_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6238
#define MACROLOP_PRIVATE_EVAL_REC_6237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6238(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6238_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6238_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6238_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6238_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6239
#define MACROLOP_PRIVATE_EVAL_REC_6238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6239(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6239_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6239_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6239_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6239_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6240
#define MACROLOP_PRIVATE_EVAL_REC_6239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6240(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6240_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6240_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6240_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6240_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6241
#define MACROLOP_PRIVATE_EVAL_REC_6240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6241(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6241_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6241_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6241_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6241_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6242
#define MACROLOP_PRIVATE_EVAL_REC_6241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6242(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6242_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6242_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6242_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6242_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6243
#define MACROLOP_PRIVATE_EVAL_REC_6242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6243(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6243_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6243_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6243_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6243_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6244
#define MACROLOP_PRIVATE_EVAL_REC_6243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6244(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6244_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6244_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6244_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6244_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6245
#define MACROLOP_PRIVATE_EVAL_REC_6244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6245(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6245_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6245_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6245_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6245_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6246
#define MACROLOP_PRIVATE_EVAL_REC_6245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6246(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6246_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6246_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6246_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6246_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6247
#define MACROLOP_PRIVATE_EVAL_REC_6246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6247(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6247_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6247_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6247_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6247_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6248
#define MACROLOP_PRIVATE_EVAL_REC_6247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6248(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6248_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6248_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6248_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6248_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6249
#define MACROLOP_PRIVATE_EVAL_REC_6248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6249(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6249_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6249_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6249_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6249_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6250
#define MACROLOP_PRIVATE_EVAL_REC_6249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6250(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6250_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6250_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6250_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6250_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6251
#define MACROLOP_PRIVATE_EVAL_REC_6250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6251(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6251_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6251_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6251_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6251_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6252
#define MACROLOP_PRIVATE_EVAL_REC_6251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6252(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6252_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6252_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6252_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6252_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6253
#define MACROLOP_PRIVATE_EVAL_REC_6252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6253(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6253_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6253_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6253_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6253_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6254
#define MACROLOP_PRIVATE_EVAL_REC_6253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6254(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6254_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6254_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6254_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6254_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6255
#define MACROLOP_PRIVATE_EVAL_REC_6254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6255(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6255_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6255_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6255_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6255_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6256
#define MACROLOP_PRIVATE_EVAL_REC_6255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6256(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6256_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6256_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6256_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6256_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6257
#define MACROLOP_PRIVATE_EVAL_REC_6256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6257(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6257_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6257_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6257_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6257_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6258
#define MACROLOP_PRIVATE_EVAL_REC_6257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6258(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6258_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6258_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6258_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6258_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6259
#define MACROLOP_PRIVATE_EVAL_REC_6258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6259(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6259_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6259_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6259_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6259_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6260
#define MACROLOP_PRIVATE_EVAL_REC_6259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6260(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6260_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6260_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6260_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6260_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6261
#define MACROLOP_PRIVATE_EVAL_REC_6260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6261(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6261_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6261_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6261_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6261_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6262
#define MACROLOP_PRIVATE_EVAL_REC_6261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6262(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6262_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6262_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6262_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6262_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6263
#define MACROLOP_PRIVATE_EVAL_REC_6262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6263(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6263_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6263_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6263_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6263_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6264
#define MACROLOP_PRIVATE_EVAL_REC_6263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6264(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6264_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6264_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6264_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6264_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6265
#define MACROLOP_PRIVATE_EVAL_REC_6264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6265(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6265_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6265_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6265_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6265_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6266
#define MACROLOP_PRIVATE_EVAL_REC_6265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6266(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6266_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6266_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6266_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6266_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6267
#define MACROLOP_PRIVATE_EVAL_REC_6266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6267(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6267_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6267_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6267_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6267_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6268
#define MACROLOP_PRIVATE_EVAL_REC_6267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6268(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6268_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6268_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6268_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6268_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6269
#define MACROLOP_PRIVATE_EVAL_REC_6268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6269(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6269_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6269_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6269_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6269_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6270
#define MACROLOP_PRIVATE_EVAL_REC_6269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6270(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6270_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6270_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6270_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6270_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6271
#define MACROLOP_PRIVATE_EVAL_REC_6270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6271(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6271_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6271_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6271_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6271_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6272
#define MACROLOP_PRIVATE_EVAL_REC_6271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6272(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6272_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6272_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6272_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6272_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6273
#define MACROLOP_PRIVATE_EVAL_REC_6272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6273(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6273_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6273_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6273_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6273_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6274
#define MACROLOP_PRIVATE_EVAL_REC_6273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6274(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6274_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6274_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6274_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6274_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6275
#define MACROLOP_PRIVATE_EVAL_REC_6274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6275(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6275_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6275_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6275_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6275_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6276
#define MACROLOP_PRIVATE_EVAL_REC_6275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6276(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6276_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6276_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6276_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6276_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6277
#define MACROLOP_PRIVATE_EVAL_REC_6276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6277(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6277_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6277_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6277_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6277_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6278
#define MACROLOP_PRIVATE_EVAL_REC_6277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6278(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6278_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6278_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6278_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6278_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6279
#define MACROLOP_PRIVATE_EVAL_REC_6278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6279(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6279_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6279_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6279_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6279_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6280
#define MACROLOP_PRIVATE_EVAL_REC_6279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6280(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6280_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6280_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6280_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6280_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6281
#define MACROLOP_PRIVATE_EVAL_REC_6280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6281(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6281_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6281_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6281_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6281_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6282
#define MACROLOP_PRIVATE_EVAL_REC_6281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6282(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6282_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6282_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6282_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6282_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6283
#define MACROLOP_PRIVATE_EVAL_REC_6282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6283(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6283_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6283_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6283_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6283_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6284
#define MACROLOP_PRIVATE_EVAL_REC_6283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6284(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6284_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6284_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6284_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6284_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6285
#define MACROLOP_PRIVATE_EVAL_REC_6284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6285(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6285_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6285_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6285_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6285_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6286
#define MACROLOP_PRIVATE_EVAL_REC_6285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6286(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6286_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6286_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6286_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6286_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6287
#define MACROLOP_PRIVATE_EVAL_REC_6286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6287(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6287_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6287_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6287_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6287_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6288
#define MACROLOP_PRIVATE_EVAL_REC_6287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6288(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6288_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6288_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6288_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6288_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6289
#define MACROLOP_PRIVATE_EVAL_REC_6288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6289(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6289_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6289_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6289_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6289_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6290
#define MACROLOP_PRIVATE_EVAL_REC_6289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6290(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6290_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6290_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6290_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6290_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6291
#define MACROLOP_PRIVATE_EVAL_REC_6290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6291(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6291_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6291_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6291_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6291_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6292
#define MACROLOP_PRIVATE_EVAL_REC_6291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6292(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6292_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6292_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6292_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6292_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6293
#define MACROLOP_PRIVATE_EVAL_REC_6292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6293(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6293_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6293_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6293_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6293_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6294
#define MACROLOP_PRIVATE_EVAL_REC_6293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6294(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6294_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6294_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6294_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6294_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6295
#define MACROLOP_PRIVATE_EVAL_REC_6294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6295(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6295_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6295_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6295_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6295_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6296
#define MACROLOP_PRIVATE_EVAL_REC_6295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6296(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6296_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6296_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6296_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6296_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6297
#define MACROLOP_PRIVATE_EVAL_REC_6296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6297(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6297_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6297_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6297_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6297_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6298
#define MACROLOP_PRIVATE_EVAL_REC_6297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6298(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6298_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6298_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6298_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6298_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6299
#define MACROLOP_PRIVATE_EVAL_REC_6298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6299(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6299_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6299_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6299_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6299_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6300
#define MACROLOP_PRIVATE_EVAL_REC_6299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6300(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6300_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6300_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6300_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6300_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6301
#define MACROLOP_PRIVATE_EVAL_REC_6300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6301(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6301_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6301_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6301_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6301_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6302
#define MACROLOP_PRIVATE_EVAL_REC_6301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6302(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6302_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6302_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6302_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6302_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6303
#define MACROLOP_PRIVATE_EVAL_REC_6302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6303(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6303_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6303_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6303_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6303_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6304
#define MACROLOP_PRIVATE_EVAL_REC_6303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6304(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6304_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6304_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6304_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6304_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6305
#define MACROLOP_PRIVATE_EVAL_REC_6304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6305(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6305_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6305_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6305_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6305_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6306
#define MACROLOP_PRIVATE_EVAL_REC_6305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6306(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6306_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6306_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6306_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6306_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6307
#define MACROLOP_PRIVATE_EVAL_REC_6306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6307(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6307_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6307_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6307_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6307_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6308
#define MACROLOP_PRIVATE_EVAL_REC_6307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6308(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6308_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6308_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6308_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6308_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6309
#define MACROLOP_PRIVATE_EVAL_REC_6308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6309(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6309_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6309_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6309_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6309_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6310
#define MACROLOP_PRIVATE_EVAL_REC_6309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6310(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6310_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6310_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6310_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6310_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6311
#define MACROLOP_PRIVATE_EVAL_REC_6310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6311(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6311_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6311_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6311_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6311_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6312
#define MACROLOP_PRIVATE_EVAL_REC_6311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6312(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6312_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6312_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6312_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6312_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6313
#define MACROLOP_PRIVATE_EVAL_REC_6312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6313(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6313_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6313_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6313_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6313_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6314
#define MACROLOP_PRIVATE_EVAL_REC_6313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6314(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6314_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6314_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6314_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6314_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6315
#define MACROLOP_PRIVATE_EVAL_REC_6314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6315(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6315_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6315_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6315_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6315_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6316
#define MACROLOP_PRIVATE_EVAL_REC_6315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6316(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6316_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6316_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6316_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6316_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6317
#define MACROLOP_PRIVATE_EVAL_REC_6316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6317(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6317_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6317_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6317_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6317_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6318
#define MACROLOP_PRIVATE_EVAL_REC_6317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6318(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6318_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6318_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6318_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6318_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6319
#define MACROLOP_PRIVATE_EVAL_REC_6318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6319(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6319_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6319_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6319_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6319_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6320
#define MACROLOP_PRIVATE_EVAL_REC_6319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6320(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6320_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6320_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6320_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6320_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6321
#define MACROLOP_PRIVATE_EVAL_REC_6320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6321(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6321_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6321_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6321_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6321_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6322
#define MACROLOP_PRIVATE_EVAL_REC_6321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6322(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6322_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6322_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6322_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6322_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6323
#define MACROLOP_PRIVATE_EVAL_REC_6322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6323(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6323_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6323_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6323_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6323_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6324
#define MACROLOP_PRIVATE_EVAL_REC_6323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6324(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6324_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6324_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6324_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6324_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6325
#define MACROLOP_PRIVATE_EVAL_REC_6324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6325(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6325_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6325_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6325_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6325_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6326
#define MACROLOP_PRIVATE_EVAL_REC_6325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6326(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6326_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6326_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6326_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6326_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6327
#define MACROLOP_PRIVATE_EVAL_REC_6326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6327(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6327_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6327_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6327_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6327_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6328
#define MACROLOP_PRIVATE_EVAL_REC_6327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6328(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6328_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6328_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6328_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6328_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6329
#define MACROLOP_PRIVATE_EVAL_REC_6328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6329(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6329_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6329_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6329_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6329_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6330
#define MACROLOP_PRIVATE_EVAL_REC_6329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6330(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6330_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6330_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6330_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6330_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6331
#define MACROLOP_PRIVATE_EVAL_REC_6330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6331(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6331_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6331_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6331_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6331_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6332
#define MACROLOP_PRIVATE_EVAL_REC_6331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6332(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6332_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6332_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6332_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6332_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6333
#define MACROLOP_PRIVATE_EVAL_REC_6332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6333(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6333_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6333_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6333_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6333_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6334
#define MACROLOP_PRIVATE_EVAL_REC_6333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6334(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6334_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6334_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6334_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6334_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6335
#define MACROLOP_PRIVATE_EVAL_REC_6334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6335(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6335_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6335_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6335_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6335_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6336
#define MACROLOP_PRIVATE_EVAL_REC_6335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6336(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6336_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6336_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6336_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6336_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6337
#define MACROLOP_PRIVATE_EVAL_REC_6336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6337(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6337_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6337_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6337_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6337_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6338
#define MACROLOP_PRIVATE_EVAL_REC_6337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6338(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6338_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6338_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6338_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6338_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6339
#define MACROLOP_PRIVATE_EVAL_REC_6338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6339(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6339_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6339_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6339_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6339_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6340
#define MACROLOP_PRIVATE_EVAL_REC_6339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6340(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6340_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6340_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6340_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6340_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6341
#define MACROLOP_PRIVATE_EVAL_REC_6340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6341(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6341_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6341_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6341_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6341_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6342
#define MACROLOP_PRIVATE_EVAL_REC_6341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6342(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6342_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6342_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6342_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6342_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6343
#define MACROLOP_PRIVATE_EVAL_REC_6342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6343(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6343_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6343_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6343_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6343_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6344
#define MACROLOP_PRIVATE_EVAL_REC_6343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6344(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6344_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6344_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6344_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6344_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6345
#define MACROLOP_PRIVATE_EVAL_REC_6344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6345(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6345_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6345_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6345_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6345_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6346
#define MACROLOP_PRIVATE_EVAL_REC_6345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6346(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6346_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6346_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6346_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6346_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6347
#define MACROLOP_PRIVATE_EVAL_REC_6346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6347(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6347_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6347_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6347_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6347_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6348
#define MACROLOP_PRIVATE_EVAL_REC_6347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6348(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6348_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6348_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6348_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6348_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6349
#define MACROLOP_PRIVATE_EVAL_REC_6348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6349(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6349_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6349_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6349_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6349_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6350
#define MACROLOP_PRIVATE_EVAL_REC_6349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6350(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6350_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6350_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6350_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6350_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6351
#define MACROLOP_PRIVATE_EVAL_REC_6350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6351(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6351_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6351_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6351_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6351_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6352
#define MACROLOP_PRIVATE_EVAL_REC_6351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6352(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6352_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6352_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6352_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6352_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6353
#define MACROLOP_PRIVATE_EVAL_REC_6352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6353(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6353_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6353_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6353_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6353_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6354
#define MACROLOP_PRIVATE_EVAL_REC_6353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6354(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6354_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6354_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6354_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6354_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6355
#define MACROLOP_PRIVATE_EVAL_REC_6354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6355(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6355_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6355_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6355_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6355_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6356
#define MACROLOP_PRIVATE_EVAL_REC_6355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6356(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6356_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6356_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6356_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6356_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6357
#define MACROLOP_PRIVATE_EVAL_REC_6356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6357(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6357_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6357_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6357_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6357_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6358
#define MACROLOP_PRIVATE_EVAL_REC_6357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6358(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6358_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6358_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6358_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6358_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6359
#define MACROLOP_PRIVATE_EVAL_REC_6358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6359(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6359_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6359_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6359_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6359_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6360
#define MACROLOP_PRIVATE_EVAL_REC_6359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6360(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6360_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6360_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6360_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6360_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6361
#define MACROLOP_PRIVATE_EVAL_REC_6360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6361(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6361_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6361_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6361_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6361_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6362
#define MACROLOP_PRIVATE_EVAL_REC_6361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6362(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6362_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6362_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6362_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6362_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6363
#define MACROLOP_PRIVATE_EVAL_REC_6362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6363(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6363_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6363_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6363_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6363_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6364
#define MACROLOP_PRIVATE_EVAL_REC_6363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6364(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6364_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6364_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6364_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6364_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6365
#define MACROLOP_PRIVATE_EVAL_REC_6364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6365(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6365_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6365_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6365_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6365_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6366
#define MACROLOP_PRIVATE_EVAL_REC_6365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6366(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6366_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6366_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6366_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6366_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6367
#define MACROLOP_PRIVATE_EVAL_REC_6366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6367(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6367_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6367_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6367_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6367_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6368
#define MACROLOP_PRIVATE_EVAL_REC_6367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6368(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6368_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6368_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6368_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6368_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6369
#define MACROLOP_PRIVATE_EVAL_REC_6368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6369(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6369_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6369_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6369_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6369_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6370
#define MACROLOP_PRIVATE_EVAL_REC_6369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6370(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6370_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6370_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6370_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6370_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6371
#define MACROLOP_PRIVATE_EVAL_REC_6370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6371(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6371_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6371_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6371_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6371_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6372
#define MACROLOP_PRIVATE_EVAL_REC_6371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6372(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6372_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6372_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6372_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6372_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6373
#define MACROLOP_PRIVATE_EVAL_REC_6372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6373(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6373_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6373_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6373_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6373_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6374
#define MACROLOP_PRIVATE_EVAL_REC_6373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6374(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6374_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6374_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6374_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6374_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6375
#define MACROLOP_PRIVATE_EVAL_REC_6374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6375(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6375_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6375_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6375_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6375_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6376
#define MACROLOP_PRIVATE_EVAL_REC_6375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6376(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6376_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6376_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6376_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6376_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6377
#define MACROLOP_PRIVATE_EVAL_REC_6376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6377(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6377_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6377_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6377_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6377_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6378
#define MACROLOP_PRIVATE_EVAL_REC_6377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6378(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6378_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6378_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6378_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6378_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6379
#define MACROLOP_PRIVATE_EVAL_REC_6378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6379(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6379_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6379_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6379_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6379_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6380
#define MACROLOP_PRIVATE_EVAL_REC_6379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6380(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6380_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6380_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6380_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6380_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6381
#define MACROLOP_PRIVATE_EVAL_REC_6380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6381(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6381_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6381_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6381_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6381_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6382
#define MACROLOP_PRIVATE_EVAL_REC_6381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6382(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6382_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6382_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6382_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6382_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6383
#define MACROLOP_PRIVATE_EVAL_REC_6382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6383(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6383_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6383_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6383_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6383_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6384
#define MACROLOP_PRIVATE_EVAL_REC_6383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6384(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6384_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6384_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6384_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6384_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6385
#define MACROLOP_PRIVATE_EVAL_REC_6384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6385(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6385_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6385_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6385_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6385_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6386
#define MACROLOP_PRIVATE_EVAL_REC_6385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6386(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6386_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6386_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6386_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6386_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6387
#define MACROLOP_PRIVATE_EVAL_REC_6386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6387(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6387_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6387_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6387_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6387_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6388
#define MACROLOP_PRIVATE_EVAL_REC_6387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6388(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6388_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6388_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6388_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6388_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6389
#define MACROLOP_PRIVATE_EVAL_REC_6388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6389(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6389_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6389_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6389_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6389_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6390
#define MACROLOP_PRIVATE_EVAL_REC_6389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6390(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6390_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6390_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6390_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6390_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6391
#define MACROLOP_PRIVATE_EVAL_REC_6390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6391(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6391_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6391_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6391_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6391_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6392
#define MACROLOP_PRIVATE_EVAL_REC_6391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6392(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6392_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6392_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6392_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6392_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6393
#define MACROLOP_PRIVATE_EVAL_REC_6392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6393(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6393_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6393_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6393_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6393_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6394
#define MACROLOP_PRIVATE_EVAL_REC_6393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6394(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6394_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6394_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6394_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6394_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6395
#define MACROLOP_PRIVATE_EVAL_REC_6394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6395(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6395_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6395_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6395_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6395_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6396
#define MACROLOP_PRIVATE_EVAL_REC_6395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6396(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6396_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6396_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6396_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6396_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6397
#define MACROLOP_PRIVATE_EVAL_REC_6396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6397(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6397_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6397_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6397_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6397_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6398
#define MACROLOP_PRIVATE_EVAL_REC_6397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6398(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6398_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6398_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6398_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6398_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6399
#define MACROLOP_PRIVATE_EVAL_REC_6398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6399(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6399_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6399_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6399_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6399_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6400
#define MACROLOP_PRIVATE_EVAL_REC_6399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6400(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6400_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6400_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6400_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6400_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6401
#define MACROLOP_PRIVATE_EVAL_REC_6400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6401(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6401_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6401_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6401_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6401_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6402
#define MACROLOP_PRIVATE_EVAL_REC_6401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6402(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6402_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6402_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6402_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6402_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6403
#define MACROLOP_PRIVATE_EVAL_REC_6402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6403(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6403_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6403_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6403_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6403_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6404
#define MACROLOP_PRIVATE_EVAL_REC_6403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6404(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6404_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6404_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6404_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6404_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6405
#define MACROLOP_PRIVATE_EVAL_REC_6404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6405(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6405_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6405_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6405_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6405_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6406
#define MACROLOP_PRIVATE_EVAL_REC_6405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6406(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6406_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6406_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6406_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6406_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6407
#define MACROLOP_PRIVATE_EVAL_REC_6406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6407(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6407_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6407_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6407_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6407_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6408
#define MACROLOP_PRIVATE_EVAL_REC_6407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6408(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6408_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6408_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6408_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6408_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6409
#define MACROLOP_PRIVATE_EVAL_REC_6408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6409(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6409_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6409_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6409_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6409_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6410
#define MACROLOP_PRIVATE_EVAL_REC_6409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6410(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6410_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6410_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6410_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6410_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6411
#define MACROLOP_PRIVATE_EVAL_REC_6410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6411(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6411_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6411_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6411_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6411_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6412
#define MACROLOP_PRIVATE_EVAL_REC_6411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6412(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6412_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6412_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6412_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6412_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6413
#define MACROLOP_PRIVATE_EVAL_REC_6412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6413(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6413_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6413_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6413_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6413_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6414
#define MACROLOP_PRIVATE_EVAL_REC_6413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6414(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6414_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6414_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6414_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6414_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6415
#define MACROLOP_PRIVATE_EVAL_REC_6414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6415(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6415_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6415_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6415_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6415_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6416
#define MACROLOP_PRIVATE_EVAL_REC_6415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6416(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6416_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6416_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6416_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6416_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6417
#define MACROLOP_PRIVATE_EVAL_REC_6416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6417(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6417_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6417_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6417_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6417_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6418
#define MACROLOP_PRIVATE_EVAL_REC_6417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6418(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6418_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6418_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6418_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6418_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6419
#define MACROLOP_PRIVATE_EVAL_REC_6418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6419(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6419_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6419_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6419_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6419_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6420
#define MACROLOP_PRIVATE_EVAL_REC_6419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6420(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6420_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6420_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6420_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6420_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6421
#define MACROLOP_PRIVATE_EVAL_REC_6420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6421(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6421_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6421_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6421_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6421_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6422
#define MACROLOP_PRIVATE_EVAL_REC_6421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6422(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6422_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6422_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6422_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6422_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6423
#define MACROLOP_PRIVATE_EVAL_REC_6422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6423(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6423_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6423_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6423_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6423_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6424
#define MACROLOP_PRIVATE_EVAL_REC_6423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6424(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6424_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6424_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6424_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6424_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6425
#define MACROLOP_PRIVATE_EVAL_REC_6424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6425(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6425_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6425_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6425_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6425_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6426
#define MACROLOP_PRIVATE_EVAL_REC_6425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6426(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6426_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6426_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6426_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6426_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6427
#define MACROLOP_PRIVATE_EVAL_REC_6426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6427(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6427_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6427_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6427_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6427_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6428
#define MACROLOP_PRIVATE_EVAL_REC_6427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6428(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6428_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6428_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6428_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6428_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6429
#define MACROLOP_PRIVATE_EVAL_REC_6428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6429(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6429_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6429_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6429_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6429_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6430
#define MACROLOP_PRIVATE_EVAL_REC_6429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6430(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6430_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6430_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6430_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6430_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6431
#define MACROLOP_PRIVATE_EVAL_REC_6430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6431(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6431_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6431_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6431_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6431_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6432
#define MACROLOP_PRIVATE_EVAL_REC_6431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6432(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6432_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6432_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6432_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6432_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6433
#define MACROLOP_PRIVATE_EVAL_REC_6432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6433(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6433_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6433_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6433_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6433_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6434
#define MACROLOP_PRIVATE_EVAL_REC_6433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6434(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6434_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6434_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6434_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6434_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6435
#define MACROLOP_PRIVATE_EVAL_REC_6434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6435(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6435_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6435_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6435_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6435_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6436
#define MACROLOP_PRIVATE_EVAL_REC_6435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6436(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6436_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6436_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6436_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6436_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6437
#define MACROLOP_PRIVATE_EVAL_REC_6436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6437(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6437_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6437_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6437_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6437_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6438
#define MACROLOP_PRIVATE_EVAL_REC_6437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6438(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6438_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6438_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6438_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6438_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6439
#define MACROLOP_PRIVATE_EVAL_REC_6438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6439(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6439_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6439_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6439_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6439_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6440
#define MACROLOP_PRIVATE_EVAL_REC_6439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6440(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6440_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6440_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6440_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6440_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6441
#define MACROLOP_PRIVATE_EVAL_REC_6440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6441(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6441_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6441_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6441_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6441_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6442
#define MACROLOP_PRIVATE_EVAL_REC_6441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6442(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6442_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6442_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6442_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6442_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6443
#define MACROLOP_PRIVATE_EVAL_REC_6442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6443(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6443_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6443_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6443_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6443_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6444
#define MACROLOP_PRIVATE_EVAL_REC_6443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6444(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6444_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6444_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6444_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6444_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6445
#define MACROLOP_PRIVATE_EVAL_REC_6444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6445(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6445_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6445_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6445_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6445_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6446
#define MACROLOP_PRIVATE_EVAL_REC_6445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6446(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6446_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6446_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6446_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6446_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6447
#define MACROLOP_PRIVATE_EVAL_REC_6446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6447(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6447_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6447_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6447_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6447_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6448
#define MACROLOP_PRIVATE_EVAL_REC_6447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6448(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6448_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6448_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6448_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6448_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6449
#define MACROLOP_PRIVATE_EVAL_REC_6448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6449(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6449_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6449_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6449_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6449_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6450
#define MACROLOP_PRIVATE_EVAL_REC_6449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6450(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6450_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6450_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6450_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6450_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6451
#define MACROLOP_PRIVATE_EVAL_REC_6450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6451(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6451_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6451_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6451_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6451_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6452
#define MACROLOP_PRIVATE_EVAL_REC_6451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6452(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6452_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6452_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6452_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6452_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6453
#define MACROLOP_PRIVATE_EVAL_REC_6452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6453(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6453_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6453_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6453_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6453_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6454
#define MACROLOP_PRIVATE_EVAL_REC_6453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6454(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6454_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6454_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6454_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6454_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6455
#define MACROLOP_PRIVATE_EVAL_REC_6454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6455(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6455_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6455_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6455_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6455_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6456
#define MACROLOP_PRIVATE_EVAL_REC_6455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6456(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6456_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6456_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6456_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6456_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6457
#define MACROLOP_PRIVATE_EVAL_REC_6456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6457(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6457_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6457_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6457_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6457_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6458
#define MACROLOP_PRIVATE_EVAL_REC_6457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6458(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6458_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6458_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6458_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6458_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6459
#define MACROLOP_PRIVATE_EVAL_REC_6458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6459(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6459_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6459_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6459_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6459_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6460
#define MACROLOP_PRIVATE_EVAL_REC_6459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6460(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6460_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6460_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6460_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6460_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6461
#define MACROLOP_PRIVATE_EVAL_REC_6460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6461(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6461_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6461_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6461_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6461_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6462
#define MACROLOP_PRIVATE_EVAL_REC_6461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6462(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6462_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6462_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6462_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6462_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6463
#define MACROLOP_PRIVATE_EVAL_REC_6462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6463(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6463_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6463_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6463_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6463_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6464
#define MACROLOP_PRIVATE_EVAL_REC_6463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6464(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6464_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6464_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6464_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6464_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6465
#define MACROLOP_PRIVATE_EVAL_REC_6464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6465(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6465_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6465_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6465_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6465_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6466
#define MACROLOP_PRIVATE_EVAL_REC_6465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6466(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6466_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6466_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6466_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6466_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6467
#define MACROLOP_PRIVATE_EVAL_REC_6466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6467(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6467_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6467_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6467_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6467_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6468
#define MACROLOP_PRIVATE_EVAL_REC_6467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6468(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6468_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6468_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6468_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6468_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6469
#define MACROLOP_PRIVATE_EVAL_REC_6468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6469(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6469_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6469_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6469_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6469_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6470
#define MACROLOP_PRIVATE_EVAL_REC_6469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6470(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6470_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6470_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6470_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6470_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6471
#define MACROLOP_PRIVATE_EVAL_REC_6470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6471(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6471_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6471_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6471_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6471_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6472
#define MACROLOP_PRIVATE_EVAL_REC_6471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6472(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6472_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6472_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6472_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6472_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6473
#define MACROLOP_PRIVATE_EVAL_REC_6472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6473(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6473_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6473_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6473_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6473_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6474
#define MACROLOP_PRIVATE_EVAL_REC_6473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6474(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6474_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6474_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6474_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6474_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6475
#define MACROLOP_PRIVATE_EVAL_REC_6474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6475(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6475_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6475_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6475_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6475_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6476
#define MACROLOP_PRIVATE_EVAL_REC_6475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6476(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6476_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6476_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6476_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6476_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6477
#define MACROLOP_PRIVATE_EVAL_REC_6476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6477(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6477_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6477_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6477_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6477_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6478
#define MACROLOP_PRIVATE_EVAL_REC_6477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6478(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6478_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6478_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6478_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6478_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6479
#define MACROLOP_PRIVATE_EVAL_REC_6478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6479(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6479_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6479_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6479_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6479_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6480
#define MACROLOP_PRIVATE_EVAL_REC_6479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6480(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6480_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6480_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6480_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6480_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6481
#define MACROLOP_PRIVATE_EVAL_REC_6480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6481(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6481_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6481_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6481_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6481_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6482
#define MACROLOP_PRIVATE_EVAL_REC_6481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6482(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6482_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6482_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6482_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6482_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6483
#define MACROLOP_PRIVATE_EVAL_REC_6482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6483(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6483_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6483_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6483_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6483_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6484
#define MACROLOP_PRIVATE_EVAL_REC_6483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6484(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6484_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6484_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6484_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6484_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6485
#define MACROLOP_PRIVATE_EVAL_REC_6484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6485(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6485_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6485_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6485_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6485_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6486
#define MACROLOP_PRIVATE_EVAL_REC_6485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6486(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6486_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6486_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6486_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6486_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6487
#define MACROLOP_PRIVATE_EVAL_REC_6486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6487(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6487_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6487_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6487_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6487_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6488
#define MACROLOP_PRIVATE_EVAL_REC_6487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6488(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6488_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6488_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6488_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6488_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6489
#define MACROLOP_PRIVATE_EVAL_REC_6488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6489(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6489_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6489_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6489_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6489_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6490
#define MACROLOP_PRIVATE_EVAL_REC_6489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6490(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6490_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6490_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6490_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6490_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6491
#define MACROLOP_PRIVATE_EVAL_REC_6490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6491(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6491_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6491_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6491_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6491_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6492
#define MACROLOP_PRIVATE_EVAL_REC_6491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6492(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6492_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6492_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6492_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6492_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6493
#define MACROLOP_PRIVATE_EVAL_REC_6492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6493(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6493_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6493_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6493_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6493_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6494
#define MACROLOP_PRIVATE_EVAL_REC_6493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6494(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6494_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6494_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6494_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6494_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6495
#define MACROLOP_PRIVATE_EVAL_REC_6494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6495(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6495_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6495_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6495_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6495_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6496
#define MACROLOP_PRIVATE_EVAL_REC_6495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6496(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6496_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6496_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6496_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6496_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6497
#define MACROLOP_PRIVATE_EVAL_REC_6496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6497(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6497_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6497_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6497_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6497_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6498
#define MACROLOP_PRIVATE_EVAL_REC_6497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6498(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6498_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6498_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6498_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6498_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6499
#define MACROLOP_PRIVATE_EVAL_REC_6498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6499(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6499_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6499_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6499_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6499_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6500
#define MACROLOP_PRIVATE_EVAL_REC_6499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6500(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6500_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6500_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6500_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6500_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6501
#define MACROLOP_PRIVATE_EVAL_REC_6500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6501(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6501_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6501_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6501_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6501_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6502
#define MACROLOP_PRIVATE_EVAL_REC_6501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6502(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6502_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6502_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6502_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6502_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6503
#define MACROLOP_PRIVATE_EVAL_REC_6502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6503(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6503_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6503_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6503_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6503_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6504
#define MACROLOP_PRIVATE_EVAL_REC_6503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6504(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6504_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6504_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6504_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6504_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6505
#define MACROLOP_PRIVATE_EVAL_REC_6504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6505(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6505_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6505_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6505_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6505_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6506
#define MACROLOP_PRIVATE_EVAL_REC_6505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6506(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6506_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6506_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6506_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6506_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6507
#define MACROLOP_PRIVATE_EVAL_REC_6506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6507(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6507_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6507_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6507_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6507_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6508
#define MACROLOP_PRIVATE_EVAL_REC_6507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6508(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6508_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6508_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6508_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6508_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6509
#define MACROLOP_PRIVATE_EVAL_REC_6508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6509(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6509_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6509_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6509_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6509_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6510
#define MACROLOP_PRIVATE_EVAL_REC_6509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6510(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6510_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6510_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6510_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6510_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6511
#define MACROLOP_PRIVATE_EVAL_REC_6510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6511(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6511_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6511_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6511_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6511_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6512
#define MACROLOP_PRIVATE_EVAL_REC_6511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6512(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6512_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6512_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6512_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6512_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6513
#define MACROLOP_PRIVATE_EVAL_REC_6512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6513(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6513_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6513_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6513_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6513_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6514
#define MACROLOP_PRIVATE_EVAL_REC_6513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6514(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6514_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6514_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6514_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6514_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6515
#define MACROLOP_PRIVATE_EVAL_REC_6514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6515(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6515_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6515_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6515_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6515_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6516
#define MACROLOP_PRIVATE_EVAL_REC_6515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6516(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6516_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6516_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6516_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6516_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6517
#define MACROLOP_PRIVATE_EVAL_REC_6516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6517(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6517_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6517_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6517_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6517_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6518
#define MACROLOP_PRIVATE_EVAL_REC_6517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6518(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6518_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6518_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6518_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6518_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6519
#define MACROLOP_PRIVATE_EVAL_REC_6518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6519(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6519_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6519_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6519_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6519_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6520
#define MACROLOP_PRIVATE_EVAL_REC_6519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6520(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6520_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6520_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6520_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6520_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6521
#define MACROLOP_PRIVATE_EVAL_REC_6520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6521(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6521_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6521_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6521_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6521_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6522
#define MACROLOP_PRIVATE_EVAL_REC_6521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6522(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6522_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6522_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6522_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6522_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6523
#define MACROLOP_PRIVATE_EVAL_REC_6522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6523(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6523_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6523_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6523_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6523_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6524
#define MACROLOP_PRIVATE_EVAL_REC_6523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6524(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6524_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6524_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6524_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6524_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6525
#define MACROLOP_PRIVATE_EVAL_REC_6524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6525(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6525_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6525_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6525_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6525_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6526
#define MACROLOP_PRIVATE_EVAL_REC_6525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6526(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6526_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6526_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6526_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6526_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6527
#define MACROLOP_PRIVATE_EVAL_REC_6526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6527(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6527_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6527_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6527_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6527_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6528
#define MACROLOP_PRIVATE_EVAL_REC_6527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6528(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6528_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6528_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6528_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6528_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6529
#define MACROLOP_PRIVATE_EVAL_REC_6528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6529(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6529_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6529_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6529_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6529_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6530
#define MACROLOP_PRIVATE_EVAL_REC_6529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6530(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6530_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6530_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6530_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6530_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6531
#define MACROLOP_PRIVATE_EVAL_REC_6530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6531(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6531_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6531_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6531_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6531_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6532
#define MACROLOP_PRIVATE_EVAL_REC_6531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6532(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6532_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6532_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6532_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6532_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6533
#define MACROLOP_PRIVATE_EVAL_REC_6532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6533(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6533_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6533_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6533_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6533_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6534
#define MACROLOP_PRIVATE_EVAL_REC_6533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6534(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6534_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6534_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6534_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6534_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6535
#define MACROLOP_PRIVATE_EVAL_REC_6534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6535(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6535_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6535_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6535_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6535_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6536
#define MACROLOP_PRIVATE_EVAL_REC_6535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6536(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6536_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6536_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6536_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6536_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6537
#define MACROLOP_PRIVATE_EVAL_REC_6536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6537(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6537_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6537_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6537_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6537_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6538
#define MACROLOP_PRIVATE_EVAL_REC_6537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6538(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6538_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6538_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6538_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6538_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6539
#define MACROLOP_PRIVATE_EVAL_REC_6538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6539(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6539_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6539_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6539_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6539_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6540
#define MACROLOP_PRIVATE_EVAL_REC_6539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6540(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6540_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6540_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6540_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6540_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6541
#define MACROLOP_PRIVATE_EVAL_REC_6540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6541(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6541_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6541_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6541_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6541_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6542
#define MACROLOP_PRIVATE_EVAL_REC_6541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6542(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6542_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6542_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6542_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6542_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6543
#define MACROLOP_PRIVATE_EVAL_REC_6542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6543(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6543_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6543_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6543_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6543_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6544
#define MACROLOP_PRIVATE_EVAL_REC_6543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6544(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6544_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6544_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6544_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6544_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6545
#define MACROLOP_PRIVATE_EVAL_REC_6544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6545(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6545_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6545_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6545_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6545_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6546
#define MACROLOP_PRIVATE_EVAL_REC_6545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6546(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6546_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6546_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6546_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6546_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6547
#define MACROLOP_PRIVATE_EVAL_REC_6546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6547(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6547_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6547_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6547_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6547_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6548
#define MACROLOP_PRIVATE_EVAL_REC_6547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6548(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6548_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6548_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6548_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6548_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6549
#define MACROLOP_PRIVATE_EVAL_REC_6548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6549(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6549_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6549_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6549_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6549_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6550
#define MACROLOP_PRIVATE_EVAL_REC_6549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6550(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6550_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6550_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6550_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6550_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6551
#define MACROLOP_PRIVATE_EVAL_REC_6550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6551(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6551_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6551_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6551_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6551_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6552
#define MACROLOP_PRIVATE_EVAL_REC_6551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6552(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6552_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6552_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6552_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6552_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6553
#define MACROLOP_PRIVATE_EVAL_REC_6552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6553(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6553_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6553_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6553_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6553_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6554
#define MACROLOP_PRIVATE_EVAL_REC_6553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6554(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6554_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6554_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6554_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6554_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6555
#define MACROLOP_PRIVATE_EVAL_REC_6554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6555(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6555_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6555_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6555_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6555_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6556
#define MACROLOP_PRIVATE_EVAL_REC_6555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6556(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6556_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6556_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6556_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6556_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6557
#define MACROLOP_PRIVATE_EVAL_REC_6556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6557(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6557_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6557_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6557_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6557_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6558
#define MACROLOP_PRIVATE_EVAL_REC_6557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6558(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6558_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6558_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6558_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6558_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6559
#define MACROLOP_PRIVATE_EVAL_REC_6558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6559(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6559_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6559_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6559_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6559_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6560
#define MACROLOP_PRIVATE_EVAL_REC_6559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6560(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6560_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6560_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6560_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6560_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6561
#define MACROLOP_PRIVATE_EVAL_REC_6560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6561(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6561_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6561_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6561_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6561_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6562
#define MACROLOP_PRIVATE_EVAL_REC_6561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6562(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6562_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6562_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6562_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6562_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6563
#define MACROLOP_PRIVATE_EVAL_REC_6562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6563(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6563_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6563_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6563_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6563_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6564
#define MACROLOP_PRIVATE_EVAL_REC_6563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6564(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6564_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6564_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6564_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6564_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6565
#define MACROLOP_PRIVATE_EVAL_REC_6564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6565(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6565_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6565_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6565_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6565_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6566
#define MACROLOP_PRIVATE_EVAL_REC_6565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6566(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6566_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6566_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6566_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6566_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6567
#define MACROLOP_PRIVATE_EVAL_REC_6566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6567(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6567_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6567_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6567_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6567_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6568
#define MACROLOP_PRIVATE_EVAL_REC_6567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6568(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6568_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6568_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6568_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6568_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6569
#define MACROLOP_PRIVATE_EVAL_REC_6568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6569(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6569_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6569_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6569_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6569_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6570
#define MACROLOP_PRIVATE_EVAL_REC_6569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6570(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6570_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6570_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6570_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6570_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6571
#define MACROLOP_PRIVATE_EVAL_REC_6570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6571(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6571_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6571_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6571_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6571_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6572
#define MACROLOP_PRIVATE_EVAL_REC_6571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6572(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6572_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6572_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6572_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6572_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6573
#define MACROLOP_PRIVATE_EVAL_REC_6572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6573(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6573_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6573_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6573_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6573_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6574
#define MACROLOP_PRIVATE_EVAL_REC_6573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6574(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6574_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6574_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6574_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6574_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6575
#define MACROLOP_PRIVATE_EVAL_REC_6574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6575(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6575_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6575_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6575_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6575_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6576
#define MACROLOP_PRIVATE_EVAL_REC_6575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6576(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6576_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6576_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6576_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6576_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6577
#define MACROLOP_PRIVATE_EVAL_REC_6576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6577(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6577_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6577_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6577_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6577_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6578
#define MACROLOP_PRIVATE_EVAL_REC_6577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6578(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6578_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6578_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6578_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6578_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6579
#define MACROLOP_PRIVATE_EVAL_REC_6578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6579(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6579_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6579_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6579_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6579_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6580
#define MACROLOP_PRIVATE_EVAL_REC_6579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6580(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6580_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6580_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6580_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6580_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6581
#define MACROLOP_PRIVATE_EVAL_REC_6580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6581(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6581_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6581_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6581_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6581_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6582
#define MACROLOP_PRIVATE_EVAL_REC_6581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6582(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6582_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6582_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6582_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6582_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6583
#define MACROLOP_PRIVATE_EVAL_REC_6582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6583(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6583_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6583_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6583_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6583_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6584
#define MACROLOP_PRIVATE_EVAL_REC_6583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6584(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6584_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6584_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6584_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6584_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6585
#define MACROLOP_PRIVATE_EVAL_REC_6584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6585(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6585_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6585_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6585_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6585_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6586
#define MACROLOP_PRIVATE_EVAL_REC_6585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6586(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6586_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6586_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6586_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6586_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6587
#define MACROLOP_PRIVATE_EVAL_REC_6586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6587(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6587_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6587_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6587_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6587_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6588
#define MACROLOP_PRIVATE_EVAL_REC_6587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6588(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6588_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6588_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6588_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6588_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6589
#define MACROLOP_PRIVATE_EVAL_REC_6588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6589(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6589_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6589_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6589_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6589_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6590
#define MACROLOP_PRIVATE_EVAL_REC_6589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6590(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6590_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6590_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6590_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6590_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6591
#define MACROLOP_PRIVATE_EVAL_REC_6590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6591(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6591_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6591_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6591_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6591_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6592
#define MACROLOP_PRIVATE_EVAL_REC_6591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6592(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6592_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6592_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6592_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6592_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6593
#define MACROLOP_PRIVATE_EVAL_REC_6592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6593(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6593_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6593_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6593_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6593_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6594
#define MACROLOP_PRIVATE_EVAL_REC_6593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6594(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6594_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6594_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6594_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6594_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6595
#define MACROLOP_PRIVATE_EVAL_REC_6594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6595(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6595_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6595_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6595_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6595_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6596
#define MACROLOP_PRIVATE_EVAL_REC_6595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6596(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6596_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6596_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6596_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6596_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6597
#define MACROLOP_PRIVATE_EVAL_REC_6596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6597(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6597_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6597_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6597_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6597_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6598
#define MACROLOP_PRIVATE_EVAL_REC_6597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6598(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6598_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6598_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6598_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6598_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6599
#define MACROLOP_PRIVATE_EVAL_REC_6598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6599(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6599_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6599_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6599_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6599_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6600
#define MACROLOP_PRIVATE_EVAL_REC_6599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6600(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6600_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6600_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6600_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6600_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6601
#define MACROLOP_PRIVATE_EVAL_REC_6600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6601(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6601_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6601_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6601_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6601_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6602
#define MACROLOP_PRIVATE_EVAL_REC_6601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6602(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6602_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6602_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6602_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6602_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6603
#define MACROLOP_PRIVATE_EVAL_REC_6602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6603(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6603_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6603_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6603_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6603_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6604
#define MACROLOP_PRIVATE_EVAL_REC_6603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6604(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6604_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6604_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6604_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6604_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6605
#define MACROLOP_PRIVATE_EVAL_REC_6604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6605(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6605_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6605_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6605_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6605_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6606
#define MACROLOP_PRIVATE_EVAL_REC_6605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6606(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6606_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6606_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6606_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6606_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6607
#define MACROLOP_PRIVATE_EVAL_REC_6606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6607(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6607_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6607_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6607_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6607_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6608
#define MACROLOP_PRIVATE_EVAL_REC_6607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6608(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6608_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6608_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6608_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6608_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6609
#define MACROLOP_PRIVATE_EVAL_REC_6608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6609(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6609_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6609_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6609_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6609_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6610
#define MACROLOP_PRIVATE_EVAL_REC_6609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6610(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6610_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6610_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6610_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6610_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6611
#define MACROLOP_PRIVATE_EVAL_REC_6610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6611(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6611_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6611_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6611_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6611_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6612
#define MACROLOP_PRIVATE_EVAL_REC_6611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6612(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6612_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6612_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6612_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6612_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6613
#define MACROLOP_PRIVATE_EVAL_REC_6612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6613(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6613_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6613_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6613_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6613_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6614
#define MACROLOP_PRIVATE_EVAL_REC_6613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6614(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6614_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6614_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6614_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6614_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6615
#define MACROLOP_PRIVATE_EVAL_REC_6614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6615(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6615_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6615_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6615_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6615_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6616
#define MACROLOP_PRIVATE_EVAL_REC_6615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6616(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6616_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6616_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6616_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6616_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6617
#define MACROLOP_PRIVATE_EVAL_REC_6616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6617(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6617_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6617_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6617_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6617_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6618
#define MACROLOP_PRIVATE_EVAL_REC_6617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6618(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6618_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6618_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6618_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6618_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6619
#define MACROLOP_PRIVATE_EVAL_REC_6618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6619(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6619_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6619_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6619_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6619_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6620
#define MACROLOP_PRIVATE_EVAL_REC_6619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6620(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6620_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6620_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6620_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6620_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6621
#define MACROLOP_PRIVATE_EVAL_REC_6620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6621(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6621_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6621_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6621_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6621_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6622
#define MACROLOP_PRIVATE_EVAL_REC_6621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6622(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6622_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6622_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6622_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6622_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6623
#define MACROLOP_PRIVATE_EVAL_REC_6622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6623(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6623_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6623_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6623_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6623_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6624
#define MACROLOP_PRIVATE_EVAL_REC_6623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6624(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6624_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6624_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6624_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6624_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6625
#define MACROLOP_PRIVATE_EVAL_REC_6624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6625(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6625_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6625_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6625_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6625_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6626
#define MACROLOP_PRIVATE_EVAL_REC_6625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6626(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6626_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6626_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6626_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6626_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6627
#define MACROLOP_PRIVATE_EVAL_REC_6626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6627(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6627_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6627_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6627_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6627_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6628
#define MACROLOP_PRIVATE_EVAL_REC_6627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6628(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6628_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6628_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6628_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6628_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6629
#define MACROLOP_PRIVATE_EVAL_REC_6628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6629(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6629_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6629_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6629_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6629_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6630
#define MACROLOP_PRIVATE_EVAL_REC_6629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6630(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6630_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6630_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6630_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6630_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6631
#define MACROLOP_PRIVATE_EVAL_REC_6630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6631(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6631_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6631_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6631_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6631_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6632
#define MACROLOP_PRIVATE_EVAL_REC_6631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6632(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6632_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6632_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6632_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6632_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6633
#define MACROLOP_PRIVATE_EVAL_REC_6632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6633(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6633_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6633_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6633_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6633_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6634
#define MACROLOP_PRIVATE_EVAL_REC_6633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6634(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6634_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6634_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6634_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6634_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6635
#define MACROLOP_PRIVATE_EVAL_REC_6634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6635(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6635_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6635_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6635_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6635_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6636
#define MACROLOP_PRIVATE_EVAL_REC_6635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6636(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6636_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6636_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6636_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6636_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6637
#define MACROLOP_PRIVATE_EVAL_REC_6636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6637(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6637_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6637_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6637_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6637_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6638
#define MACROLOP_PRIVATE_EVAL_REC_6637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6638(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6638_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6638_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6638_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6638_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6639
#define MACROLOP_PRIVATE_EVAL_REC_6638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6639(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6639_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6639_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6639_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6639_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6640
#define MACROLOP_PRIVATE_EVAL_REC_6639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6640(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6640_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6640_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6640_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6640_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6641
#define MACROLOP_PRIVATE_EVAL_REC_6640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6641(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6641_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6641_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6641_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6641_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6642
#define MACROLOP_PRIVATE_EVAL_REC_6641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6642(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6642_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6642_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6642_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6642_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6643
#define MACROLOP_PRIVATE_EVAL_REC_6642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6643(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6643_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6643_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6643_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6643_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6644
#define MACROLOP_PRIVATE_EVAL_REC_6643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6644(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6644_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6644_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6644_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6644_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6645
#define MACROLOP_PRIVATE_EVAL_REC_6644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6645(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6645_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6645_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6645_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6645_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6646
#define MACROLOP_PRIVATE_EVAL_REC_6645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6646(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6646_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6646_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6646_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6646_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6647
#define MACROLOP_PRIVATE_EVAL_REC_6646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6647(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6647_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6647_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6647_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6647_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6648
#define MACROLOP_PRIVATE_EVAL_REC_6647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6648(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6648_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6648_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6648_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6648_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6649
#define MACROLOP_PRIVATE_EVAL_REC_6648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6649(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6649_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6649_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6649_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6649_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6650
#define MACROLOP_PRIVATE_EVAL_REC_6649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6650(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6650_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6650_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6650_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6650_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6651
#define MACROLOP_PRIVATE_EVAL_REC_6650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6651(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6651_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6651_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6651_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6651_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6652
#define MACROLOP_PRIVATE_EVAL_REC_6651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6652(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6652_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6652_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6652_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6652_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6653
#define MACROLOP_PRIVATE_EVAL_REC_6652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6653(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6653_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6653_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6653_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6653_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6654
#define MACROLOP_PRIVATE_EVAL_REC_6653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6654(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6654_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6654_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6654_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6654_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6655
#define MACROLOP_PRIVATE_EVAL_REC_6654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6655(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6655_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6655_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6655_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6655_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6656
#define MACROLOP_PRIVATE_EVAL_REC_6655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6656(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6656_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6656_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6656_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6656_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6657
#define MACROLOP_PRIVATE_EVAL_REC_6656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6657(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6657_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6657_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6657_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6657_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6658
#define MACROLOP_PRIVATE_EVAL_REC_6657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6658(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6658_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6658_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6658_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6658_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6659
#define MACROLOP_PRIVATE_EVAL_REC_6658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6659(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6659_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6659_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6659_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6659_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6660
#define MACROLOP_PRIVATE_EVAL_REC_6659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6660(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6660_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6660_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6660_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6660_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6661
#define MACROLOP_PRIVATE_EVAL_REC_6660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6661(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6661_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6661_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6661_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6661_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6662
#define MACROLOP_PRIVATE_EVAL_REC_6661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6662(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6662_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6662_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6662_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6662_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6663
#define MACROLOP_PRIVATE_EVAL_REC_6662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6663(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6663_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6663_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6663_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6663_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6664
#define MACROLOP_PRIVATE_EVAL_REC_6663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6664(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6664_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6664_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6664_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6664_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6665
#define MACROLOP_PRIVATE_EVAL_REC_6664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6665(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6665_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6665_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6665_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6665_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6666
#define MACROLOP_PRIVATE_EVAL_REC_6665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6666(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6666_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6666_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6666_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6666_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6667
#define MACROLOP_PRIVATE_EVAL_REC_6666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6667(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6667_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6667_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6667_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6667_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6668
#define MACROLOP_PRIVATE_EVAL_REC_6667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6668(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6668_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6668_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6668_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6668_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6669
#define MACROLOP_PRIVATE_EVAL_REC_6668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6669(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6669_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6669_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6669_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6669_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6670
#define MACROLOP_PRIVATE_EVAL_REC_6669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6670(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6670_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6670_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6670_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6670_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6671
#define MACROLOP_PRIVATE_EVAL_REC_6670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6671(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6671_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6671_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6671_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6671_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6672
#define MACROLOP_PRIVATE_EVAL_REC_6671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6672(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6672_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6672_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6672_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6672_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6673
#define MACROLOP_PRIVATE_EVAL_REC_6672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6673(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6673_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6673_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6673_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6673_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6674
#define MACROLOP_PRIVATE_EVAL_REC_6673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6674(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6674_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6674_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6674_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6674_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6675
#define MACROLOP_PRIVATE_EVAL_REC_6674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6675(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6675_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6675_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6675_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6675_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6676
#define MACROLOP_PRIVATE_EVAL_REC_6675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6676(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6676_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6676_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6676_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6676_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6677
#define MACROLOP_PRIVATE_EVAL_REC_6676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6677(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6677_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6677_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6677_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6677_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6678
#define MACROLOP_PRIVATE_EVAL_REC_6677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6678(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6678_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6678_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6678_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6678_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6679
#define MACROLOP_PRIVATE_EVAL_REC_6678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6679(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6679_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6679_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6679_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6679_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6680
#define MACROLOP_PRIVATE_EVAL_REC_6679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6680(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6680_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6680_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6680_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6680_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6681
#define MACROLOP_PRIVATE_EVAL_REC_6680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6681(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6681_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6681_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6681_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6681_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6682
#define MACROLOP_PRIVATE_EVAL_REC_6681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6682(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6682_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6682_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6682_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6682_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6683
#define MACROLOP_PRIVATE_EVAL_REC_6682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6683(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6683_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6683_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6683_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6683_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6684
#define MACROLOP_PRIVATE_EVAL_REC_6683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6684(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6684_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6684_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6684_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6684_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6685
#define MACROLOP_PRIVATE_EVAL_REC_6684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6685(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6685_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6685_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6685_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6685_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6686
#define MACROLOP_PRIVATE_EVAL_REC_6685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6686(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6686_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6686_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6686_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6686_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6687
#define MACROLOP_PRIVATE_EVAL_REC_6686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6687(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6687_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6687_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6687_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6687_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6688
#define MACROLOP_PRIVATE_EVAL_REC_6687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6688(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6688_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6688_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6688_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6688_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6689
#define MACROLOP_PRIVATE_EVAL_REC_6688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6689(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6689_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6689_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6689_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6689_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6690
#define MACROLOP_PRIVATE_EVAL_REC_6689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6690(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6690_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6690_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6690_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6690_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6691
#define MACROLOP_PRIVATE_EVAL_REC_6690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6691(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6691_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6691_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6691_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6691_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6692
#define MACROLOP_PRIVATE_EVAL_REC_6691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6692(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6692_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6692_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6692_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6692_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6693
#define MACROLOP_PRIVATE_EVAL_REC_6692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6693(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6693_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6693_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6693_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6693_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6694
#define MACROLOP_PRIVATE_EVAL_REC_6693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6694(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6694_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6694_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6694_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6694_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6695
#define MACROLOP_PRIVATE_EVAL_REC_6694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6695(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6695_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6695_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6695_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6695_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6696
#define MACROLOP_PRIVATE_EVAL_REC_6695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6696(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6696_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6696_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6696_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6696_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6697
#define MACROLOP_PRIVATE_EVAL_REC_6696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6697(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6697_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6697_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6697_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6697_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6698
#define MACROLOP_PRIVATE_EVAL_REC_6697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6698(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6698_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6698_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6698_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6698_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6699
#define MACROLOP_PRIVATE_EVAL_REC_6698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6699(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6699_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6699_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6699_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6699_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6700
#define MACROLOP_PRIVATE_EVAL_REC_6699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6700(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6700_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6700_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6700_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6700_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6701
#define MACROLOP_PRIVATE_EVAL_REC_6700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6701(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6701_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6701_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6701_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6701_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6702
#define MACROLOP_PRIVATE_EVAL_REC_6701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6702(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6702_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6702_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6702_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6702_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6703
#define MACROLOP_PRIVATE_EVAL_REC_6702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6703(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6703_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6703_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6703_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6703_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6704
#define MACROLOP_PRIVATE_EVAL_REC_6703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6704(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6704_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6704_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6704_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6704_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6705
#define MACROLOP_PRIVATE_EVAL_REC_6704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6705(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6705_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6705_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6705_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6705_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6706
#define MACROLOP_PRIVATE_EVAL_REC_6705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6706(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6706_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6706_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6706_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6706_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6707
#define MACROLOP_PRIVATE_EVAL_REC_6706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6707(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6707_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6707_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6707_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6707_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6708
#define MACROLOP_PRIVATE_EVAL_REC_6707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6708(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6708_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6708_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6708_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6708_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6709
#define MACROLOP_PRIVATE_EVAL_REC_6708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6709(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6709_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6709_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6709_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6709_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6710
#define MACROLOP_PRIVATE_EVAL_REC_6709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6710(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6710_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6710_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6710_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6710_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6711
#define MACROLOP_PRIVATE_EVAL_REC_6710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6711(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6711_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6711_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6711_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6711_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6712
#define MACROLOP_PRIVATE_EVAL_REC_6711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6712(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6712_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6712_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6712_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6712_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6713
#define MACROLOP_PRIVATE_EVAL_REC_6712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6713(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6713_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6713_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6713_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6713_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6714
#define MACROLOP_PRIVATE_EVAL_REC_6713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6714(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6714_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6714_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6714_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6714_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6715
#define MACROLOP_PRIVATE_EVAL_REC_6714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6715(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6715_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6715_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6715_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6715_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6716
#define MACROLOP_PRIVATE_EVAL_REC_6715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6716(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6716_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6716_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6716_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6716_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6717
#define MACROLOP_PRIVATE_EVAL_REC_6716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6717(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6717_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6717_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6717_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6717_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6718
#define MACROLOP_PRIVATE_EVAL_REC_6717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6718(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6718_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6718_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6718_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6718_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6719
#define MACROLOP_PRIVATE_EVAL_REC_6718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6719(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6719_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6719_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6719_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6719_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6720
#define MACROLOP_PRIVATE_EVAL_REC_6719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6720(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6720_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6720_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6720_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6720_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6721
#define MACROLOP_PRIVATE_EVAL_REC_6720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6721(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6721_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6721_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6721_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6721_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6722
#define MACROLOP_PRIVATE_EVAL_REC_6721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6722(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6722_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6722_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6722_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6722_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6723
#define MACROLOP_PRIVATE_EVAL_REC_6722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6723(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6723_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6723_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6723_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6723_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6724
#define MACROLOP_PRIVATE_EVAL_REC_6723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6724(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6724_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6724_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6724_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6724_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6725
#define MACROLOP_PRIVATE_EVAL_REC_6724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6725(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6725_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6725_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6725_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6725_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6726
#define MACROLOP_PRIVATE_EVAL_REC_6725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6726(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6726_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6726_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6726_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6726_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6727
#define MACROLOP_PRIVATE_EVAL_REC_6726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6727(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6727_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6727_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6727_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6727_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6728
#define MACROLOP_PRIVATE_EVAL_REC_6727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6728(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6728_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6728_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6728_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6728_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6729
#define MACROLOP_PRIVATE_EVAL_REC_6728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6729(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6729_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6729_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6729_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6729_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6730
#define MACROLOP_PRIVATE_EVAL_REC_6729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6730(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6730_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6730_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6730_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6730_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6731
#define MACROLOP_PRIVATE_EVAL_REC_6730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6731(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6731_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6731_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6731_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6731_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6732
#define MACROLOP_PRIVATE_EVAL_REC_6731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6732(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6732_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6732_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6732_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6732_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6733
#define MACROLOP_PRIVATE_EVAL_REC_6732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6733(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6733_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6733_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6733_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6733_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6734
#define MACROLOP_PRIVATE_EVAL_REC_6733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6734(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6734_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6734_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6734_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6734_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6735
#define MACROLOP_PRIVATE_EVAL_REC_6734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6735(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6735_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6735_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6735_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6735_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6736
#define MACROLOP_PRIVATE_EVAL_REC_6735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6736(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6736_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6736_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6736_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6736_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6737
#define MACROLOP_PRIVATE_EVAL_REC_6736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6737(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6737_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6737_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6737_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6737_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6738
#define MACROLOP_PRIVATE_EVAL_REC_6737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6738(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6738_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6738_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6738_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6738_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6739
#define MACROLOP_PRIVATE_EVAL_REC_6738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6739(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6739_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6739_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6739_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6739_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6740
#define MACROLOP_PRIVATE_EVAL_REC_6739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6740(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6740_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6740_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6740_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6740_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6741
#define MACROLOP_PRIVATE_EVAL_REC_6740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6741(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6741_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6741_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6741_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6741_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6742
#define MACROLOP_PRIVATE_EVAL_REC_6741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6742(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6742_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6742_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6742_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6742_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6743
#define MACROLOP_PRIVATE_EVAL_REC_6742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6743(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6743_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6743_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6743_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6743_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6744
#define MACROLOP_PRIVATE_EVAL_REC_6743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6744(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6744_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6744_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6744_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6744_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6745
#define MACROLOP_PRIVATE_EVAL_REC_6744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6745(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6745_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6745_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6745_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6745_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6746
#define MACROLOP_PRIVATE_EVAL_REC_6745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6746(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6746_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6746_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6746_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6746_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6747
#define MACROLOP_PRIVATE_EVAL_REC_6746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6747(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6747_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6747_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6747_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6747_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6748
#define MACROLOP_PRIVATE_EVAL_REC_6747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6748(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6748_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6748_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6748_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6748_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6749
#define MACROLOP_PRIVATE_EVAL_REC_6748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6749(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6749_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6749_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6749_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6749_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6750
#define MACROLOP_PRIVATE_EVAL_REC_6749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6750(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6750_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6750_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6750_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6750_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6751
#define MACROLOP_PRIVATE_EVAL_REC_6750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6751(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6751_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6751_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6751_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6751_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6752
#define MACROLOP_PRIVATE_EVAL_REC_6751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6752(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6752_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6752_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6752_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6752_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6753
#define MACROLOP_PRIVATE_EVAL_REC_6752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6753(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6753_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6753_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6753_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6753_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6754
#define MACROLOP_PRIVATE_EVAL_REC_6753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6754(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6754_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6754_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6754_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6754_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6755
#define MACROLOP_PRIVATE_EVAL_REC_6754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6755(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6755_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6755_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6755_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6755_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6756
#define MACROLOP_PRIVATE_EVAL_REC_6755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6756(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6756_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6756_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6756_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6756_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6757
#define MACROLOP_PRIVATE_EVAL_REC_6756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6757(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6757_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6757_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6757_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6757_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6758
#define MACROLOP_PRIVATE_EVAL_REC_6757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6758(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6758_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6758_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6758_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6758_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6759
#define MACROLOP_PRIVATE_EVAL_REC_6758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6759(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6759_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6759_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6759_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6759_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6760
#define MACROLOP_PRIVATE_EVAL_REC_6759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6760(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6760_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6760_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6760_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6760_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6761
#define MACROLOP_PRIVATE_EVAL_REC_6760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6761(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6761_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6761_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6761_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6761_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6762
#define MACROLOP_PRIVATE_EVAL_REC_6761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6762(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6762_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6762_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6762_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6762_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6763
#define MACROLOP_PRIVATE_EVAL_REC_6762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6763(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6763_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6763_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6763_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6763_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6764
#define MACROLOP_PRIVATE_EVAL_REC_6763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6764(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6764_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6764_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6764_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6764_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6765
#define MACROLOP_PRIVATE_EVAL_REC_6764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6765(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6765_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6765_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6765_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6765_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6766
#define MACROLOP_PRIVATE_EVAL_REC_6765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6766(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6766_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6766_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6766_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6766_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6767
#define MACROLOP_PRIVATE_EVAL_REC_6766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6767(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6767_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6767_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6767_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6767_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6768
#define MACROLOP_PRIVATE_EVAL_REC_6767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6768(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6768_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6768_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6768_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6768_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6769
#define MACROLOP_PRIVATE_EVAL_REC_6768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6769(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6769_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6769_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6769_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6769_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6770
#define MACROLOP_PRIVATE_EVAL_REC_6769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6770(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6770_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6770_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6770_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6770_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6771
#define MACROLOP_PRIVATE_EVAL_REC_6770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6771(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6771_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6771_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6771_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6771_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6772
#define MACROLOP_PRIVATE_EVAL_REC_6771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6772(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6772_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6772_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6772_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6772_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6773
#define MACROLOP_PRIVATE_EVAL_REC_6772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6773(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6773_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6773_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6773_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6773_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6774
#define MACROLOP_PRIVATE_EVAL_REC_6773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6774(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6774_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6774_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6774_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6774_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6775
#define MACROLOP_PRIVATE_EVAL_REC_6774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6775(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6775_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6775_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6775_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6775_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6776
#define MACROLOP_PRIVATE_EVAL_REC_6775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6776(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6776_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6776_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6776_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6776_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6777
#define MACROLOP_PRIVATE_EVAL_REC_6776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6777(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6777_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6777_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6777_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6777_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6778
#define MACROLOP_PRIVATE_EVAL_REC_6777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6778(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6778_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6778_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6778_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6778_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6779
#define MACROLOP_PRIVATE_EVAL_REC_6778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6779(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6779_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6779_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6779_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6779_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6780
#define MACROLOP_PRIVATE_EVAL_REC_6779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6780(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6780_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6780_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6780_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6780_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6781
#define MACROLOP_PRIVATE_EVAL_REC_6780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6781(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6781_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6781_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6781_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6781_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6782
#define MACROLOP_PRIVATE_EVAL_REC_6781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6782(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6782_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6782_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6782_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6782_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6783
#define MACROLOP_PRIVATE_EVAL_REC_6782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6783(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6783_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6783_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6783_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6783_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6784
#define MACROLOP_PRIVATE_EVAL_REC_6783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6784(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6784_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6784_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6784_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6784_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6785
#define MACROLOP_PRIVATE_EVAL_REC_6784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6785(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6785_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6785_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6785_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6785_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6786
#define MACROLOP_PRIVATE_EVAL_REC_6785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6786(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6786_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6786_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6786_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6786_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6787
#define MACROLOP_PRIVATE_EVAL_REC_6786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6787(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6787_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6787_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6787_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6787_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6788
#define MACROLOP_PRIVATE_EVAL_REC_6787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6788(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6788_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6788_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6788_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6788_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6789
#define MACROLOP_PRIVATE_EVAL_REC_6788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6789(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6789_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6789_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6789_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6789_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6790
#define MACROLOP_PRIVATE_EVAL_REC_6789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6790(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6790_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6790_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6790_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6790_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6791
#define MACROLOP_PRIVATE_EVAL_REC_6790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6791(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6791_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6791_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6791_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6791_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6792
#define MACROLOP_PRIVATE_EVAL_REC_6791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6792(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6792_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6792_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6792_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6792_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6793
#define MACROLOP_PRIVATE_EVAL_REC_6792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6793(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6793_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6793_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6793_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6793_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6794
#define MACROLOP_PRIVATE_EVAL_REC_6793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6794(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6794_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6794_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6794_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6794_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6795
#define MACROLOP_PRIVATE_EVAL_REC_6794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6795(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6795_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6795_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6795_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6795_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6796
#define MACROLOP_PRIVATE_EVAL_REC_6795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6796(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6796_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6796_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6796_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6796_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6797
#define MACROLOP_PRIVATE_EVAL_REC_6796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6797(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6797_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6797_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6797_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6797_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6798
#define MACROLOP_PRIVATE_EVAL_REC_6797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6798(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6798_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6798_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6798_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6798_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6799
#define MACROLOP_PRIVATE_EVAL_REC_6798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6799(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6799_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6799_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6799_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6799_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6800
#define MACROLOP_PRIVATE_EVAL_REC_6799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6800(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6800_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6800_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6800_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6800_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6801
#define MACROLOP_PRIVATE_EVAL_REC_6800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6801(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6801_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6801_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6801_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6801_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6802
#define MACROLOP_PRIVATE_EVAL_REC_6801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6802(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6802_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6802_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6802_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6802_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6803
#define MACROLOP_PRIVATE_EVAL_REC_6802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6803(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6803_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6803_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6803_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6803_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6804
#define MACROLOP_PRIVATE_EVAL_REC_6803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6804(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6804_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6804_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6804_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6804_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6805
#define MACROLOP_PRIVATE_EVAL_REC_6804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6805(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6805_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6805_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6805_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6805_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6806
#define MACROLOP_PRIVATE_EVAL_REC_6805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6806(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6806_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6806_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6806_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6806_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6807
#define MACROLOP_PRIVATE_EVAL_REC_6806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6807(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6807_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6807_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6807_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6807_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6808
#define MACROLOP_PRIVATE_EVAL_REC_6807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6808(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6808_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6808_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6808_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6808_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6809
#define MACROLOP_PRIVATE_EVAL_REC_6808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6809(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6809_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6809_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6809_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6809_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6810
#define MACROLOP_PRIVATE_EVAL_REC_6809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6810(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6810_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6810_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6810_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6810_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6811
#define MACROLOP_PRIVATE_EVAL_REC_6810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6811(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6811_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6811_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6811_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6811_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6812
#define MACROLOP_PRIVATE_EVAL_REC_6811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6812(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6812_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6812_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6812_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6812_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6813
#define MACROLOP_PRIVATE_EVAL_REC_6812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6813(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6813_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6813_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6813_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6813_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6814
#define MACROLOP_PRIVATE_EVAL_REC_6813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6814(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6814_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6814_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6814_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6814_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6815
#define MACROLOP_PRIVATE_EVAL_REC_6814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6815(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6815_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6815_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6815_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6815_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6816
#define MACROLOP_PRIVATE_EVAL_REC_6815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6816(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6816_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6816_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6816_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6816_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6817
#define MACROLOP_PRIVATE_EVAL_REC_6816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6817(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6817_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6817_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6817_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6817_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6818
#define MACROLOP_PRIVATE_EVAL_REC_6817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6818(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6818_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6818_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6818_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6818_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6819
#define MACROLOP_PRIVATE_EVAL_REC_6818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6819(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6819_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6819_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6819_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6819_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6820
#define MACROLOP_PRIVATE_EVAL_REC_6819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6820(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6820_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6820_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6820_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6820_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6821
#define MACROLOP_PRIVATE_EVAL_REC_6820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6821(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6821_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6821_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6821_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6821_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6822
#define MACROLOP_PRIVATE_EVAL_REC_6821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6822(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6822_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6822_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6822_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6822_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6823
#define MACROLOP_PRIVATE_EVAL_REC_6822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6823(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6823_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6823_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6823_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6823_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6824
#define MACROLOP_PRIVATE_EVAL_REC_6823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6824(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6824_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6824_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6824_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6824_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6825
#define MACROLOP_PRIVATE_EVAL_REC_6824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6825(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6825_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6825_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6825_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6825_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6826
#define MACROLOP_PRIVATE_EVAL_REC_6825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6826(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6826_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6826_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6826_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6826_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6827
#define MACROLOP_PRIVATE_EVAL_REC_6826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6827(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6827_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6827_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6827_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6827_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6828
#define MACROLOP_PRIVATE_EVAL_REC_6827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6828(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6828_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6828_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6828_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6828_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6829
#define MACROLOP_PRIVATE_EVAL_REC_6828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6829(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6829_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6829_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6829_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6829_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6830
#define MACROLOP_PRIVATE_EVAL_REC_6829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6830(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6830_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6830_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6830_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6830_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6831
#define MACROLOP_PRIVATE_EVAL_REC_6830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6831(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6831_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6831_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6831_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6831_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6832
#define MACROLOP_PRIVATE_EVAL_REC_6831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6832(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6832_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6832_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6832_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6832_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6833
#define MACROLOP_PRIVATE_EVAL_REC_6832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6833(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6833_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6833_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6833_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6833_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6834
#define MACROLOP_PRIVATE_EVAL_REC_6833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6834(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6834_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6834_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6834_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6834_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6835
#define MACROLOP_PRIVATE_EVAL_REC_6834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6835(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6835_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6835_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6835_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6835_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6836
#define MACROLOP_PRIVATE_EVAL_REC_6835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6836(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6836_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6836_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6836_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6836_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6837
#define MACROLOP_PRIVATE_EVAL_REC_6836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6837(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6837_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6837_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6837_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6837_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6838
#define MACROLOP_PRIVATE_EVAL_REC_6837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6838(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6838_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6838_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6838_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6838_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6839
#define MACROLOP_PRIVATE_EVAL_REC_6838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6839(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6839_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6839_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6839_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6839_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6840
#define MACROLOP_PRIVATE_EVAL_REC_6839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6840(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6840_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6840_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6840_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6840_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6841
#define MACROLOP_PRIVATE_EVAL_REC_6840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6841(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6841_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6841_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6841_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6841_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6842
#define MACROLOP_PRIVATE_EVAL_REC_6841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6842(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6842_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6842_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6842_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6842_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6843
#define MACROLOP_PRIVATE_EVAL_REC_6842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6843(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6843_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6843_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6843_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6843_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6844
#define MACROLOP_PRIVATE_EVAL_REC_6843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6844(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6844_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6844_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6844_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6844_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6845
#define MACROLOP_PRIVATE_EVAL_REC_6844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6845(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6845_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6845_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6845_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6845_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6846
#define MACROLOP_PRIVATE_EVAL_REC_6845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6846(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6846_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6846_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6846_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6846_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6847
#define MACROLOP_PRIVATE_EVAL_REC_6846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6847(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6847_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6847_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6847_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6847_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6848
#define MACROLOP_PRIVATE_EVAL_REC_6847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6848(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6848_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6848_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6848_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6848_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6849
#define MACROLOP_PRIVATE_EVAL_REC_6848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6849(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6849_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6849_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6849_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6849_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6850
#define MACROLOP_PRIVATE_EVAL_REC_6849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6850(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6850_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6850_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6850_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6850_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6851
#define MACROLOP_PRIVATE_EVAL_REC_6850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6851(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6851_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6851_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6851_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6851_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6852
#define MACROLOP_PRIVATE_EVAL_REC_6851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6852(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6852_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6852_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6852_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6852_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6853
#define MACROLOP_PRIVATE_EVAL_REC_6852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6853(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6853_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6853_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6853_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6853_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6854
#define MACROLOP_PRIVATE_EVAL_REC_6853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6854(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6854_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6854_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6854_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6854_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6855
#define MACROLOP_PRIVATE_EVAL_REC_6854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6855(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6855_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6855_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6855_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6855_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6856
#define MACROLOP_PRIVATE_EVAL_REC_6855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6856(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6856_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6856_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6856_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6856_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6857
#define MACROLOP_PRIVATE_EVAL_REC_6856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6857(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6857_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6857_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6857_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6857_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6858
#define MACROLOP_PRIVATE_EVAL_REC_6857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6858(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6858_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6858_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6858_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6858_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6859
#define MACROLOP_PRIVATE_EVAL_REC_6858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6859(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6859_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6859_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6859_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6859_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6860
#define MACROLOP_PRIVATE_EVAL_REC_6859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6860(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6860_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6860_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6860_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6860_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6861
#define MACROLOP_PRIVATE_EVAL_REC_6860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6861(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6861_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6861_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6861_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6861_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6862
#define MACROLOP_PRIVATE_EVAL_REC_6861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6862(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6862_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6862_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6862_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6862_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6863
#define MACROLOP_PRIVATE_EVAL_REC_6862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6863(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6863_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6863_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6863_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6863_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6864
#define MACROLOP_PRIVATE_EVAL_REC_6863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6864(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6864_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6864_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6864_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6864_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6865
#define MACROLOP_PRIVATE_EVAL_REC_6864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6865(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6865_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6865_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6865_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6865_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6866
#define MACROLOP_PRIVATE_EVAL_REC_6865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6866(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6866_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6866_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6866_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6866_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6867
#define MACROLOP_PRIVATE_EVAL_REC_6866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6867(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6867_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6867_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6867_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6867_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6868
#define MACROLOP_PRIVATE_EVAL_REC_6867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6868(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6868_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6868_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6868_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6868_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6869
#define MACROLOP_PRIVATE_EVAL_REC_6868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6869(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6869_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6869_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6869_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6869_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6870
#define MACROLOP_PRIVATE_EVAL_REC_6869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6870(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6870_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6870_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6870_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6870_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6871
#define MACROLOP_PRIVATE_EVAL_REC_6870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6871(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6871_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6871_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6871_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6871_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6872
#define MACROLOP_PRIVATE_EVAL_REC_6871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6872(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6872_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6872_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6872_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6872_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6873
#define MACROLOP_PRIVATE_EVAL_REC_6872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6873(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6873_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6873_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6873_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6873_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6874
#define MACROLOP_PRIVATE_EVAL_REC_6873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6874(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6874_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6874_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6874_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6874_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6875
#define MACROLOP_PRIVATE_EVAL_REC_6874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6875(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6875_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6875_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6875_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6875_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6876
#define MACROLOP_PRIVATE_EVAL_REC_6875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6876(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6876_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6876_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6876_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6876_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6877
#define MACROLOP_PRIVATE_EVAL_REC_6876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6877(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6877_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6877_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6877_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6877_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6878
#define MACROLOP_PRIVATE_EVAL_REC_6877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6878(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6878_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6878_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6878_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6878_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6879
#define MACROLOP_PRIVATE_EVAL_REC_6878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6879(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6879_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6879_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6879_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6879_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6880
#define MACROLOP_PRIVATE_EVAL_REC_6879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6880(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6880_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6880_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6880_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6880_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6881
#define MACROLOP_PRIVATE_EVAL_REC_6880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6881(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6881_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6881_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6881_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6881_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6882
#define MACROLOP_PRIVATE_EVAL_REC_6881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6882(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6882_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6882_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6882_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6882_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6883
#define MACROLOP_PRIVATE_EVAL_REC_6882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6883(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6883_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6883_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6883_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6883_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6884
#define MACROLOP_PRIVATE_EVAL_REC_6883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6884(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6884_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6884_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6884_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6884_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6885
#define MACROLOP_PRIVATE_EVAL_REC_6884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6885(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6885_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6885_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6885_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6885_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6886
#define MACROLOP_PRIVATE_EVAL_REC_6885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6886(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6886_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6886_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6886_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6886_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6887
#define MACROLOP_PRIVATE_EVAL_REC_6886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6887(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6887_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6887_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6887_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6887_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6888
#define MACROLOP_PRIVATE_EVAL_REC_6887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6888(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6888_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6888_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6888_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6888_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6889
#define MACROLOP_PRIVATE_EVAL_REC_6888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6889(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6889_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6889_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6889_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6889_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6890
#define MACROLOP_PRIVATE_EVAL_REC_6889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6890(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6890_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6890_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6890_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6890_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6891
#define MACROLOP_PRIVATE_EVAL_REC_6890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6891(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6891_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6891_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6891_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6891_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6892
#define MACROLOP_PRIVATE_EVAL_REC_6891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6892(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6892_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6892_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6892_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6892_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6893
#define MACROLOP_PRIVATE_EVAL_REC_6892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6893(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6893_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6893_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6893_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6893_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6894
#define MACROLOP_PRIVATE_EVAL_REC_6893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6894(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6894_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6894_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6894_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6894_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6895
#define MACROLOP_PRIVATE_EVAL_REC_6894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6895(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6895_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6895_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6895_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6895_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6896
#define MACROLOP_PRIVATE_EVAL_REC_6895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6896(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6896_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6896_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6896_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6896_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6897
#define MACROLOP_PRIVATE_EVAL_REC_6896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6897(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6897_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6897_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6897_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6897_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6898
#define MACROLOP_PRIVATE_EVAL_REC_6897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6898(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6898_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6898_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6898_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6898_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6899
#define MACROLOP_PRIVATE_EVAL_REC_6898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6899(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6899_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6899_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6899_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6899_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6900
#define MACROLOP_PRIVATE_EVAL_REC_6899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6900(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6900_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6900_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6900_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6900_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6901
#define MACROLOP_PRIVATE_EVAL_REC_6900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6901(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6901_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6901_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6901_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6901_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6902
#define MACROLOP_PRIVATE_EVAL_REC_6901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6902(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6902_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6902_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6902_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6902_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6903
#define MACROLOP_PRIVATE_EVAL_REC_6902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6903(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6903_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6903_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6903_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6903_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6904
#define MACROLOP_PRIVATE_EVAL_REC_6903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6904(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6904_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6904_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6904_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6904_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6905
#define MACROLOP_PRIVATE_EVAL_REC_6904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6905(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6905_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6905_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6905_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6905_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6906
#define MACROLOP_PRIVATE_EVAL_REC_6905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6906(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6906_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6906_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6906_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6906_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6907
#define MACROLOP_PRIVATE_EVAL_REC_6906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6907(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6907_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6907_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6907_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6907_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6908
#define MACROLOP_PRIVATE_EVAL_REC_6907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6908(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6908_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6908_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6908_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6908_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6909
#define MACROLOP_PRIVATE_EVAL_REC_6908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6909(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6909_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6909_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6909_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6909_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6910
#define MACROLOP_PRIVATE_EVAL_REC_6909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6910(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6910_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6910_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6910_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6910_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6911
#define MACROLOP_PRIVATE_EVAL_REC_6910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6911(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6911_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6911_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6911_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6911_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6912
#define MACROLOP_PRIVATE_EVAL_REC_6911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6912(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6912_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6912_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6912_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6912_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6913
#define MACROLOP_PRIVATE_EVAL_REC_6912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6913(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6913_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6913_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6913_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6913_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6914
#define MACROLOP_PRIVATE_EVAL_REC_6913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6914(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6914_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6914_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6914_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6914_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6915
#define MACROLOP_PRIVATE_EVAL_REC_6914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6915(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6915_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6915_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6915_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6915_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6916
#define MACROLOP_PRIVATE_EVAL_REC_6915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6916(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6916_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6916_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6916_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6916_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6917
#define MACROLOP_PRIVATE_EVAL_REC_6916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6917(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6917_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6917_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6917_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6917_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6918
#define MACROLOP_PRIVATE_EVAL_REC_6917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6918(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6918_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6918_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6918_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6918_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6919
#define MACROLOP_PRIVATE_EVAL_REC_6918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6919(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6919_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6919_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6919_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6919_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6920
#define MACROLOP_PRIVATE_EVAL_REC_6919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6920(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6920_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6920_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6920_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6920_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6921
#define MACROLOP_PRIVATE_EVAL_REC_6920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6921(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6921_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6921_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6921_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6921_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6922
#define MACROLOP_PRIVATE_EVAL_REC_6921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6922(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6922_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6922_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6922_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6922_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6923
#define MACROLOP_PRIVATE_EVAL_REC_6922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6923(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6923_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6923_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6923_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6923_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6924
#define MACROLOP_PRIVATE_EVAL_REC_6923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6924(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6924_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6924_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6924_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6924_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6925
#define MACROLOP_PRIVATE_EVAL_REC_6924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6925(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6925_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6925_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6925_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6925_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6926
#define MACROLOP_PRIVATE_EVAL_REC_6925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6926(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6926_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6926_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6926_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6926_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6927
#define MACROLOP_PRIVATE_EVAL_REC_6926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6927(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6927_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6927_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6927_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6927_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6928
#define MACROLOP_PRIVATE_EVAL_REC_6927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6928(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6928_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6928_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6928_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6928_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6929
#define MACROLOP_PRIVATE_EVAL_REC_6928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6929(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6929_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6929_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6929_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6929_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6930
#define MACROLOP_PRIVATE_EVAL_REC_6929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6930(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6930_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6930_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6930_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6930_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6931
#define MACROLOP_PRIVATE_EVAL_REC_6930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6931(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6931_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6931_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6931_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6931_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6932
#define MACROLOP_PRIVATE_EVAL_REC_6931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6932(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6932_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6932_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6932_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6932_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6933
#define MACROLOP_PRIVATE_EVAL_REC_6932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6933(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6933_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6933_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6933_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6933_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6934
#define MACROLOP_PRIVATE_EVAL_REC_6933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6934(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6934_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6934_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6934_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6934_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6935
#define MACROLOP_PRIVATE_EVAL_REC_6934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6935(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6935_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6935_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6935_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6935_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6936
#define MACROLOP_PRIVATE_EVAL_REC_6935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6936(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6936_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6936_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6936_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6936_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6937
#define MACROLOP_PRIVATE_EVAL_REC_6936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6937(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6937_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6937_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6937_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6937_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6938
#define MACROLOP_PRIVATE_EVAL_REC_6937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6938(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6938_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6938_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6938_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6938_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6939
#define MACROLOP_PRIVATE_EVAL_REC_6938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6939(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6939_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6939_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6939_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6939_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6940
#define MACROLOP_PRIVATE_EVAL_REC_6939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6940(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6940_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6940_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6940_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6940_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6941
#define MACROLOP_PRIVATE_EVAL_REC_6940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6941(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6941_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6941_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6941_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6941_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6942
#define MACROLOP_PRIVATE_EVAL_REC_6941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6942(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6942_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6942_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6942_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6942_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6943
#define MACROLOP_PRIVATE_EVAL_REC_6942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6943(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6943_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6943_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6943_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6943_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6944
#define MACROLOP_PRIVATE_EVAL_REC_6943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6944(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6944_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6944_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6944_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6944_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6945
#define MACROLOP_PRIVATE_EVAL_REC_6944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6945(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6945_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6945_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6945_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6945_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6946
#define MACROLOP_PRIVATE_EVAL_REC_6945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6946(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6946_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6946_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6946_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6946_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6947
#define MACROLOP_PRIVATE_EVAL_REC_6946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6947(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6947_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6947_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6947_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6947_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6948
#define MACROLOP_PRIVATE_EVAL_REC_6947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6948(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6948_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6948_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6948_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6948_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6949
#define MACROLOP_PRIVATE_EVAL_REC_6948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6949(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6949_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6949_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6949_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6949_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6950
#define MACROLOP_PRIVATE_EVAL_REC_6949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6950(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6950_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6950_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6950_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6950_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6951
#define MACROLOP_PRIVATE_EVAL_REC_6950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6951(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6951_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6951_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6951_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6951_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6952
#define MACROLOP_PRIVATE_EVAL_REC_6951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6952(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6952_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6952_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6952_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6952_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6953
#define MACROLOP_PRIVATE_EVAL_REC_6952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6953(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6953_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6953_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6953_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6953_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6954
#define MACROLOP_PRIVATE_EVAL_REC_6953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6954(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6954_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6954_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6954_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6954_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6955
#define MACROLOP_PRIVATE_EVAL_REC_6954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6955(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6955_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6955_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6955_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6955_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6956
#define MACROLOP_PRIVATE_EVAL_REC_6955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6956(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6956_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6956_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6956_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6956_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6957
#define MACROLOP_PRIVATE_EVAL_REC_6956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6957(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6957_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6957_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6957_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6957_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6958
#define MACROLOP_PRIVATE_EVAL_REC_6957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6958(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6958_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6958_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6958_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6958_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6959
#define MACROLOP_PRIVATE_EVAL_REC_6958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6959(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6959_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6959_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6959_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6959_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6960
#define MACROLOP_PRIVATE_EVAL_REC_6959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6960(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6960_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6960_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6960_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6960_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6961
#define MACROLOP_PRIVATE_EVAL_REC_6960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6961(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6961_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6961_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6961_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6961_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6962
#define MACROLOP_PRIVATE_EVAL_REC_6961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6962(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6962_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6962_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6962_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6962_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6963
#define MACROLOP_PRIVATE_EVAL_REC_6962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6963(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6963_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6963_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6963_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6963_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6964
#define MACROLOP_PRIVATE_EVAL_REC_6963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6964(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6964_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6964_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6964_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6964_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6965
#define MACROLOP_PRIVATE_EVAL_REC_6964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6965(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6965_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6965_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6965_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6965_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6966
#define MACROLOP_PRIVATE_EVAL_REC_6965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6966(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6966_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6966_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6966_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6966_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6967
#define MACROLOP_PRIVATE_EVAL_REC_6966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6967(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6967_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6967_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6967_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6967_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6968
#define MACROLOP_PRIVATE_EVAL_REC_6967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6968(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6968_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6968_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6968_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6968_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6969
#define MACROLOP_PRIVATE_EVAL_REC_6968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6969(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6969_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6969_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6969_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6969_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6970
#define MACROLOP_PRIVATE_EVAL_REC_6969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6970(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6970_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6970_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6970_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6970_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6971
#define MACROLOP_PRIVATE_EVAL_REC_6970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6971(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6971_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6971_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6971_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6971_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6972
#define MACROLOP_PRIVATE_EVAL_REC_6971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6972(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6972_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6972_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6972_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6972_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6973
#define MACROLOP_PRIVATE_EVAL_REC_6972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6973(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6973_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6973_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6973_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6973_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6974
#define MACROLOP_PRIVATE_EVAL_REC_6973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6974(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6974_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6974_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6974_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6974_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6975
#define MACROLOP_PRIVATE_EVAL_REC_6974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6975(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6975_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6975_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6975_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6975_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6976
#define MACROLOP_PRIVATE_EVAL_REC_6975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6976(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6976_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6976_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6976_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6976_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6977
#define MACROLOP_PRIVATE_EVAL_REC_6976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6977(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6977_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6977_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6977_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6977_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6978
#define MACROLOP_PRIVATE_EVAL_REC_6977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6978(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6978_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6978_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6978_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6978_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6979
#define MACROLOP_PRIVATE_EVAL_REC_6978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6979(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6979_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6979_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6979_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6979_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6980
#define MACROLOP_PRIVATE_EVAL_REC_6979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6980(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6980_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6980_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6980_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6980_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6981
#define MACROLOP_PRIVATE_EVAL_REC_6980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6981(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6981_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6981_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6981_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6981_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6982
#define MACROLOP_PRIVATE_EVAL_REC_6981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6982(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6982_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6982_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6982_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6982_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6983
#define MACROLOP_PRIVATE_EVAL_REC_6982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6983(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6983_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6983_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6983_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6983_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6984
#define MACROLOP_PRIVATE_EVAL_REC_6983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6984(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6984_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6984_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6984_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6984_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6985
#define MACROLOP_PRIVATE_EVAL_REC_6984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6985(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6985_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6985_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6985_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6985_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6986
#define MACROLOP_PRIVATE_EVAL_REC_6985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6986(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6986_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6986_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6986_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6986_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6987
#define MACROLOP_PRIVATE_EVAL_REC_6986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6987(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6987_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6987_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6987_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6987_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6988
#define MACROLOP_PRIVATE_EVAL_REC_6987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6988(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6988_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6988_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6988_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6988_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6989
#define MACROLOP_PRIVATE_EVAL_REC_6988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6989(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6989_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6989_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6989_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6989_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6990
#define MACROLOP_PRIVATE_EVAL_REC_6989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6990(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6990_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6990_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6990_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6990_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6991
#define MACROLOP_PRIVATE_EVAL_REC_6990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6991(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6991_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6991_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6991_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6991_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6992
#define MACROLOP_PRIVATE_EVAL_REC_6991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6992(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6992_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6992_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6992_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6992_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6993
#define MACROLOP_PRIVATE_EVAL_REC_6992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6993(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6993_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6993_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6993_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6993_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6994
#define MACROLOP_PRIVATE_EVAL_REC_6993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6994(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6994_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6994_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6994_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6994_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6995
#define MACROLOP_PRIVATE_EVAL_REC_6994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6995(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6995_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6995_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6995_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6995_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6996
#define MACROLOP_PRIVATE_EVAL_REC_6995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6996(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6996_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6996_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6996_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6996_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6997
#define MACROLOP_PRIVATE_EVAL_REC_6996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6997(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6997_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6997_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6997_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6997_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6998
#define MACROLOP_PRIVATE_EVAL_REC_6997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6998(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6998_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6998_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6998_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6998_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6999
#define MACROLOP_PRIVATE_EVAL_REC_6998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6999(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6999_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6999_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6999_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6999_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7000
#define MACROLOP_PRIVATE_EVAL_REC_6999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7000(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7000_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7000_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7000_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7000_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7001
#define MACROLOP_PRIVATE_EVAL_REC_7000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7001(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7001_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7001_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7001_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7001_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7002
#define MACROLOP_PRIVATE_EVAL_REC_7001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7002(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7002_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7002_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7002_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7002_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7003
#define MACROLOP_PRIVATE_EVAL_REC_7002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7003(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7003_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7003_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7003_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7003_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7004
#define MACROLOP_PRIVATE_EVAL_REC_7003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7004(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7004_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7004_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7004_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7004_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7005
#define MACROLOP_PRIVATE_EVAL_REC_7004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7005(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7005_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7005_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7005_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7005_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7006
#define MACROLOP_PRIVATE_EVAL_REC_7005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7006(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7006_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7006_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7006_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7006_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7007
#define MACROLOP_PRIVATE_EVAL_REC_7006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7007(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7007_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7007_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7007_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7007_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7008
#define MACROLOP_PRIVATE_EVAL_REC_7007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7008(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7008_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7008_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7008_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7008_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7009
#define MACROLOP_PRIVATE_EVAL_REC_7008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7009(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7009_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7009_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7009_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7009_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7010
#define MACROLOP_PRIVATE_EVAL_REC_7009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7010(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7010_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7010_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7010_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7010_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7011
#define MACROLOP_PRIVATE_EVAL_REC_7010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7011(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7011_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7011_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7011_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7011_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7012
#define MACROLOP_PRIVATE_EVAL_REC_7011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7012(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7012_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7012_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7012_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7012_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7013
#define MACROLOP_PRIVATE_EVAL_REC_7012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7013(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7013_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7013_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7013_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7013_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7014
#define MACROLOP_PRIVATE_EVAL_REC_7013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7014(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7014_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7014_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7014_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7014_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7015
#define MACROLOP_PRIVATE_EVAL_REC_7014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7015(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7015_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7015_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7015_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7015_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7016
#define MACROLOP_PRIVATE_EVAL_REC_7015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7016(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7016_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7016_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7016_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7016_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7017
#define MACROLOP_PRIVATE_EVAL_REC_7016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7017(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7017_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7017_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7017_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7017_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7018
#define MACROLOP_PRIVATE_EVAL_REC_7017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7018(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7018_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7018_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7018_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7018_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7019
#define MACROLOP_PRIVATE_EVAL_REC_7018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7019(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7019_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7019_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7019_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7019_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7020
#define MACROLOP_PRIVATE_EVAL_REC_7019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7020(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7020_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7020_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7020_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7020_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7021
#define MACROLOP_PRIVATE_EVAL_REC_7020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7021(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7021_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7021_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7021_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7021_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7022
#define MACROLOP_PRIVATE_EVAL_REC_7021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7022(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7022_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7022_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7022_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7022_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7023
#define MACROLOP_PRIVATE_EVAL_REC_7022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7023(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7023_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7023_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7023_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7023_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7024
#define MACROLOP_PRIVATE_EVAL_REC_7023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7024(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7024_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7024_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7024_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7024_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7025
#define MACROLOP_PRIVATE_EVAL_REC_7024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7025(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7025_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7025_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7025_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7025_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7026
#define MACROLOP_PRIVATE_EVAL_REC_7025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7026(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7026_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7026_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7026_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7026_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7027
#define MACROLOP_PRIVATE_EVAL_REC_7026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7027(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7027_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7027_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7027_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7027_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7028
#define MACROLOP_PRIVATE_EVAL_REC_7027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7028(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7028_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7028_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7028_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7028_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7029
#define MACROLOP_PRIVATE_EVAL_REC_7028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7029(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7029_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7029_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7029_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7029_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7030
#define MACROLOP_PRIVATE_EVAL_REC_7029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7030(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7030_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7030_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7030_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7030_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7031
#define MACROLOP_PRIVATE_EVAL_REC_7030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7031(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7031_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7031_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7031_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7031_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7032
#define MACROLOP_PRIVATE_EVAL_REC_7031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7032(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7032_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7032_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7032_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7032_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7033
#define MACROLOP_PRIVATE_EVAL_REC_7032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7033(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7033_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7033_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7033_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7033_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7034
#define MACROLOP_PRIVATE_EVAL_REC_7033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7034(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7034_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7034_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7034_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7034_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7035
#define MACROLOP_PRIVATE_EVAL_REC_7034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7035(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7035_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7035_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7035_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7035_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7036
#define MACROLOP_PRIVATE_EVAL_REC_7035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7036(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7036_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7036_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7036_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7036_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7037
#define MACROLOP_PRIVATE_EVAL_REC_7036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7037(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7037_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7037_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7037_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7037_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7038
#define MACROLOP_PRIVATE_EVAL_REC_7037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7038(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7038_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7038_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7038_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7038_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7039
#define MACROLOP_PRIVATE_EVAL_REC_7038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7039(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7039_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7039_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7039_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7039_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7040
#define MACROLOP_PRIVATE_EVAL_REC_7039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7040(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7040_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7040_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7040_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7040_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7041
#define MACROLOP_PRIVATE_EVAL_REC_7040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7041(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7041_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7041_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7041_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7041_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7042
#define MACROLOP_PRIVATE_EVAL_REC_7041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7042(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7042_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7042_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7042_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7042_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7043
#define MACROLOP_PRIVATE_EVAL_REC_7042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7043(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7043_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7043_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7043_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7043_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7044
#define MACROLOP_PRIVATE_EVAL_REC_7043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7044(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7044_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7044_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7044_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7044_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7045
#define MACROLOP_PRIVATE_EVAL_REC_7044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7045(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7045_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7045_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7045_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7045_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7046
#define MACROLOP_PRIVATE_EVAL_REC_7045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7046(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7046_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7046_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7046_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7046_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7047
#define MACROLOP_PRIVATE_EVAL_REC_7046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7047(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7047_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7047_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7047_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7047_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7048
#define MACROLOP_PRIVATE_EVAL_REC_7047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7048(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7048_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7048_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7048_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7048_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7049
#define MACROLOP_PRIVATE_EVAL_REC_7048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7049(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7049_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7049_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7049_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7049_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7050
#define MACROLOP_PRIVATE_EVAL_REC_7049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7050(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7050_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7050_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7050_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7050_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7051
#define MACROLOP_PRIVATE_EVAL_REC_7050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7051(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7051_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7051_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7051_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7051_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7052
#define MACROLOP_PRIVATE_EVAL_REC_7051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7052(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7052_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7052_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7052_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7052_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7053
#define MACROLOP_PRIVATE_EVAL_REC_7052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7053(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7053_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7053_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7053_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7053_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7054
#define MACROLOP_PRIVATE_EVAL_REC_7053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7054(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7054_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7054_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7054_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7054_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7055
#define MACROLOP_PRIVATE_EVAL_REC_7054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7055(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7055_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7055_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7055_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7055_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7056
#define MACROLOP_PRIVATE_EVAL_REC_7055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7056(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7056_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7056_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7056_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7056_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7057
#define MACROLOP_PRIVATE_EVAL_REC_7056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7057(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7057_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7057_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7057_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7057_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7058
#define MACROLOP_PRIVATE_EVAL_REC_7057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7058(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7058_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7058_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7058_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7058_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7059
#define MACROLOP_PRIVATE_EVAL_REC_7058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7059(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7059_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7059_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7059_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7059_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7060
#define MACROLOP_PRIVATE_EVAL_REC_7059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7060(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7060_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7060_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7060_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7060_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7061
#define MACROLOP_PRIVATE_EVAL_REC_7060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7061(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7061_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7061_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7061_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7061_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7062
#define MACROLOP_PRIVATE_EVAL_REC_7061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7062(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7062_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7062_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7062_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7062_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7063
#define MACROLOP_PRIVATE_EVAL_REC_7062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7063(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7063_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7063_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7063_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7063_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7064
#define MACROLOP_PRIVATE_EVAL_REC_7063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7064(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7064_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7064_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7064_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7064_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7065
#define MACROLOP_PRIVATE_EVAL_REC_7064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7065(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7065_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7065_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7065_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7065_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7066
#define MACROLOP_PRIVATE_EVAL_REC_7065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7066(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7066_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7066_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7066_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7066_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7067
#define MACROLOP_PRIVATE_EVAL_REC_7066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7067(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7067_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7067_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7067_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7067_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7068
#define MACROLOP_PRIVATE_EVAL_REC_7067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7068(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7068_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7068_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7068_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7068_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7069
#define MACROLOP_PRIVATE_EVAL_REC_7068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7069(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7069_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7069_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7069_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7069_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7070
#define MACROLOP_PRIVATE_EVAL_REC_7069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7070(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7070_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7070_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7070_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7070_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7071
#define MACROLOP_PRIVATE_EVAL_REC_7070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7071(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7071_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7071_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7071_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7071_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7072
#define MACROLOP_PRIVATE_EVAL_REC_7071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7072(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7072_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7072_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7072_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7072_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7073
#define MACROLOP_PRIVATE_EVAL_REC_7072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7073(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7073_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7073_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7073_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7073_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7074
#define MACROLOP_PRIVATE_EVAL_REC_7073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7074(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7074_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7074_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7074_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7074_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7075
#define MACROLOP_PRIVATE_EVAL_REC_7074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7075(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7075_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7075_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7075_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7075_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7076
#define MACROLOP_PRIVATE_EVAL_REC_7075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7076(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7076_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7076_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7076_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7076_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7077
#define MACROLOP_PRIVATE_EVAL_REC_7076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7077(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7077_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7077_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7077_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7077_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7078
#define MACROLOP_PRIVATE_EVAL_REC_7077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7078(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7078_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7078_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7078_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7078_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7079
#define MACROLOP_PRIVATE_EVAL_REC_7078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7079(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7079_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7079_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7079_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7079_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7080
#define MACROLOP_PRIVATE_EVAL_REC_7079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7080(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7080_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7080_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7080_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7080_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7081
#define MACROLOP_PRIVATE_EVAL_REC_7080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7081(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7081_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7081_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7081_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7081_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7082
#define MACROLOP_PRIVATE_EVAL_REC_7081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7082(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7082_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7082_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7082_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7082_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7083
#define MACROLOP_PRIVATE_EVAL_REC_7082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7083(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7083_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7083_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7083_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7083_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7084
#define MACROLOP_PRIVATE_EVAL_REC_7083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7084(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7084_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7084_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7084_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7084_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7085
#define MACROLOP_PRIVATE_EVAL_REC_7084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7085(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7085_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7085_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7085_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7085_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7086
#define MACROLOP_PRIVATE_EVAL_REC_7085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7086(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7086_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7086_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7086_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7086_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7087
#define MACROLOP_PRIVATE_EVAL_REC_7086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7087(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7087_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7087_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7087_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7087_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7088
#define MACROLOP_PRIVATE_EVAL_REC_7087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7088(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7088_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7088_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7088_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7088_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7089
#define MACROLOP_PRIVATE_EVAL_REC_7088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7089(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7089_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7089_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7089_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7089_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7090
#define MACROLOP_PRIVATE_EVAL_REC_7089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7090(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7090_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7090_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7090_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7090_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7091
#define MACROLOP_PRIVATE_EVAL_REC_7090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7091(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7091_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7091_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7091_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7091_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7092
#define MACROLOP_PRIVATE_EVAL_REC_7091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7092(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7092_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7092_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7092_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7092_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7093
#define MACROLOP_PRIVATE_EVAL_REC_7092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7093(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7093_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7093_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7093_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7093_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7094
#define MACROLOP_PRIVATE_EVAL_REC_7093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7094(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7094_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7094_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7094_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7094_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7095
#define MACROLOP_PRIVATE_EVAL_REC_7094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7095(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7095_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7095_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7095_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7095_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7096
#define MACROLOP_PRIVATE_EVAL_REC_7095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7096(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7096_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7096_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7096_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7096_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7097
#define MACROLOP_PRIVATE_EVAL_REC_7096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7097(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7097_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7097_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7097_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7097_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7098
#define MACROLOP_PRIVATE_EVAL_REC_7097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7098(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7098_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7098_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7098_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7098_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7099
#define MACROLOP_PRIVATE_EVAL_REC_7098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7099(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7099_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7099_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7099_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7099_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7100
#define MACROLOP_PRIVATE_EVAL_REC_7099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7100(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7100_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7100_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7100_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7100_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7101
#define MACROLOP_PRIVATE_EVAL_REC_7100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7101(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7101_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7101_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7101_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7101_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7102
#define MACROLOP_PRIVATE_EVAL_REC_7101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7102(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7102_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7102_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7102_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7102_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7103
#define MACROLOP_PRIVATE_EVAL_REC_7102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7103(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7103_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7103_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7103_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7103_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7104
#define MACROLOP_PRIVATE_EVAL_REC_7103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7104(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7104_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7104_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7104_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7104_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7105
#define MACROLOP_PRIVATE_EVAL_REC_7104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7105(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7105_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7105_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7105_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7105_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7106
#define MACROLOP_PRIVATE_EVAL_REC_7105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7106(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7106_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7106_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7106_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7106_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7107
#define MACROLOP_PRIVATE_EVAL_REC_7106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7107(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7107_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7107_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7107_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7107_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7108
#define MACROLOP_PRIVATE_EVAL_REC_7107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7108(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7108_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7108_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7108_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7108_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7109
#define MACROLOP_PRIVATE_EVAL_REC_7108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7109(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7109_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7109_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7109_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7109_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7110
#define MACROLOP_PRIVATE_EVAL_REC_7109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7110(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7110_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7110_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7110_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7110_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7111
#define MACROLOP_PRIVATE_EVAL_REC_7110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7111(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7111_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7111_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7111_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7111_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7112
#define MACROLOP_PRIVATE_EVAL_REC_7111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7112(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7112_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7112_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7112_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7112_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7113
#define MACROLOP_PRIVATE_EVAL_REC_7112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7113(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7113_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7113_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7113_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7113_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7114
#define MACROLOP_PRIVATE_EVAL_REC_7113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7114(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7114_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7114_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7114_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7114_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7115
#define MACROLOP_PRIVATE_EVAL_REC_7114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7115(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7115_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7115_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7115_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7115_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7116
#define MACROLOP_PRIVATE_EVAL_REC_7115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7116(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7116_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7116_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7116_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7116_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7117
#define MACROLOP_PRIVATE_EVAL_REC_7116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7117(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7117_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7117_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7117_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7117_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7118
#define MACROLOP_PRIVATE_EVAL_REC_7117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7118(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7118_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7118_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7118_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7118_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7119
#define MACROLOP_PRIVATE_EVAL_REC_7118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7119(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7119_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7119_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7119_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7119_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7120
#define MACROLOP_PRIVATE_EVAL_REC_7119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7120(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7120_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7120_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7120_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7120_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7121
#define MACROLOP_PRIVATE_EVAL_REC_7120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7121(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7121_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7121_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7121_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7121_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7122
#define MACROLOP_PRIVATE_EVAL_REC_7121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7122(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7122_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7122_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7122_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7122_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7123
#define MACROLOP_PRIVATE_EVAL_REC_7122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7123(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7123_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7123_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7123_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7123_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7124
#define MACROLOP_PRIVATE_EVAL_REC_7123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7124(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7124_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7124_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7124_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7124_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7125
#define MACROLOP_PRIVATE_EVAL_REC_7124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7125(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7125_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7125_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7125_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7125_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7126
#define MACROLOP_PRIVATE_EVAL_REC_7125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7126(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7126_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7126_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7126_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7126_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7127
#define MACROLOP_PRIVATE_EVAL_REC_7126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7127(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7127_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7127_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7127_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7127_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7128
#define MACROLOP_PRIVATE_EVAL_REC_7127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7128(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7128_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7128_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7128_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7128_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7129
#define MACROLOP_PRIVATE_EVAL_REC_7128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7129(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7129_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7129_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7129_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7129_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7130
#define MACROLOP_PRIVATE_EVAL_REC_7129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7130(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7130_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7130_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7130_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7130_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7131
#define MACROLOP_PRIVATE_EVAL_REC_7130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7131(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7131_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7131_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7131_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7131_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7132
#define MACROLOP_PRIVATE_EVAL_REC_7131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7132(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7132_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7132_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7132_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7132_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7133
#define MACROLOP_PRIVATE_EVAL_REC_7132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7133(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7133_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7133_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7133_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7133_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7134
#define MACROLOP_PRIVATE_EVAL_REC_7133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7134(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7134_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7134_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7134_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7134_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7135
#define MACROLOP_PRIVATE_EVAL_REC_7134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7135(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7135_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7135_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7135_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7135_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7136
#define MACROLOP_PRIVATE_EVAL_REC_7135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7136(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7136_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7136_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7136_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7136_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7137
#define MACROLOP_PRIVATE_EVAL_REC_7136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7137(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7137_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7137_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7137_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7137_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7138
#define MACROLOP_PRIVATE_EVAL_REC_7137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7138(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7138_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7138_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7138_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7138_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7139
#define MACROLOP_PRIVATE_EVAL_REC_7138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7139(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7139_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7139_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7139_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7139_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7140
#define MACROLOP_PRIVATE_EVAL_REC_7139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7140(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7140_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7140_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7140_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7140_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7141
#define MACROLOP_PRIVATE_EVAL_REC_7140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7141(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7141_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7141_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7141_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7141_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7142
#define MACROLOP_PRIVATE_EVAL_REC_7141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7142(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7142_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7142_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7142_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7142_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7143
#define MACROLOP_PRIVATE_EVAL_REC_7142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7143(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7143_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7143_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7143_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7143_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7144
#define MACROLOP_PRIVATE_EVAL_REC_7143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7144(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7144_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7144_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7144_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7144_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7145
#define MACROLOP_PRIVATE_EVAL_REC_7144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7145(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7145_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7145_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7145_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7145_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7146
#define MACROLOP_PRIVATE_EVAL_REC_7145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7146(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7146_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7146_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7146_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7146_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7147
#define MACROLOP_PRIVATE_EVAL_REC_7146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7147(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7147_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7147_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7147_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7147_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7148
#define MACROLOP_PRIVATE_EVAL_REC_7147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7148(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7148_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7148_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7148_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7148_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7149
#define MACROLOP_PRIVATE_EVAL_REC_7148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7149(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7149_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7149_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7149_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7149_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7150
#define MACROLOP_PRIVATE_EVAL_REC_7149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7150(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7150_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7150_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7150_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7150_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7151
#define MACROLOP_PRIVATE_EVAL_REC_7150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7151(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7151_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7151_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7151_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7151_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7152
#define MACROLOP_PRIVATE_EVAL_REC_7151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7152(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7152_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7152_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7152_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7152_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7153
#define MACROLOP_PRIVATE_EVAL_REC_7152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7153(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7153_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7153_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7153_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7153_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7154
#define MACROLOP_PRIVATE_EVAL_REC_7153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7154(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7154_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7154_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7154_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7154_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7155
#define MACROLOP_PRIVATE_EVAL_REC_7154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7155(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7155_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7155_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7155_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7155_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7156
#define MACROLOP_PRIVATE_EVAL_REC_7155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7156(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7156_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7156_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7156_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7156_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7157
#define MACROLOP_PRIVATE_EVAL_REC_7156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7157(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7157_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7157_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7157_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7157_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7158
#define MACROLOP_PRIVATE_EVAL_REC_7157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7158(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7158_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7158_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7158_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7158_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7159
#define MACROLOP_PRIVATE_EVAL_REC_7158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7159(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7159_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7159_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7159_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7159_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7160
#define MACROLOP_PRIVATE_EVAL_REC_7159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7160(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7160_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7160_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7160_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7160_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7161
#define MACROLOP_PRIVATE_EVAL_REC_7160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7161(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7161_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7161_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7161_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7161_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7162
#define MACROLOP_PRIVATE_EVAL_REC_7161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7162(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7162_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7162_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7162_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7162_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7163
#define MACROLOP_PRIVATE_EVAL_REC_7162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7163(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7163_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7163_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7163_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7163_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7164
#define MACROLOP_PRIVATE_EVAL_REC_7163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7164(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7164_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7164_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7164_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7164_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7165
#define MACROLOP_PRIVATE_EVAL_REC_7164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7165(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7165_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7165_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7165_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7165_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7166
#define MACROLOP_PRIVATE_EVAL_REC_7165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7166(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7166_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7166_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7166_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7166_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7167
#define MACROLOP_PRIVATE_EVAL_REC_7166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_7167(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_7167_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_7167_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_7167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_7167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_7167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_7167_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_7167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_7167_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_7167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_7167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_7168
#define MACROLOP_PRIVATE_EVAL_REC_7167_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_6144_TO_7167_H
