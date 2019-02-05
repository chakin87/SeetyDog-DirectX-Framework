#pragma once
#include "sdpch.h"
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/basic_file_sink.h"
namespace SeetyDog {


	class SEETYDOG_API Log {

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetSeetyDogLog() { return s_SeetyDogLog; }
		inline static std::shared_ptr<spdlog::logger>& GetClientDogLog() { return s_ClientDogLog; }
		inline static std::shared_ptr<spdlog::logger>& GetSeetyDogFileLog() { return s_SeetyDogFileLog; }

	private:
		static std::shared_ptr<spdlog::logger> s_SeetyDogLog;
		static std::shared_ptr<spdlog::logger> s_ClientDogLog;
		
		// Create basic file logger (not rotated)
		static std::shared_ptr<spdlog::logger> s_SeetyDogFileLog;
		//my_logger->info("Some log message");

	};

}
	// SeetyDog logger macros
#define SD_SEETY_TRACE(...)    ::SeetyDog::Log::GetSeetyDogLog()->trace(__VA_ARGS__)
#define SD_SEETY_INFO(...)     ::SeetyDog::Log::GetSeetyDogLog()->info(__VA_ARGS__)
#define SD_SEETY_WARN(...)     ::SeetyDog::Log::GetSeetyDogLog()->warn(__VA_ARGS__)
#define SD_SEETY_ERROR(...)    ::SeetyDog::Log::GetSeetyDogLog()->error(__VA_ARGS__)
#define SD_SEETY_FATAL(...)    ::SeetyDog::Log::GetSeetyDogLog()->fatal(__VA_ARGS__)

// SeetyDog+File logger macros
#define SD_SEETYF_TRACE(...) {   ::SeetyDog::Log::GetSeetyDogFileLog()->trace(__VA_ARGS__);  SD_SEETY_TRACE(__VA_ARGS__);}
#define SD_SEETYF_INFO(...)  {   ::SeetyDog::Log::GetSeetyDogFileLog()->info(__VA_ARGS__) ;  SD_SEETY_INFO(__VA_ARGS__);}
#define SD_SEETYF_WARN(...)  {   ::SeetyDog::Log::GetSeetyDogFileLog()->warn(__VA_ARGS__) ;  SD_SEETY_WARN(__VA_ARGS__);}
#define SD_SEETYF_ERROR(...) {   ::SeetyDog::Log::GetSeetyDogFileLog()->error(__VA_ARGS__);  SD_SEETY_ERROR(__VA_ARGS__);}
#define SD_SEETYF_FATAL(...) {   ::SeetyDog::Log::GetSeetyDogFileLog()->fatal(__VA_ARGS__);  SD_SEETY_FATAL(__VA_ARGS__);}

// ClientDog logger macros
#define SD_TRACE(...)	      ::SeetyDog::Log::GetClientDogLog()->trace(__VA_ARGS__)
#define SD_INFO(...)	      ::SeetyDog::Log::GetClientDogLog()->info(__VA_ARGS__)
#define SD_WARN(...)	      ::SeetyDog::Log::GetClientDogLog()->warn(__VA_ARGS__)
#define SD_ERROR(...)	      ::SeetyDog::Log::GetClientDogLog()->error(__VA_ARGS__)
#define SD_FATAL(...)	      ::SeetyDog::Log::GetClientDogLog()->fatal(__VA_ARGS__) 




