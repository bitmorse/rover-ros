/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/viki/Desktop/Octanis1-ROS/catkin_ws/src/image_common/polled_camera/srv/GetPolledImage.srv
 *
 */


#ifndef POLLED_CAMERA_MESSAGE_GETPOLLEDIMAGEREQUEST_H
#define POLLED_CAMERA_MESSAGE_GETPOLLEDIMAGEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/RegionOfInterest.h>

namespace polled_camera
{
template <class ContainerAllocator>
struct GetPolledImageRequest_
{
  typedef GetPolledImageRequest_<ContainerAllocator> Type;

  GetPolledImageRequest_()
    : response_namespace()
    , timeout()
    , binning_x(0)
    , binning_y(0)
    , roi()  {
    }
  GetPolledImageRequest_(const ContainerAllocator& _alloc)
    : response_namespace(_alloc)
    , timeout()
    , binning_x(0)
    , binning_y(0)
    , roi(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _response_namespace_type;
  _response_namespace_type response_namespace;

   typedef ros::Duration _timeout_type;
  _timeout_type timeout;

   typedef uint32_t _binning_x_type;
  _binning_x_type binning_x;

   typedef uint32_t _binning_y_type;
  _binning_y_type binning_y;

   typedef  ::sensor_msgs::RegionOfInterest_<ContainerAllocator>  _roi_type;
  _roi_type roi;




  typedef boost::shared_ptr< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPolledImageRequest_

typedef ::polled_camera::GetPolledImageRequest_<std::allocator<void> > GetPolledImageRequest;

typedef boost::shared_ptr< ::polled_camera::GetPolledImageRequest > GetPolledImageRequestPtr;
typedef boost::shared_ptr< ::polled_camera::GetPolledImageRequest const> GetPolledImageRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::polled_camera::GetPolledImageRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace polled_camera

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c77ed43e530fd48e9e7a2a93845e154c";
  }

  static const char* value(const ::polled_camera::GetPolledImageRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc77ed43e530fd48eULL;
  static const uint64_t static_value2 = 0x9e7a2a93845e154cULL;
};

template<class ContainerAllocator>
struct DataType< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "polled_camera/GetPolledImageRequest";
  }

  static const char* value(const ::polled_camera::GetPolledImageRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string response_namespace\n\
\n\
\n\
\n\
\n\
duration timeout\n\
\n\
\n\
uint32 binning_x\n\
uint32 binning_y\n\
\n\
\n\
sensor_msgs/RegionOfInterest roi\n\
\n\
================================================================================\n\
MSG: sensor_msgs/RegionOfInterest\n\
# This message is used to specify a region of interest within an image.\n\
#\n\
# When used to specify the ROI setting of the camera when the image was\n\
# taken, the height and width fields should either match the height and\n\
# width fields for the associated image; or height = width = 0\n\
# indicates that the full resolution image was captured.\n\
\n\
uint32 x_offset  # Leftmost pixel of the ROI\n\
                 # (0 if the ROI includes the left edge of the image)\n\
uint32 y_offset  # Topmost pixel of the ROI\n\
                 # (0 if the ROI includes the top edge of the image)\n\
uint32 height    # Height of ROI\n\
uint32 width     # Width of ROI\n\
\n\
# True if a distinct rectified ROI should be calculated from the \"raw\"\n\
# ROI in this message. Typically this should be False if the full image\n\
# is captured (ROI not used), and True if a subwindow is captured (ROI\n\
# used).\n\
bool do_rectify\n\
";
  }

  static const char* value(const ::polled_camera::GetPolledImageRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.response_namespace);
      stream.next(m.timeout);
      stream.next(m.binning_x);
      stream.next(m.binning_y);
      stream.next(m.roi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetPolledImageRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::polled_camera::GetPolledImageRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::polled_camera::GetPolledImageRequest_<ContainerAllocator>& v)
  {
    s << indent << "response_namespace: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.response_namespace);
    s << indent << "timeout: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.timeout);
    s << indent << "binning_x: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.binning_x);
    s << indent << "binning_y: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.binning_y);
    s << indent << "roi: ";
    s << std::endl;
    Printer< ::sensor_msgs::RegionOfInterest_<ContainerAllocator> >::stream(s, indent + "  ", v.roi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // POLLED_CAMERA_MESSAGE_GETPOLLEDIMAGEREQUEST_H
