
#ifndef __ACEWIN64WARNINGS_VERSION_H__
#define __ACEWIN64WARNINGS_VERSION_H__

#define ACEWIN64WARNINGS_MAJOR 1
#define ACEWIN64WARNINGS_MINOR 0
#define ACEWIN64WARNINGS_PATCH 1


#if defined _MSC_VER
#   ifdef _DEBUG
        const char ACEWIN64WARNINGS_DebugFlag[] = "DEBUG";
#   else
        const char ACEWIN64WARNINGS_DebugFlag[] = "RELEASE";
#   endif
#else
#   ifdef DEBUG
        const char ACEWIN64WARNINGS_DebugFlag[] = "DEBUG";
#   else
        const char ACEWIN64WARNINGS_DebugFlag[] = "RELEASE";
#   endif
#endif


#endif // __ACEWIN64WARNINGS_VERSION_H__
