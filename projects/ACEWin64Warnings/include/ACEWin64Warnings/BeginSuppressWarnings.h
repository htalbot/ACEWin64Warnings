// ACE has been for a long time...
// VC now generates lots of warnings in x64.
// We disable these warnings...

// Note that C4251 is disabled too.
// ACE extensively uses templates.
// It is known that it's hazardous to export templates from a DLL. We assume that all
// generated modules in a system using ACE will be built with the correct
// version of compiler/os/architecture.
// Thus, we can disable 4251 warning because templates used will be the same for
// all modules.

#ifdef _WIN64
    #pragma warning(push)

    #pragma warning(disable: 4100)
    #pragma warning(disable: 4231)
    #pragma warning(disable: 4251)
    #pragma warning(disable: 4244)
    #pragma warning(disable: 4267)
    #pragma warning(disable: 4275)
    #pragma warning(disable: 4505)
    #pragma warning(disable: 4512)
    #pragma warning(disable: 4800)
    #pragma warning(disable: 4996)
#endif
