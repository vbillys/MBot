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
 * Auto-generated by genmsg_cpp from file /home/lixiao/Desktop/MBot/src/multirobot_localization/srv/Occupancy2D.srv
 *
 */


#ifndef MULTIROBOT_LOCALIZATION_MESSAGE_OCCUPANCY2DRESPONSE_H
#define MULTIROBOT_LOCALIZATION_MESSAGE_OCCUPANCY2DRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multirobot_localization
{
template <class ContainerAllocator>
struct Occupancy2DResponse_
{
  typedef Occupancy2DResponse_<ContainerAllocator> Type;

  Occupancy2DResponse_()
    : prob(0.0)  {
    }
  Occupancy2DResponse_(const ContainerAllocator& _alloc)
    : prob(0.0)  {
    }



   typedef float _prob_type;
  _prob_type prob;




  typedef boost::shared_ptr< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct Occupancy2DResponse_

typedef ::multirobot_localization::Occupancy2DResponse_<std::allocator<void> > Occupancy2DResponse;

typedef boost::shared_ptr< ::multirobot_localization::Occupancy2DResponse > Occupancy2DResponsePtr;
typedef boost::shared_ptr< ::multirobot_localization::Occupancy2DResponse const> Occupancy2DResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multirobot_localization

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/lixiao/ros_catkin_ws/install_isolated/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/lixiao/ros_catkin_ws/install_isolated/share/geometry_msgs/cmake/../msg'], 'multirobot_localization': ['/home/lixiao/Desktop/MBot/src/multirobot_localization/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "24ab2b55331fe2bcc5280c7c23f2c675";
  }

  static const char* value(const ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x24ab2b55331fe2bcULL;
  static const uint64_t static_value2 = 0xc5280c7c23f2c675ULL;
};

template<class ContainerAllocator>
struct DataType< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multirobot_localization/Occupancy2DResponse";
  }

  static const char* value(const ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 prob\n\
\n\
";
  }

  static const char* value(const ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prob);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Occupancy2DResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multirobot_localization::Occupancy2DResponse_<ContainerAllocator>& v)
  {
    s << indent << "prob: ";
    Printer<float>::stream(s, indent + "  ", v.prob);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTIROBOT_LOCALIZATION_MESSAGE_OCCUPANCY2DRESPONSE_H
