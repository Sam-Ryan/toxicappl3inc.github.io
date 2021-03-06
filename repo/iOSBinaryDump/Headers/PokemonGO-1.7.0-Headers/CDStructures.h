//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Activity {
    CDUnknownFunctionPointerType *_vptr$MessageLite;
    struct InternalMetadataWithArena _internal_metadata_;
    _Bool _is_default_instance_;
    long long start_time_ms_;
    int unknown_;
    int walking_;
    int running_;
    int stationary_;
    int automotive_;
    int tilting_;
    int cycling_;
    int status_;
    int _cached_size_;
};

struct ArenaStringPtr {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *ptr_;
};

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CMVideoSampling {
    void *cvTextureCache;
    void *cvTextureCacheTexture;
    void *cvImageBuffer;
};

struct ChannelGroupI;

struct ChannelPool;

struct CompassHeading {
    struct CompassHeadingData _field1;
};

struct CompassHeadingData {
    double _field1;
    double _field2;
};

struct CreateToolbarResult {
    id _field1;
    id _field2;
};

struct DSPResampler;

struct Event<const nia::hardware::Activity &> {
    struct mutex _field1;
    _Bool _field2;
    struct __thread_id _field3;
    struct condition_variable _field4;
    struct list<std::__1::function<void (const nia::hardware::Activity &)>, std::__1::allocator<std::__1::function<void (const nia::hardware::Activity &)>>> _field5;
    struct __list_const_iterator<std::__1::function<void (const nia::hardware::Activity &)>, void *> {
        struct __list_node_base<std::__1::function<void (const nia::hardware::Activity &)>, void *> *_field1;
    } _field6;
};

struct Event<const nia::hardware::GpsSatellite &> {
    struct mutex _field1;
    _Bool _field2;
    struct __thread_id _field3;
    struct condition_variable _field4;
    struct list<std::__1::function<void (const nia::hardware::GpsSatellite &)>, std::__1::allocator<std::__1::function<void (const nia::hardware::GpsSatellite &)>>> _field5;
    struct __list_const_iterator<std::__1::function<void (const nia::hardware::GpsSatellite &)>, void *> {
        struct __list_node_base<std::__1::function<void (const nia::hardware::GpsSatellite &)>, void *> *_field1;
    } _field6;
};

struct Event<const nia::hardware::LocationUpdate &> {
    struct mutex _field1;
    _Bool _field2;
    struct __thread_id _field3;
    struct condition_variable _field4;
    struct list<std::__1::function<void (const nia::hardware::LocationUpdate &)>, std::__1::allocator<std::__1::function<void (const nia::hardware::LocationUpdate &)>>> _field5;
    struct __list_const_iterator<std::__1::function<void (const nia::hardware::LocationUpdate &)>, void *> {
        struct __list_node_base<std::__1::function<void (const nia::hardware::LocationUpdate &)>, void *> *_field1;
    } _field6;
};

struct Event<const nia::hardware::SensorUpdate &> {
    struct mutex _field1;
    _Bool _field2;
    struct __thread_id _field3;
    struct condition_variable _field4;
    struct list<std::__1::function<void (const nia::hardware::SensorUpdate &)>, std::__1::allocator<std::__1::function<void (const nia::hardware::SensorUpdate &)>>> _field5;
    struct __list_const_iterator<std::__1::function<void (const nia::hardware::SensorUpdate &)>, void *> {
        struct __list_node_base<std::__1::function<void (const nia::hardware::SensorUpdate &)>, void *> *_field1;
    } _field6;
};

struct FMOD_OS_CRITICALSECTION;

struct FMOD_OS_LIBRARY;

struct FMOD_OS_SEMAPHORE;

