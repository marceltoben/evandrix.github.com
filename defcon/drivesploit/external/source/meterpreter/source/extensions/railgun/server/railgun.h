#ifndef _METERPRETER_SOURCE_EXTENSION_BOILER_BOILER_H
#define _METERPRETER_SOURCE_EXTENSION_BOILER_BOILER_H

#include "../../common/common.h"

#define TLV_TYPE_EXTENSION_RAILGUN	0

#define TLV_TYPE_RAILGUN_SIZE_OUT	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_UINT,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 1)

#define TLV_TYPE_RAILGUN_STACKBLOB	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_RAW,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 2)

#define TLV_TYPE_RAILGUN_BUFFERBLOB_IN	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_RAW,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 3)

#define TLV_TYPE_RAILGUN_BUFFERBLOB_INOUT	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_RAW,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 4)

#define TLV_TYPE_RAILGUN_BACK_BUFFERBLOB_OUT	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_RAW,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 5)

#define TLV_TYPE_RAILGUN_BACK_BUFFERBLOB_INOUT	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_RAW,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 6)

#define TLV_TYPE_RAILGUN_BACK_RET	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_UINT,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 7)
#define TLV_TYPE_RAILGUN_BACK_ERR	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_UINT,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 8)


#define TLV_TYPE_RAILGUN_DLLNAME	\
		MAKE_CUSTOM_TLV(							\
		TLV_META_TYPE_STRING,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 9)

#define TLV_TYPE_RAILGUN_FUNCNAME	\
		MAKE_CUSTOM_TLV(							\
				TLV_META_TYPE_STRING,				\
				TLV_TYPE_EXTENSION_RAILGUN,		\
				TLV_EXTENSIONS + 10)

#define TLV_TYPE_RAILGUN_MULTI_GROUP         \
		MAKE_CUSTOM_TLV(                 \
				TLV_META_TYPE_GROUP,       \
				TLV_TYPE_EXTENSION_RAILGUN, \
				TLV_EXTENSIONS + 11)
#endif