// Generated by gencpp from file your_package/subtractResponse.msg
// DO NOT EDIT!


#ifndef YOUR_PACKAGE_MESSAGE_SUBTRACTRESPONSE_H
#define YOUR_PACKAGE_MESSAGE_SUBTRACTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace your_package
{
template <class ContainerAllocator>
struct subtractResponse_
{
  typedef subtractResponse_<ContainerAllocator> Type;

  subtractResponse_()
    : Sum(0)  {
    }
  subtractResponse_(const ContainerAllocator& _alloc)
    : Sum(0)  {
  (void)_alloc;
    }



   typedef int32_t _Sum_type;
  _Sum_type Sum;





  typedef boost::shared_ptr< ::your_package::subtractResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::your_package::subtractResponse_<ContainerAllocator> const> ConstPtr;

}; // struct subtractResponse_

typedef ::your_package::subtractResponse_<std::allocator<void> > subtractResponse;

typedef boost::shared_ptr< ::your_package::subtractResponse > subtractResponsePtr;
typedef boost::shared_ptr< ::your_package::subtractResponse const> subtractResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::your_package::subtractResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::your_package::subtractResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::your_package::subtractResponse_<ContainerAllocator1> & lhs, const ::your_package::subtractResponse_<ContainerAllocator2> & rhs)
{
  return lhs.Sum == rhs.Sum;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::your_package::subtractResponse_<ContainerAllocator1> & lhs, const ::your_package::subtractResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace your_package

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::your_package::subtractResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::your_package::subtractResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::your_package::subtractResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::your_package::subtractResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::your_package::subtractResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::your_package::subtractResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::your_package::subtractResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ef6f1670857b361bd27a952eb8d50b9";
  }

  static const char* value(const ::your_package::subtractResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ef6f1670857b361ULL;
  static const uint64_t static_value2 = 0xbd27a952eb8d50b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::your_package::subtractResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "your_package/subtractResponse";
  }

  static const char* value(const ::your_package::subtractResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::your_package::subtractResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 Sum\n"
"\n"
;
  }

  static const char* value(const ::your_package::subtractResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::your_package::subtractResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Sum);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct subtractResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::your_package::subtractResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::your_package::subtractResponse_<ContainerAllocator>& v)
  {
    s << indent << "Sum: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Sum);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOUR_PACKAGE_MESSAGE_SUBTRACTRESPONSE_H