struct FMOD_OUTPUT_DESCRIPTION_EX {
    char *_field1;
    unsigned int _field2;
    int _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    struct LinkedListNode *_field14;
    struct LinkedListNode *_field15;
    void *_field16;
    int _field17;
    int _field18;
    struct FMOD_OS_LIBRARY *_field19;
    unsigned int _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
    CDUnknownFunctionPointerType _field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownFunctionPointerType _field27;
    CDUnknownFunctionPointerType _field28;
    CDUnknownFunctionPointerType _field29;
    CDUnknownFunctionPointerType _field30;
    CDUnknownFunctionPointerType _field31;
    CDUnknownFunctionPointerType _field32;
    CDUnknownFunctionPointerType _field33;
    CDUnknownFunctionPointerType _field34;
    CDUnknownFunctionPointerType _field35;
    CDUnknownFunctionPointerType _field36;
    CDUnknownFunctionPointerType _field37;
    CDUnknownFunctionPointerType _field38;
    CDUnknownFunctionPointerType _field39;
    CDUnknownFunctionPointerType _field40;
    CDUnknownFunctionPointerType _field41;
};

struct FMOD_RECORDING_INFO {
    struct LinkedListNode *_field1;
    struct LinkedListNode *_field2;
    void *_field3;
    int _field4;
    int _field5;
    struct {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned char _field4[8];
    } _field6;
    _Bool _field7;
    int _field8;
    _Bool _field9;
    int _field10;
    unsigned int _field11;
    unsigned int _field12;
    struct SoundI *_field13;
    int _field14;
    int _field15;
    struct DSPResampler *_field16;
    float *_field17;
    unsigned int _field18;
    void *_field19;
};

struct Global;

struct InternalMetadataWithArena {
    void *ptr_;
};

struct IosActivityProvider {
    CDUnknownFunctionPointerType *_field1;
    struct Event<const nia::hardware::Activity &> _field2;
    id _field3;
};

struct IosBillingDelegate;

struct IosSensorProvider {
    CDUnknownFunctionPointerType *_field1;
    struct shared_ptr<nia::hardware::location::LocationProvider> _field2;
    struct Event<const nia::hardware::SensorUpdate &> _field3;
    id _field4;
};

struct LinkedListNode;

struct Location {
    struct LocationData _field1;
};

struct LocationData {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    int _field6;
    int _field7;
};

struct LocationParameters {
    _Bool run_in_background;
    double desired_location_accuracy_m;
    int gps_update_time_ms;
    int net_update_time_ms;
    double min_update_distance_m;
};

struct LocationProvider {
    CDUnknownFunctionPointerType *_field1;
    struct recursive_mutex _field2;
    struct mutex _field3;
    struct mutex _field4;
    struct Location _field5;
    struct CompassHeading _field6;
    struct Event<const nia::hardware::LocationUpdate &> _field7;
    struct Event<const nia::hardware::GpsSatellite &> _field8;
    struct Event<const nia::hardware::LocationUpdate &> _field9;
};

struct LocationUpdate {
    CDUnknownFunctionPointerType *_vptr$MessageLite;
    struct InternalMetadataWithArena _internal_metadata_;
    _Bool _is_default_instance_;
    struct ArenaStringPtr name_;
    long long timestamp_ms_;
    float altitude_;
    float latitude_;
    float longitude_;
    float device_speed_;
    float device_course_;
    float horizontal_accuracy_;
    float vertical_accuracy_;
    int provider_status_;
    long long floor_;
    int location_type_;
    int _cached_size_;
};

struct OpaqueAudioComponentInstance;

