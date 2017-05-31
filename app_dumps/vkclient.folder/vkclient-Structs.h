/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	int load;
	CGSize space;
	BOOL doc;
} XXStruct_UOIMaD;

typedef struct CGContext* CGContextRef;

typedef struct opaqueCMSampleBuffer opaqueCMSampleBuffer;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	unsigned long _field1;
	id* _field2;
	unsigned long* _field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct CGAffineTransform {
	float a;
	float b;
	float c;
	float d;
	float tx;
	float ty;
} CGAffineTransform;

typedef struct {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
} XXStruct_Xx1ZfA;

typedef struct {
	int deleteSection;
	int reloadSection;
	int insertSection;
	int deleteRow;
	int reloadRow;
	int insertRow;
} XXStruct_X102JB;

typedef struct {
	CGSize size;
	unsigned columns;
	unsigned rows;
	float horizontalSpacing;
	float verticalSpacing;
	float emojiSize;
} XXStruct_0R9wYB;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} XXStruct_pwHToB;

typedef struct {
	int count;
	BOOL can_post;
} XXStruct_86WktA;

typedef struct {
	int count;
	BOOL user_likes;
	BOOL can_like;
} XXStruct_uR0cxB;

typedef struct {
	int type;
	int size;
	BOOL outline;
} XXStruct_m5P4pB;

typedef struct CGPath* CGPathRef;

typedef struct {
	CGSize minSize;
	CGSize maxSize;
} XXStruct_JC2WWA;

typedef struct _opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
	long __sig;
	BOOL __opaque[24];
} opaque_pthread_cond_t;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGImage* CGImageRef;

typedef struct opaqueCMFormatDescription opaqueCMFormatDescription;

typedef struct __CTFrame* CTFrameRef;

typedef struct {
	CGSize _field1;
	id _field2;
	UIEdgeInsets _field3;
	UIEdgeInsets _field4;
	float _field5;
	id _field6;
	CGPoint _field7;
	float _field8;
	float _field9;
	float _field10;
	float _field11;
	float _field12;
	id _field13;
	id _field14;
	id _field15;
	BOOL _field16;
} XXStruct_9zIMjA;

typedef struct CGGradient* CGGradientRef;

typedef struct {
	XXStruct_pwHToB start;
	XXStruct_pwHToB duration;
} XXStruct_yD8eWC;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct in_addr {
	unsigned _field1;
} in_addr;

typedef struct sockaddr_in {
	unsigned char _field1;
	unsigned char _field2;
	unsigned short _field3;
	in_addr _field4;
	BOOL _field5[8];
} sockaddr_in;

template<>
struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > {
	unsigned* __first_;
};

template<>
struct vector<unsigned int, std::__1::allocator<unsigned int> > {
	unsigned* __begin_;
	unsigned* __end_;
	__compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > __end_cap_;
};

typedef struct sqlite3 sqlite3;

typedef struct {
	int resizingMode;
	int horizontalPosition;
	int verticalPosition;
} XXStruct_rO8FTC;

typedef struct {
	CLLocationCoordinate2D center;
	CLLocationCoordinate2D span;
} XXStruct_zkbX1B;

typedef struct {
	id _field1;
	id _field2;
	id _field3;
} XXStruct_ZWQ3qD;

typedef struct CCCubeCell {
	unsigned hitCount;
	double redAcc;
	double greenAcc;
	double blueAcc;
} CCCubeCell;

typedef struct {
	BOOL playerItemPrepared;
	BOOL shouldPlay;
	BOOL readyToPlay;
	BOOL startedPlaying;
	BOOL stalled;
	BOOL seeking;
} XXStruct_1vgcKB;

typedef struct __CTLine* CTLineRef;

typedef struct SwitchItemEditRows {
	int title;
	int description;
	int adminsOnly;
	int comments;
	int total;
} SwitchItemEditRows;

typedef struct {
	CGRect _field1;
	CGRect _field2;
	CGRect _field3;
} XXStruct_SIyEID;

typedef struct MarketSorting_t {
	unsigned sort;
	BOOL isDescending;
} MarketSorting_t;

typedef struct OpaqueAudioQueue OpaqueAudioQueue;

typedef struct AudioStreamPacketDescription AudioStreamPacketDescription;
typedef struct AudioQueueBuffer {
	unsigned _field1;
	void* _field2;
	unsigned _field3;
	void* _field4;
	unsigned _field5;
	AudioStreamPacketDescription* _field6;
	unsigned _field7;
} AudioQueueBuffer;

typedef struct VKOpusEnc* VKOpusEncRef;

struct AudioStreamPacketDescription AudioStreamPacketDescription;

typedef struct VKOpusDec* VKOpusDecRef;

typedef struct __CVOpenGLESTextureCache* CVOpenGLESTextureCacheRef;

typedef struct {
	id _field1;
	unsigned short _field2;
} XXStruct_c19r_A;


