// Generated by gencpp from file astra_camera/SetIRExposure.msg
// DO NOT EDIT!


#ifndef ASTRA_CAMERA_MESSAGE_SETIREXPOSURE_H
#define ASTRA_CAMERA_MESSAGE_SETIREXPOSURE_H

#include <ros/service_traits.h>


#include <astra_camera/SetIRExposureRequest.h>
#include <astra_camera/SetIRExposureResponse.h>


namespace astra_camera
{

struct SetIRExposure
{

typedef SetIRExposureRequest Request;
typedef SetIRExposureResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetIRExposure
} // namespace astra_camera


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::astra_camera::SetIRExposure > {
  static const char* value()
  {
    return "0535ed1a1204bb999d0e7bea8f6c3c81";
  }

  static const char* value(const ::astra_camera::SetIRExposure&) { return value(); }
};

template<>
struct DataType< ::astra_camera::SetIRExposure > {
  static const char* value()
  {
    return "astra_camera/SetIRExposure";
  }

  static const char* value(const ::astra_camera::SetIRExposure&) { return value(); }
};


// service_traits::MD5Sum< ::astra_camera::SetIRExposureRequest> should match 
// service_traits::MD5Sum< ::astra_camera::SetIRExposure > 
template<>
struct MD5Sum< ::astra_camera::SetIRExposureRequest>
{
  static const char* value()
  {
    return MD5Sum< ::astra_camera::SetIRExposure >::value();
  }
  static const char* value(const ::astra_camera::SetIRExposureRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::astra_camera::SetIRExposureRequest> should match 
// service_traits::DataType< ::astra_camera::SetIRExposure > 
template<>
struct DataType< ::astra_camera::SetIRExposureRequest>
{
  static const char* value()
  {
    return DataType< ::astra_camera::SetIRExposure >::value();
  }
  static const char* value(const ::astra_camera::SetIRExposureRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::astra_camera::SetIRExposureResponse> should match 
// service_traits::MD5Sum< ::astra_camera::SetIRExposure > 
template<>
struct MD5Sum< ::astra_camera::SetIRExposureResponse>
{
  static const char* value()
  {
    return MD5Sum< ::astra_camera::SetIRExposure >::value();
  }
  static const char* value(const ::astra_camera::SetIRExposureResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::astra_camera::SetIRExposureResponse> should match 
// service_traits::DataType< ::astra_camera::SetIRExposure > 
template<>
struct DataType< ::astra_camera::SetIRExposureResponse>
{
  static const char* value()
  {
    return DataType< ::astra_camera::SetIRExposure >::value();
  }
  static const char* value(const ::astra_camera::SetIRExposureResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ASTRA_CAMERA_MESSAGE_SETIREXPOSURE_H