struct OutputCoreAudio {
    CDUnknownFunctionPointerType *_field1;
    struct LinkedListNode *_field2;
    struct LinkedListNode *_field3;
    void *_field4;
    unsigned int _field5;
    struct SystemI *_field6;
    struct Global *_field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    _Bool _field10;
    struct ChannelPool *_field11;
    _Bool _field12;
    _Bool _field13;
    struct SystemI *_field14;
    int _field15;
    struct ChannelGroupI *_field16;
    int _field17;
    _Bool _field18;
    int _field19;
    int _field20;
    struct FMOD_OS_CRITICALSECTION *_field21;
    struct FMOD_RECORDING_INFO _field22;
    struct FMOD_RECORDING_INFO *_field23;
    struct FMOD_OUTPUT_DESCRIPTION_EX _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    struct OpaqueAudioComponentInstance *_field30;
    _Bool _field31;
    struct Thread _field32;
    char *_field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    _Bool _field39;
    struct OpaqueAudioComponentInstance *_field40;
    char *_field41;
    char *_field42;
    struct AudioBufferList _field43;
    int _field44;
    int _field45;
    int _field46;
    unsigned int _field47;
    _Bool _field48;
};

struct PLCrashHostInfoVersion {
    unsigned long long major;
    unsigned long long minor;
    unsigned long long revision;
};

struct PLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct RenderSurfaceBase;

struct RenderingSurfaceParams {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
};

struct SensorUpdate {
    CDUnknownFunctionPointerType *_vptr$MessageLite;
    struct InternalMetadataWithArena _internal_metadata_;
    _Bool _is_default_instance_;
    long long timestamp_;
    double acceleration_x_;
    double acceleration_y_;
    double acceleration_z_;
    double magnetic_field_x_;
    double magnetic_field_y_;
    double magnetic_field_z_;
    double attitude_pitch_;
    double attitude_yaw_;
    double attitude_roll_;
    double rotation_rate_x_;
    double rotation_rate_y_;
    int magnetic_field_accuracy_;
    int status_;
    double rotation_rate_z_;
    double gravity_x_;
    double gravity_y_;
    double gravity_z_;
    int _cached_size_;
};

struct SoundI;

struct SystemI;

struct Thread {
    CDUnknownFunctionPointerType *_field1;
    _Bool _field2;
    char _field3[256];
    void *_field4;
    _Bool _field5;
    void *_field6;
    void *_field7;
    struct FMOD_OS_SEMAPHORE *_field8;
    struct FMOD_OS_SEMAPHORE *_field9;
    CDUnknownFunctionPointerType _field10;
    int _field11;
};

struct UIImage {
    Class _field1;
};

struct UnityDisplaySurfaceBase {
    struct RenderSurfaceBase *_field1;
    struct RenderSurfaceBase *_field2;
    struct RenderSurfaceBase *_field3;
    struct RenderSurfaceBase *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
};

struct UnityDisplaySurfaceGLES {
    struct RenderSurfaceBase *_field1;
    struct RenderSurfaceBase *_field2;
    struct RenderSurfaceBase *_field3;
    struct RenderSurfaceBase *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
    id _field18;
    id _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    struct RenderSurfaceBase *_field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
};

struct UnityDisplaySurfaceMTL {
    struct RenderSurfaceBase *_field1;
    struct RenderSurfaceBase *_field2;
    struct RenderSurfaceBase *_field3;
    struct RenderSurfaceBase *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
    id _field18;
    id _field19;
    id _field20;
    id _field21;
    id _field22;
    id _field23;
    id _field24;
    id _field25;
    id _field26;
    unsigned int _field27;
    unsigned int _field28;
};

struct UnityFrameStats {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    int _field10;
    int _field11;
    unsigned long long _field12;
    int _field13;
    int _field14;
    int _field15;
    unsigned long long _field16;
    int _field17;
    int _field18;
    int _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned long long _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Signal__MachException *_field5;
};

struct _Plcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Plcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct __darwin_sigaltstack {
    void *ss_sp;
    unsigned long long ss_size;
    int ss_flags;
};

struct __list_node_base<std::__1::function<void (const nia::hardware::Activity &)>, void *> {
    struct __list_node_base<std::__1::function<void (const nia::hardware::Activity &)>, void *> *_field1;
    struct __list_node_base<std::__1::function<void (const nia::hardware::Activity &)>, void *> *_field2;
};

