#ifndef STPLUGIN_GLOBAL_H
#define STPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(STPLUGIN_LIBRARY)
#  define STPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define STPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif


#define HAOKE_ST_ALLOCATION_STR "001"
#define HAOKE_ST_CHECK_STR "002"
#define HAOKE_ST_OTHERIN_STR "003"
#define HAOKE_ST_OTHEROUT_STR "004"
#define HAOKE_ST_ALLOCATION_QUERY_STR "101"
#define HAOKE_ST_CHECK_QUERY_STR "201"
#define HAOKE_ST_OTHERIN_QUERY_STR "301"
#define HAOKE_ST_OTHEROUT_QUERY_STR "401"
#define HAOKE_ST_STOCK_QUERY_STR "501"
#define HAOKE_ST_INV_ACCOUNT_QUERY_STR "502"
#define HAOKE_ST_JOURNAL_ACCOUNT_QUERY_STR "503"
#define HAOKE_ST_SYSTEM_STR "100"
#endif // STPLUGIN_GLOBAL_H
