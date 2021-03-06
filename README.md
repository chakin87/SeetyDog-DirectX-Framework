# SeetyDog-DirectX-Framework
## In Init Progress

## Logging

    SeetyDog DX uses spdlog, which is my personal favorite logging system for C++.
    sppdlog uses a C# style output and allows for an amazing amount of customization.
    As of right now I am using 3 Types of logging and they are listed below

### Logging Examples

```cpp
// SeetyDog logger macros - These macros log to the console and are used for logging anything from the framework side.
#define SD_SEETY_TRACE(...)    ::SeetyDog::Log::GetSeetyDogLog()->trace(__VA_ARGS__)
#define SD_SEETY_INFO(...)     ::SeetyDog::Log::GetSeetyDogLog()->info(__VA_ARGS__)
#define SD_SEETY_WARN(...)     ::SeetyDog::Log::GetSeetyDogLog()->warn(__VA_ARGS__)
#define SD_SEETY_ERROR(...)    ::SeetyDog::Log::GetSeetyDogLog()->error(__VA_ARGS__)
#define SD_SEETY_FATAL(...)    ::SeetyDog::Log::GetSeetyDogLog()->fatal(__VA_ARGS__)

// SeetyDog+File logger macros - Same as above but they also log to file.
#define SD_SEETYF_TRACE(...) {   ::SeetyDog::Log::GetSeetyDogFileLog()->trace(__VA_ARGS__);  SD_SEETY_TRACE(__VA_ARGS__);}
#define SD_SEETYF_INFO(...)  {   ::SeetyDog::Log::GetSeetyDogFileLog()->info(__VA_ARGS__) ;  SD_SEETY_INFO(__VA_ARGS__);}
#define SD_SEETYF_WARN(...)  {   ::SeetyDog::Log::GetSeetyDogFileLog()->warn(__VA_ARGS__) ;  SD_SEETY_WARN(__VA_ARGS__);}
#define SD_SEETYF_ERROR(...) {   ::SeetyDog::Log::GetSeetyDogFileLog()->error(__VA_ARGS__);  SD_SEETY_ERROR(__VA_ARGS__);}
#define SD_SEETYF_FATAL(...) {   ::SeetyDog::Log::GetSeetyDogFileLog()->fatal(__VA_ARGS__);  SD_SEETY_FATAL(__VA_ARGS__);}

// ClientDog logger macros - These macros log to the console and are used for logging anything from the client side.
#define SD_TRACE(...)	      ::SeetyDog::Log::GetClientDogLog()->trace(__VA_ARGS__)
#define SD_INFO(...)	      ::SeetyDog::Log::GetClientDogLog()->info(__VA_ARGS__)
#define SD_WARN(...)	      ::SeetyDog::Log::GetClientDogLog()->warn(__VA_ARGS__)
#define SD_ERROR(...)	      ::SeetyDog::Log::GetClientDogLog()->error(__VA_ARGS__)
#define SD_FATAL(...)	      ::SeetyDog::Log::GetClientDogLog()->fatal(__VA_ARGS__) 
```

## ...