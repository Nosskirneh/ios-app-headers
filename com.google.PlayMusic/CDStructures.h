//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GCKPB_PBArray, GCKPB_PBGeneratedMessage, GPBMessage, NSData, NSOutputStream, NSString, TAGPBArray, TAGPBGeneratedMessage;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AEBufferStack;

struct AcquisitionParams {
    _Bool _field1;
    int _field2;
    float _field3;
    int _field4;
    float _field5;
    float _field6;
    int _field7;
};

struct AcquisitionScorer;

struct Array<float, -1, 1, 0, -1, 1> {
    struct DenseStorage<float, -1, -1, 1, 0> _field1;
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

struct AudioBytePacketTranslation {
    long long _field1;
    long long _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct AudioComponentDescription {
    unsigned int componentType;
    unsigned int componentSubType;
    unsigned int componentManufacturer;
    unsigned int componentFlags;
    unsigned int componentFlagsMask;
};

struct AudioConverterPrimeInfo {
    unsigned int leadingFrames;
    unsigned int trailingFrames;
};

struct AudioFramePacketTranslation {
    long long _field1;
    long long _field2;
    unsigned int _field3;
};

struct AudioModemDecoder {
    struct unique_ptr<audio_whispernet::WhispernetDecoder, std::__1::default_delete<audio_whispernet::WhispernetDecoder>> _field1;
    struct unique_ptr<audio_whispernet_dtmf::DtmfDecoder, std::__1::default_delete<audio_whispernet_dtmf::DtmfDecoder>> _field2;
    int _field3;
    int _field4;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription;

struct AudioTimeStamp {
    double mSampleTime;
    unsigned long long mHostTime;
    double mRateScalar;
    unsigned long long mWordClockTime;
    struct SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
};

struct ByteSymbolConverter {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct CGVector {
    double dx;
    double dy;
};

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct DashToHlsIndex {
    unsigned int _field1;
    struct DashToHlsSegment *_field2;
};

struct DashToHlsSegment;

struct DecisionPoint;

struct DecodeTokenParams {
    int _field1;
    _Bool _field2;
    float _field3;
    int _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    int _field9;
    int _field10;
};

struct DenseStorage<float, -1, -1, -1, 0> {
    float *_field1;
    long long _field2;
    long long _field3;
};

struct DenseStorage<float, -1, -1, 1, 0> {
    float *_field1;
    long long _field2;
};

struct DenseStorage<std::__1::complex<float>, -1, -1, -1, 1> {
    struct complex<float> *_field1;
    long long _field2;
    long long _field3;
};

struct DtmfDecoder {
    struct DtmfDecoderParams _field1;
    struct TokenSelectorParams _field2;
    struct ByteSymbolConverter _field3;
    int _field4;
    int _field5;
    int _field6;
    float _field7;
    float _field8;
    float _field9;
    int _field10;
    float _field11;
    int _field12;
    int _field13;
    struct ResampleAudio _field14;
    struct vector<audio_whispernet_dtmf::ToneStrengthFilter, std::__1::allocator<audio_whispernet_dtmf::ToneStrengthFilter>> _field15;
    struct vector<audio_whispernet::StreamBuffer<float>, std::__1::allocator<audio_whispernet::StreamBuffer<float>>> _field16;
    int _field17;
    _Bool _field18;
};

struct DtmfDecoderParams {
    struct DtmfEncoderParams _field1;
    float _field2;
    float _field3;
    struct ToneNormalizationParams _field4;
    int _field5;
    float _field6;
    float _field7;
    float _field8;
    int _field9;
    int _field10;
};

struct DtmfEncoderParams {
    float _field1;
    int _field2;
    float _field3;
    vector_f9ed6fc8 _field4;
    vector_f9ed6fc8 _field5;
    int _field6;
    struct vector<std::__1::vector<int, std::__1::allocator<int>>, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int>>>> _field7;
    int _field8;
    int _field9;
    _Bool _field10;
    float _field11;
};

struct ExpansionInfo {
    unsigned short _field1;
    id _field2;
    _Bool _field3;
    id _field4;
};

struct FIRFilter<std::__1::complex<float>, std::__1::complex<float>> {
    struct vector<std::__1::complex<float>, std::__1::allocator<std::__1::complex<float>>> _field1;
    struct vector<std::__1::complex<float>, std::__1::allocator<std::__1::complex<float>>> _field2;
};

struct GADNAdSize {
    struct CGSize size;
    unsigned long long flags;
};

struct GADOAdSize {
    struct CGSize size;
    unsigned long long flags;
};

struct GAIReachabilityApi {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct GAKPacketData {
    unsigned int mNumberPackets;
    struct AudioStreamPacketDescription *mPacketDescriptions;
    struct AudioBufferList *mBufferList;
};

struct GCKPB_PBExtensionDescription {
    char *_field1;
    int _field2;
    char *_field3;
    int _field4;
    union {
        _Bool _field1;
        unsigned int _field2;
        int _field3;
        float _field4;
        unsigned long long _field5;
        long long _field6;
        double _field7;
        int _field8;
        long long _field9;
        int _field10;
        long long _field11;
        unsigned int _field12;
        unsigned long long _field13;
        id _field14;
        id _field15;
        id _field16;
        id _field17;
        int _field18;
        id _field19;
        id _field20;
    } _field5;
    char *_field6;
    unsigned int _field7;
    char *_field8;
};

struct GCKPB_PBMessageEnumDescription {
    char *_field1;
};

struct GCKPB_PBMessageEnumValueDescription {
    char *_field1;
    int _field2;
};

struct GCKPB_PBMessageExtensionRangeDescription {
    unsigned int _field1;
    unsigned int _field2;
};

struct GCKPB_PBMessageFieldDescription {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    unsigned long long _field6;
    char *_field7;
    union {
        _Bool _field1;
        unsigned int _field2;
        int _field3;
        float _field4;
        unsigned long long _field5;
        long long _field6;
        double _field7;
        int _field8;
        long long _field9;
        int _field10;
        long long _field11;
        unsigned int _field12;
        unsigned long long _field13;
        id _field14;
        id _field15;
        id _field16;
        id _field17;
        int _field18;
        id _field19;
        id _field20;
    } _field8;
    CDUnion_28c59bcd _field9;
};

struct GFBArchivedFeedbackReportMetadata {
    unsigned int length;
    unsigned int version;
    long long timestamp;
};

struct GPBCodedInputStreamState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
    int lastTag;
    unsigned long long recursionDepth;
};

struct GPBExtensionDescription {
    CDUnion_88782d86 _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    CDUnknownFunctionPointerType _field5;
    int _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct GPBExtensionRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct GPBMessageFieldDescription {
    char *_field1;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
    } _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned char _field7;
};

struct GPBMessage_Storage {
    unsigned int _field1[0];
};

struct GPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct GPMCollectionViewSectionModule {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicContextV1Capability {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicContextV1ClientContext {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicDismissalV1Dismissal {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1ElementsAction {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1GetHomeRequest {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1GetHomeResponse {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1Message {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1MessageSlotResponse {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersCeDeviceCardDescriptor {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersCeDeviceModule {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersCeDeviceModuleList {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersFullBleedModule {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersHomeRecents {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersNowCardDescriptor {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersNumberedItemDescriptor {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersSquarePlayableCardDescriptor {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersTallPlayableCardDescriptor {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersTextButtonDescriptor {
    Class _field1;
};

struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersWidePlayableCardDescriptor {
    Class _field1;
};

struct GTLRServiceTicket {
    Class _field1;
};

struct GTLRUserDataControls_ClientManagedSettingState {
    Class _field1;
};

struct GULReachabilityApi {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct HistoryRing {
    struct DecisionPoint *_field1;
    int _field2;
    int _field3;
};

struct MDCActivityIndicatorMotionSpecIndeterminate {
    struct MDMMotionTiming _field1;
    struct MDMMotionTiming _field2;
    struct MDMMotionTiming _field3;
    struct MDMMotionTiming _field4;
};

struct MDCActivityIndicatorMotionSpecProgress {
    struct MDMMotionTiming _field1;
};

struct MDCActivityIndicatorMotionSpecTransitionToDeterminate {
    struct MDMMotionTiming _field1;
    struct MDMMotionTiming _field2;
};

struct MDCActivityIndicatorMotionSpecTransitionToIndeterminate {
    struct MDMMotionTiming _field1;
    struct MDMMotionTiming _field2;
};

struct MDMMotionCurve {
    unsigned long long _field1;
    double _field2[4];
};

struct MDMMotionRepetition {
    unsigned long long _field1;
    double _field2;
    _Bool _field3;
};

struct MDMMotionTiming {
    double _field1;
    double _field2;
    struct MDMMotionCurve _field3;
    struct MDMMotionRepetition _field4;
};

struct MP3FrameInfo {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct Matrix<float, -1, -1, 0, -1, -1> {
    struct DenseStorage<float, -1, -1, -1, 0> _field1;
};

struct Matrix<std::__1::complex<float>, -1, -1, 1, -1, -1> {
    struct DenseStorage<std::__1::complex<float>, -1, -1, -1, 1> _field1;
};

struct NSDictionary {
    Class _field1;
};

struct NewEndpointer {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    struct HistoryRing _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    int _field8;
    long long _field9;
    float _field10;
    unsigned int _field11;
    unsigned int _field12;
    long long _field13;
    struct map<google_audio_kit::EpStatus, long long, std::__1::less<google_audio_kit::EpStatus>, std::__1::allocator<std::__1::pair<const google_audio_kit::EpStatus, long long>>> _field14;
    id _field15;
    float _field16;
    float _field17;
};

struct PBInputBufferState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
};

struct PBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct PostprocessAcquisitionParams {
    int _field1;
    int _field2;
    float _field3;
};

struct ResampleAudio {
    void *_field1;
    float _field2;
    _Bool _field3;
    long long _field4;
    long long _field5;
};

struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
};

struct StreamBuffer<float> {
    vector_f9ed6fc8 _field1;
    int _field2;
};

struct SymbolWaveCoder {
    CDUnknownFunctionPointerType *_field1;
    struct SymbolWaveCoderParams _field2;
    int _field3;
    int _field4;
    int _field5;
    vector_f9ed6fc8 _field6;
    struct Matrix<float, -1, -1, 0, -1, -1> _field7;
    struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> _field8;
};

struct SymbolWaveCoderParams {
    vector_f9ed6fc8 _field1;
    float _field2;
    int _field3;
    float _field4;
    int _field5;
    int _field6;
    int _field7;
    _Bool _field8;
    float _field9;
};

struct TAGPBExtensionDescription {
    char *_field1;
    int _field2;
    char *_field3;
    int _field4;
    union {
        _Bool _field1;
        unsigned int _field2;
        int _field3;
        float _field4;
        unsigned long long _field5;
        long long _field6;
        double _field7;
        int _field8;
        long long _field9;
        int _field10;
        long long _field11;
        unsigned int _field12;
        unsigned long long _field13;
        id _field14;
        id _field15;
        id _field16;
        id _field17;
        int _field18;
        id _field19;
        id _field20;
    } _field5;
    char *_field6;
    unsigned int _field7;
    char *_field8;
};

struct TAGPBInputBufferState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
};

struct TAGPBMessageEnumDescription {
    char *_field1;
};

struct TAGPBMessageEnumValueDescription {
    char *_field1;
    int _field2;
};

struct TAGPBMessageExtensionRangeDescription {
    unsigned int _field1;
    unsigned int _field2;
};

struct TAGPBMessageFieldDescription {
    char *_field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    unsigned long long _field6;
    char *_field7;
    union {
        _Bool _field1;
        unsigned int _field2;
        int _field3;
        float _field4;
        unsigned long long _field5;
        long long _field6;
        double _field7;
        int _field8;
        long long _field9;
        int _field10;
        long long _field11;
        unsigned int _field12;
        unsigned long long _field13;
        id _field14;
        id _field15;
        id _field16;
        id _field17;
        int _field18;
        id _field19;
        id _field20;
    } _field8;
    CDUnion_28c59bcd _field9;
};

struct TAGPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct TokenSelectorParams {
    int _field1;
    int _field2;
    int _field3;
    _Bool _field4;
    int _field5;
    int _field6;
    int _field7;
};

struct TokenSymbolConverter;

struct ToneNormalizationParams {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct ToneStrengthFilter;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct WhispernetDecoder {
    struct unique_ptr<audio_whispernet::SymbolWaveCoder, std::__1::default_delete<audio_whispernet::SymbolWaveCoder>> _field1;
    struct WhispernetDecoderParams _field2;
    struct unique_ptr<audio_whispernet::TokenSymbolConverter, std::__1::default_delete<audio_whispernet::TokenSymbolConverter>> _field3;
    float _field4;
    vector_f9ed6fc8 _field5;
    vector_f9ed6fc8 _field6;
    struct Matrix<std::__1::complex<float>, -1, -1, 1, -1, -1> _field7;
    int _field8;
    int _field9;
    struct Array<float, -1, 1, 0, -1, 1> _field10;
    vector_f9ed6fc8 _field11;
    struct Matrix<std::__1::complex<float>, -1, -1, 1, -1, -1> _field12;
    struct Array<float, -1, 1, 0, -1, 1> _field13;
    struct StreamBuffer<float> _field14;
    struct complex<float> _field15;
    struct complex<float> _field16;
    struct ResampleAudio _field17[2];
    struct FIRFilter<std::__1::complex<float>, std::__1::complex<float>> _field18;
    struct StreamBuffer<float> _field19[2];
    struct unique_ptr<audio_whispernet::AcquisitionScorer, std::__1::default_delete<audio_whispernet::AcquisitionScorer>> _field20;
    struct StreamBuffer<float> _field21;
    struct map<int, Eigen::Array<float, -1, 1, 0, -1, 1>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, Eigen::Array<float, -1, 1, 0, -1, 1>>>> _field22;
    int _field23;
    int _field24;
    int _field25;
    int _field26;
    float _field27;
    float _field28;
    int _field29;
    _Bool _field30;
};

struct WhispernetDecoderParams {
    float _field1;
    _Bool _field2;
    struct AcquisitionParams _field3;
    struct PostprocessAcquisitionParams _field4;
    struct DecodeTokenParams _field5;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs;

struct complex<float> {
    float _field1;
    float _field2;
};

struct grpc_byte_buffer {
    void *_field1;
    int _field2;
    union grpc_byte_buffer_data _field3;
};

struct grpc_compressed_buffer {
    int _field1;
    struct grpc_slice_buffer _field2;
};

struct grpc_metadata {
    struct grpc_slice _field1;
    struct grpc_slice _field2;
    unsigned int _field3;
    struct {
        void *_field1[4];
    } _field4;
};

struct grpc_op {
    int op;
    unsigned int flags;
    void *reserved;
    union grpc_op_data data;
};

struct grpc_op_recv_close_on_server {
    int *cancelled;
};

struct grpc_op_recv_initial_metadata {
    CDStruct_183601bc *recv_initial_metadata;
};

struct grpc_op_recv_message {
    struct grpc_byte_buffer **recv_message;
};

struct grpc_op_recv_status_on_client {
    CDStruct_183601bc *trailing_metadata;
    int *status;
    struct grpc_slice *status_details;
    char **error_string;
};

struct grpc_op_send_initial_metadata {
    unsigned long long count;
    struct grpc_metadata *metadata;
    struct grpc_op_send_initial_metadata_maybe_compression_level maybe_compression_level;
};

struct grpc_op_send_initial_metadata_maybe_compression_level {
    unsigned char is_set;
    int level;
};

struct grpc_op_send_message {
    struct grpc_byte_buffer *send_message;
};

struct grpc_op_send_status_from_server {
    unsigned long long trailing_metadata_count;
    struct grpc_metadata *trailing_metadata;
    int status;
    struct grpc_slice *status_details;
};

struct grpc_slice {
    struct grpc_slice_refcount *refcount;
    union grpc_slice_data data;
};

struct grpc_slice_buffer {
    struct grpc_slice *_field1;
    struct grpc_slice *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    struct grpc_slice _field6[8];
};

struct grpc_slice_inlined {
    unsigned char length;
    unsigned char bytes[23];
};

struct grpc_slice_refcount;

struct grpc_slice_refcounted {
    char *bytes;
    unsigned long long length;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct map<google_audio_kit::EpStatus, long long, std::__1::less<google_audio_kit::EpStatus>, std::__1::allocator<std::__1::pair<const google_audio_kit::EpStatus, long long>>> {
    struct __tree<std::__1::__value_type<google_audio_kit::EpStatus, long long>, std::__1::__map_value_compare<google_audio_kit::EpStatus, std::__1::__value_type<google_audio_kit::EpStatus, long long>, std::__1::less<google_audio_kit::EpStatus>, true>, std::__1::allocator<std::__1::__value_type<google_audio_kit::EpStatus, long long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<google_audio_kit::EpStatus, long long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<google_audio_kit::EpStatus, std::__1::__value_type<google_audio_kit::EpStatus, long long>, std::__1::less<google_audio_kit::EpStatus>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<int, Eigen::Array<float, -1, 1, 0, -1, 1>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, Eigen::Array<float, -1, 1, 0, -1, 1>>>> {
    struct __tree<std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, std::__1::__map_value_compare<int, std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>>> {
        struct __tree_node<std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, Eigen::Array<float, -1, 1, 0, -1, 1>>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct sockaddr_un {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[104];
};

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

struct unique_ptr<audio_whispernet::AcquisitionScorer, std::__1::default_delete<audio_whispernet::AcquisitionScorer>> {
    struct __compressed_pair<audio_whispernet::AcquisitionScorer *, std::__1::default_delete<audio_whispernet::AcquisitionScorer>> {
        struct AcquisitionScorer *_field1;
    } _field1;
};

struct unique_ptr<audio_whispernet::SymbolWaveCoder, std::__1::default_delete<audio_whispernet::SymbolWaveCoder>> {
    struct __compressed_pair<audio_whispernet::SymbolWaveCoder *, std::__1::default_delete<audio_whispernet::SymbolWaveCoder>> {
        struct SymbolWaveCoder *_field1;
    } _field1;
};

struct unique_ptr<audio_whispernet::TokenSymbolConverter, std::__1::default_delete<audio_whispernet::TokenSymbolConverter>> {
    struct __compressed_pair<audio_whispernet::TokenSymbolConverter *, std::__1::default_delete<audio_whispernet::TokenSymbolConverter>> {
        struct TokenSymbolConverter *_field1;
    } _field1;
};

struct unique_ptr<audio_whispernet::WhispernetDecoder, std::__1::default_delete<audio_whispernet::WhispernetDecoder>> {
    struct __compressed_pair<audio_whispernet::WhispernetDecoder *, std::__1::default_delete<audio_whispernet::WhispernetDecoder>> {
        struct WhispernetDecoder *_field1;
    } _field1;
};

struct unique_ptr<audio_whispernet_dtmf::DtmfDecoder, std::__1::default_delete<audio_whispernet_dtmf::DtmfDecoder>> {
    struct __compressed_pair<audio_whispernet_dtmf::DtmfDecoder *, std::__1::default_delete<audio_whispernet_dtmf::DtmfDecoder>> {
        struct DtmfDecoder *_field1;
    } _field1;
};

struct vector<audio_whispernet::StreamBuffer<float>, std::__1::allocator<audio_whispernet::StreamBuffer<float>>> {
    struct StreamBuffer<float> *_field1;
    struct StreamBuffer<float> *_field2;
    struct __compressed_pair<audio_whispernet::StreamBuffer<float>*, std::__1::allocator<audio_whispernet::StreamBuffer<float>>> {
        struct StreamBuffer<float> *_field1;
    } _field3;
};

struct vector<audio_whispernet_dtmf::ToneStrengthFilter, std::__1::allocator<audio_whispernet_dtmf::ToneStrengthFilter>> {
    struct ToneStrengthFilter *_field1;
    struct ToneStrengthFilter *_field2;
    struct __compressed_pair<audio_whispernet_dtmf::ToneStrengthFilter *, std::__1::allocator<audio_whispernet_dtmf::ToneStrengthFilter>> {
        struct ToneStrengthFilter *_field1;
    } _field3;
};

struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>>;

struct vector<std::__1::complex<float>, std::__1::allocator<std::__1::complex<float>>> {
    struct complex<float> *_field1;
    struct complex<float> *_field2;
    struct __compressed_pair<std::__1::complex<float>*, std::__1::allocator<std::__1::complex<float>>> {
        struct complex<float> *_field1;
    } _field3;
};

struct vector<std::__1::vector<float, std::__1::allocator<float>>, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> {
    vector_f9ed6fc8 *_field1;
    vector_f9ed6fc8 *_field2;
    struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float>>*, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float>>>> {
        vector_f9ed6fc8 *_field1;
    } _field3;
};

struct vector<std::__1::vector<int, std::__1::allocator<int>>, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int>>>> {
    struct vector<int, std::__1::allocator<int>> *_field1;
    struct vector<int, std::__1::allocator<int>> *_field2;
    struct __compressed_pair<std::__1::vector<int, std::__1::allocator<int>>*, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int>>>> {
        struct vector<int, std::__1::allocator<int>> *_field1;
    } _field3;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    unsigned short _field2;
} CDStruct_6a59ab51;

typedef struct {
    id _field1;
    CDUnknownFunctionPointerType _field2;
} CDStruct_2e79dc9b;

typedef struct {
    id _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
} CDStruct_4b98f6ae;

typedef struct {
    _Bool _field1;
    unsigned char _field2;
    _Bool _field3;
    unsigned long long _field4;
} CDStruct_6a6a01a4;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long state;
    id *itemsPtr;
    unsigned long long *mutationsPtr;
    unsigned long long extra[5];
} CDStruct_58648341;

typedef struct {
    void *reserved[8];
} CDStruct_d7a492ad;

typedef struct {
    void *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
} CDStruct_9d607ac6;

typedef struct {
    void *buffer;
    int length;
    int tail;
    int head;
    int fillCount;
    _Bool atomic;
} CDStruct_c5d49230;

typedef struct {
    void *opaque1;
    long long opaque2;
} CDStruct_7d855afc;

typedef struct {
    double _field1;
    double _field2;
    double _field3[4];
} CDStruct_b1bacac9;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long majorVersion;
    long long minorVersion;
    long long patchVersion;
} CDStruct_f6aba300;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned long long count;
    unsigned long long capacity;
    struct grpc_metadata *metadata;
} CDStruct_6f820e53;

typedef struct {
    int _field1;
    id _field2;
    CDStruct_183601bc *_field3[1];
} CDStruct_67a0e191;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
        int _field7;
        int _field8;
        int _field9;
        int _field10;
        int _field11;
        int _field12;
        int _field13;
        int _field14;
    } _field10;
} CDStruct_d1583d57;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
} CDStruct_e3b9714e;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
} CDStruct_60d9add8;

// Template types
typedef struct vector<float, std::__1::allocator<float>> {
    float *_field1;
    float *_field2;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *_field1;
    } _field3;
} vector_f9ed6fc8;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *_field1;
    char *_field2;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *_field1;
    } _field3;
} vector_5b3bfa18;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float m00;
        float m01;
        float m02;
        float m03;
        float m10;
        float m11;
        float m12;
        float m13;
        float m20;
        float m21;
        float m22;
        float m23;
        float m30;
        float m31;
        float m32;
        float m33;
    } ;
    float m[16];
};

union grpc_byte_buffer_data {
    CDStruct_d7a492ad _field1;
    struct grpc_compressed_buffer _field2;
};

union grpc_op_data {
    CDStruct_d7a492ad reserved;
    struct grpc_op_send_initial_metadata send_initial_metadata;
    struct grpc_op_send_message send_message;
    struct grpc_op_send_status_from_server send_status_from_server;
    struct grpc_op_recv_initial_metadata recv_initial_metadata;
    struct grpc_op_recv_message recv_message;
    struct grpc_op_recv_status_on_client recv_status_on_client;
    struct grpc_op_recv_close_on_server recv_close_on_server;
};

union grpc_slice_data {
    struct grpc_slice_refcounted refcounted;
    struct grpc_slice_inlined inlined;
};

#pragma mark Typedef'd Unions

typedef union {
    _Bool valueBool;
    int valueInt32;
    long long valueInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    float valueFloat;
    double valueDouble;
    NSData *valueData;
    NSString *valueString;
    GPBMessage *valueMessage;
    int valueEnum;
} CDUnion_88782d86;

typedef union {
    char *_field1;
    CDUnknownFunctionPointerType _field2;
} CDUnion_28c59bcd;

// Ambiguous groups
typedef union {
    _Bool _field1;
    unsigned int _field2;
    int _field3;
    float _field4;
    unsigned long long _field5;
    long long _field6;
    double _field7;
    int _field8;
    long long _field9;
    int _field10;
    long long _field11;
    unsigned int _field12;
    unsigned long long _field13;
    id _field14;
    id _field15;
    id _field16;
    id _field17;
    int _field18;
    id _field19;
    id _field20;
} CDUnion_c05604a2;

typedef union {
    _Bool valueBool;
    unsigned int valueFixed32;
    int valueSFixed32;
    float valueFloat;
    unsigned long long valueFixed64;
    long long valueSFixed64;
    double valueDouble;
    int valueInt32;
    long long valueInt64;
    int valueSInt32;
    long long valueSInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    NSData *valueData;
    NSString *valueString;
    GCKPB_PBGeneratedMessage *valueMessage;
    GCKPB_PBGeneratedMessage *valueGroup;
    int valueEnum;
    GCKPB_PBArray *valueArray;
    id valueObject;
} CDUnion_53b4250e;

typedef union {
    _Bool valueBool;
    unsigned int valueFixed32;
    int valueSFixed32;
    float valueFloat;
    unsigned long long valueFixed64;
    long long valueSFixed64;
    double valueDouble;
    int valueInt32;
    long long valueInt64;
    int valueSInt32;
    long long valueSInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    NSData *valueData;
    NSString *valueString;
    TAGPBGeneratedMessage *valueMessage;
    TAGPBGeneratedMessage *valueGroup;
    int valueEnum;
    TAGPBArray *valueArray;
    id valueObject;
} CDUnion_3de46016;

