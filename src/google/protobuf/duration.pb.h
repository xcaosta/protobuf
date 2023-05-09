// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/duration.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fduration_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fduration_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 3021000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4022003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fduration_2eproto PROTOBUF_EXPORT

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2fduration_2eproto {
  static const ::uint32_t offsets[];
};
PROTOBUF_EXPORT extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_google_2fprotobuf_2fduration_2eproto;
namespace google {
namespace protobuf {
class Duration;
struct DurationDefaultTypeInternal;
PROTOBUF_EXPORT extern DurationDefaultTypeInternal _Duration_default_instance_;
template <>
PROTOBUF_EXPORT ::google::protobuf::Duration* Arena::CreateMaybeMessage<::google::protobuf::Duration>(Arena*);
}  // namespace protobuf
}  // namespace google

namespace google {
namespace protobuf {

// ===================================================================


// -------------------------------------------------------------------

class PROTOBUF_EXPORT Duration final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Duration) */ {
 public:
  inline Duration() : Duration(nullptr) {}
  ~Duration() override;
  explicit PROTOBUF_CONSTEXPR Duration(::google::protobuf::internal::ConstantInitialized);

  Duration(const Duration& from);
  Duration(Duration&& from) noexcept
    : Duration() {
    *this = ::std::move(from);
  }

  inline Duration& operator=(const Duration& from) {
    CopyFrom(from);
    return *this;
  }
  inline Duration& operator=(Duration&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Duration& default_instance() {
    return *internal_default_instance();
  }
  static inline const Duration* internal_default_instance() {
    return reinterpret_cast<const Duration*>(
               &_Duration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Duration& a, Duration& b) {
    a.Swap(&b);
  }
  inline void Swap(Duration* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Duration* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Duration* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Duration>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Duration& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Duration& from) {
    Duration::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Duration* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "google.protobuf.Duration";
  }
  protected:
  explicit Duration(::google::protobuf::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSecondsFieldNumber = 1,
    kNanosFieldNumber = 2,
  };
  // int64 seconds = 1;
  void clear_seconds() ;
  ::int64_t seconds() const;
  void set_seconds(::int64_t value);

  private:
  ::int64_t _internal_seconds() const;
  void _internal_set_seconds(::int64_t value);

  public:
  // int32 nanos = 2;
  void clear_nanos() ;
  ::int32_t nanos() const;
  void set_nanos(::int32_t value);

  private:
  ::int32_t _internal_nanos() const;
  void _internal_set_nanos(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:google.protobuf.Duration)
 private:
  class _Internal;

  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::int64_t seconds_;
    ::int32_t nanos_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2fduration_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Duration

// int64 seconds = 1;
inline void Duration::clear_seconds() {
  _impl_.seconds_ = ::int64_t{0};
}
inline ::int64_t Duration::seconds() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Duration.seconds)
  return _internal_seconds();
}
inline void Duration::set_seconds(::int64_t value) {
  _internal_set_seconds(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Duration.seconds)
}
inline ::int64_t Duration::_internal_seconds() const {
  return _impl_.seconds_;
}
inline void Duration::_internal_set_seconds(::int64_t value) {
  ;
  _impl_.seconds_ = value;
}

// int32 nanos = 2;
inline void Duration::clear_nanos() {
  _impl_.nanos_ = 0;
}
inline ::int32_t Duration::nanos() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Duration.nanos)
  return _internal_nanos();
}
inline void Duration::set_nanos(::int32_t value) {
  _internal_set_nanos(value);
  // @@protoc_insertion_point(field_set:google.protobuf.Duration.nanos)
}
inline ::int32_t Duration::_internal_nanos() const {
  return _impl_.nanos_;
}
inline void Duration::_internal_set_nanos(::int32_t value) {
  ;
  _impl_.nanos_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf
}  // namespace google


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fduration_2eproto_2epb_2eh
