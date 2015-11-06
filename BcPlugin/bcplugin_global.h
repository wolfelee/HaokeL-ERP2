#ifndef BCPLUGIN_GLOBAL_H
#define BCPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BCPLUGIN_LIBRARY)
#  define BCPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BCPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#define HAOKE_BC_RDINIMEI_STR "001"
#define HAOKE_BC_RDOUTIMEI_STR "002"
#define HAOKE_BC_TRANSIMEI_STR "003"
#define HAOKE_BC_RDINIMEIQUERY_STR "101"
#define HAOKE_BC_RDINLISTQUERY_STR "102"
#define HAOKE_BC_RDREINIMEIQUERY_STR "103"
#define HAOKE_BC_RDOUTIMEIQUERY_STR "201"
#define HAOKE_BC_RDOUTLISTQUERY_STR "202"
#define HAOKE_BC_RDREOUTIMEIQUERY_STR "203"
#define HAOKE_BC_STOCKIMEIQUERY_STR "301"
#define HAOKE_BC_IMEIQUERY_STR "302"
#define HAOKE_BC_TRANSIMEIQUERY_STR "401"
#endif // BCPLUGIN_GLOBAL_H