struct __list_node_base<std::__1::function<void (const nia::hardware::GpsSatellite &)>, void *> {
    struct __list_node_base<std::__1::function<void (const nia::hardware::GpsSatellite &)>, void *> *_field1;
    struct __list_node_base<std::__1::function<void (const nia::hardware::GpsSatellite &)>, void *> *_field2;
};

struct __list_node_base<std::__1::function<void (const nia::hardware::LocationUpdate &)>, void *> {
    struct __list_node_base<std::__1::function<void (const nia::hardware::LocationUpdate &)>, void *> *_field1;
    struct __list_node_base<std::__1::function<void (const nia::hardware::LocationUpdate &)>, void *> *_field2;
};

struct __list_node_base<std::__1::function<void (const nia::hardware::SensorUpdate &)>, void *> {
    struct __list_node_base<std::__1::function<void (const nia::hardware::SensorUpdate &)>, void *> *_field1;
    struct __list_node_base<std::__1::function<void (const nia::hardware::SensorUpdate &)>, void *> *_field2;
};

struct __shared_weak_count;

struct __thread_id {
    struct _opaque_pthread_t *_field1;
};

struct _opaque_pthread_cond_t {
    long long _field1;
    char _field2[40];
};

struct _opaque_pthread_mutex_t {
    long long _field1;
    char _field2[56];
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct condition_variable {
    struct _opaque_pthread_cond_t _field1;
};

struct cr_found_class_t {
    char *_field1;
    unsigned int _field2;
};

struct in_addr {
    unsigned int _field1;
};

struct list<std::__1::function<void (const nia::hardware::Activity &)>, std::__1::allocator<std::__1::function<void (const nia::hardware::Activity &)>>> {
    struct __list_node_base<std::__1::function<void (const nia::hardware::Activity &)>, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::function<void (const nia::hardware::Activity &)>, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<std::__1::function<void (const nia::hardware::GpsSatellite &)>, std::__1::allocator<std::__1::function<void (const nia::hardware::GpsSatellite &)>>> {
    struct __list_node_base<std::__1::function<void (const nia::hardware::GpsSatellite &)>, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::function<void (const nia::hardware::GpsSatellite &)>, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<std::__1::function<void (const nia::hardware::LocationUpdate &)>, std::__1::allocator<std::__1::function<void (const nia::hardware::LocationUpdate &)>>> {
    struct __list_node_base<std::__1::function<void (const nia::hardware::LocationUpdate &)>, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::function<void (const nia::hardware::LocationUpdate &)>, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<std::__1::function<void (const nia::hardware::SensorUpdate &)>, std::__1::allocator<std::__1::function<void (const nia::hardware::SensorUpdate &)>>> {
    struct __list_node_base<std::__1::function<void (const nia::hardware::SensorUpdate &)>, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::function<void (const nia::hardware::SensorUpdate &)>, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct mutex {
    struct _opaque_pthread_mutex_t _field1;
};

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t _field7;
    struct _opaque_pthread_cond_t _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct plcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[14];
    unsigned int ports[14];
    int behaviors[14];
    int flavors[14];
};

struct re_guts;

struct recursive_mutex {
    struct _opaque_pthread_mutex_t _field1;
};

struct shared_ptr<nia::game::iap::ios::IosBillingDelegate> {
    struct IosBillingDelegate *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<nia::hardware::location::LocationProvider> {
    struct LocationProvider *_field1;
    struct __shared_weak_count *_field2;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    unsigned short _field2;
} CDStruct_6a59ab51;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    char *_field2;
    long long _field3;
    long long _field4;
    long long _field5;
    _Bool _field6;
    _Bool _field7;
} CDStruct_4c437055;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

// Template types
typedef struct shared_ptr<nia::game::iap::ios::IosBillingDelegate> {
    struct IosBillingDelegate *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_ec83ff60;

