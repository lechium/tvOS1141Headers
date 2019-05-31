/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTLIOAccelDeviceShmem, MTLIOAccelDeviceShmemPool, MTLIOAccelPooledResource, MTLIOAccelResourcePool, MTLIOAccelBuffer, MTLIOAccelDevice<MTLDevice>, NSString, MTLResourceAllocationInfo, MTLIOAccelHeap, MTLIOAccelResource, MTLResourceList, NSObject<OS_dispatch_data>, <MTLTextureImplementation>, MTLRenderPassColorAttachmentDescriptorArrayInternal, <MTLBuffer>, <MTLFunction>, MTLStageInputOutputDescriptor, NSDictionary, MTLPipelineBufferDescriptorArrayInternal, <MTLPipelineLibrary>, MTLRenderPipelineColorAttachmentDescriptorArrayInternal, MTLVertexDescriptorInternal, MTLIOAccelDevice, MTLResourceListPool, MTLStencilDescriptorInternal;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	MTLIOAccelDeviceShmem* tqe_next;
	id tqe_prev;
} SCD_Struct_MT1;

typedef struct MTLIOAccelDeviceShmemPrivate {
	MTLIOAccelDeviceShmemPool* pool;
	SCD_Struct_MT1 entry;
	unsigned long long time_added;
} MTLIOAccelDeviceShmemPrivate;

typedef struct {
	id field1;
	/*function pointer*/void* field2;
	id field3;
	/*function pointer*/void* field4;
	id field5;
	/*function pointer*/void* field6;
	id field7;
	/*function pointer*/void* field8;
} SCD_Struct_MT3;

typedef struct {
	MTLIOAccelPooledResource* tqe_next;
	id tqe_prev;
} SCD_Struct_MT4;

typedef struct MTLIOAccelResourcePrivate {
	MTLIOAccelResourcePool* pool;
	SCD_Struct_MT4 entry;
	unsigned long long time_added;
	unsigned pool_generation;
} MTLIOAccelResourcePrivate;

typedef struct resourceQueue {
	MTLIOAccelPooledResource* tqh_first;
	id tqh_last;
} resourceQueue;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct MTLIOAccelResourcePoolPrivate {
	const esourceQueue queue;
	os_unfair_lock_s lock;
	int count;
} MTLIOAccelResourcePoolPrivate;

typedef struct {
	unsigned mutability : 2;
} SCD_Struct_MT9;

typedef struct {
	unsigned long long bits;
} SCD_Struct_MT10;

typedef struct MTLPipelineBufferDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT9 ;
	SCD_Struct_MT10) ;
} MTLPipelineBufferDescriptorPrivate;

typedef struct MTLArgumentDescriptorPrivate {
	unsigned long long dataType;
	unsigned long long index;
	unsigned long long arrayLength;
	unsigned long long access;
	unsigned long long textureType;
	unsigned long long constantBlockAlignment;
} MTLArgumentDescriptorPrivate;

typedef struct {
	unsigned maxColorAttachments;
	unsigned maxVertexAttributes;
	unsigned maxVertexBuffers;
	unsigned maxVertexTextures;
	unsigned maxVertexSamplers;
	unsigned maxVertexInlineDataSize;
	unsigned maxInterpolants;
	unsigned maxFragmentBuffers;
	unsigned maxFragmentTextures;
	unsigned maxFragmentSamplers;
	unsigned maxFragmentInlineDataSize;
	unsigned maxComputeBuffers;
	unsigned maxComputeTextures;
	unsigned maxComputeSamplers;
	unsigned maxComputeInlineDataSize;
	unsigned maxComputeLocalMemorySizes;
	unsigned maxTotalComputeThreadsPerThreadgroup;
	unsigned maxComputeThreadgroupMemory;
	float maxLineWidth;
	float maxPointSize;
	unsigned maxVisibilityQueryOffset;
	unsigned maxBufferLength;
	unsigned minConstantBufferAlignmentBytes;
	unsigned minBufferNoCopyAlignmentBytes;
	unsigned maxTextureWidth1D;
	unsigned maxTextureWidth2D;
	unsigned maxTextureHeight2D;
	unsigned maxTextureWidth3D;
	unsigned maxTextureHeight3D;
	unsigned maxTextureDepth3D;
	unsigned maxTextureDimensionCube;
	unsigned maxTextureLayers;
	unsigned linearTextureAlignmentBytes;
	unsigned iosurfaceTextureAlignmentBytes;
	unsigned iosurfaceReadOnlyTextureAlignmentBytes;
	unsigned deviceLinearTextureAlignmentBytes;
	unsigned deviceLinearReadOnlyTextureAlignmentBytes;
	unsigned maxFunctionConstantIndices;
	unsigned maxComputeThreadgroupMemoryAlignmentBytes;
	unsigned maxInterpolatedComponents;
	unsigned maxTessellationFactor;
	unsigned maxCustomSamplePositions;
	unsigned maxFramebufferStorageBits;
} SCD_Struct_MT13;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_MT14;

typedef struct {
	BOOL field1;
	unsigned long long field2;
	/*function pointer*/void* field3;
} SCD_Struct_MT15;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 55;
} SCD_Struct_MT16;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 60;
} SCD_Struct_MT17;

typedef struct {
	float field1;
	float field2;
} SCD_Struct_MT18;

typedef struct MTLTextureDescriptorPrivate {
	unsigned long long textureType;
	unsigned long long pixelFormat;
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
	unsigned long long mipmapLevelCount;
	unsigned long long sampleCount;
	unsigned long long arrayLength;
	BOOL zeroFill;
	unsigned long long rotation;
	BOOL framebufferOnly;
	BOOL isDrawable;
	unsigned long long swizzle;
	unsigned long long compressionMode;
	/*function pointer*/void* ;
	unsigned long long textureUsage;
	Q) usage;
	unsigned long long cpuCacheMode;
	unsigned long long storageMode;
	unsigned long long resourceOptions;
	unsigned long long resolvedUsage;
} MTLTextureDescriptorPrivate;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MT21;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	SCD_Struct_MT21 field1;
	SCD_Struct_MT21 field2;
} SCD_Struct_MT23;

typedef struct __IOAccelDevice* IOAccelDeviceRef;

typedef struct __IOAccelShared* IOAccelSharedRef;

typedef struct {
	MTLIOAccelDeviceShmemPool* segmentListShmemPool;
	MTLIOAccelDeviceShmemPool* kernelCommandShmemPool;
	id hwResourcePools;
	unsigned hwResourcePoolCount;
	id akResourceListPool;
	 MTLResourceListPool;
	id akPrivateResourceListPool;
	 MTLResourceListPool;
} SCD_Struct_MT26;

typedef struct MTLRangeAllocator {
	MTLRangeAllocatorElement elements;
	unsigned numElements;
	unsigned capacity;
	unsigned capacityIncrement;
	unsigned defaultAlignmentMask;
} MTLRangeAllocator;

typedef struct MTLIOAccelBufferHeap {
	64MTLIOAccelBuffer* buffers;
	64MTLRangeAllocator allocators;
	unsigned count;
} MTLIOAccelBufferHeap;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 24;
	unsigned field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_MT30;

typedef struct IOAccelResourceInfo {
	__IOSurface iosurface;
	unsigned resourceID;
	unsigned resourceSize;
	unsigned iosurfaceField;
} IOAccelResourceInfo;

typedef struct MTLIOAccelResource {
	/*function pointer*/void* vendor;
	unsigned long long reserved[4];
	IOAccelResourceInfo info;
	unsigned long long sharedAllocationUniqueId;
	unsigned long long cachedAllocationUniqueId;
	unsigned long long gpuAddress;
	MTLIOAccelDevice<MTLDevice>* device;
	NSString* label;
	unsigned long long globalTraceObjectID;
	unsigned long long labelTraceID;
	__IOAccelResource resourceRef;
	IOAccelClientSharedRO clientSharedRO;
	IOAccelClientSharedRW clientSharedRW;
	void virtualAddress;
	unsigned long long options;
	unsigned long long storageMode;
	unsigned long long cpuCacheMode;
	int responsibleProcess;
	unsigned long long purgeableState;
	BOOL purgeableAllowed;
	MTLResourceAllocationInfo* sharedAllocationInfo;
	MTLResourceAllocationInfo* cachedAllocationInfo;
	MTLIOAccelHeap* heap;
	MTLIOAccelResource* resource;
	unsigned offset;
	unsigned length;
	BOOL pinned;
} MTLIOAccelResource;

typedef struct __IOAccelResource* IOAccelResourceRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct resourceListQueue {
	MTLResourceList* tqh_first;
	id tqh_last;
} resourceListQueue;

typedef struct MTLResourceListPoolPrivate {
	const esourceListQueue queue;
	os_unfair_lock_s lock;
	int count;
} MTLResourceListPoolPrivate;

typedef struct __IOAccelCommandQueue* IOAccelCommandQueueRef;

typedef struct {
	unsigned minFilter : 2;
	unsigned magFilter : 2;
	unsigned mipFilter : 2;
	unsigned sAddressMode : 3;
	unsigned tAddressMode : 3;
	unsigned rAddressMode : 3;
	unsigned normalizedCoords : 1;
	unsigned lodAverage : 1;
	unsigned compareFunction : 3;
	unsigned supportArgumentBuffers : 1;
} SCD_Struct_MT39;

typedef struct MTLSamplerDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT39 ;
	I) miscHash;
	/*function pointer*/void* ;
	unsigned lodMinClampHash;
	f) lodMinClamp;
	/*function pointer*/void* ;
	unsigned lodMaxClampHash;
	f) lodMaxClamp;
	/*function pointer*/void* ;
	unsigned lodBiasHash;
	f) lodBias;
	unsigned long long maxAnisotropy;
	NSString* label;
} MTLSamplerDescriptorPrivate;

typedef struct {
	unsigned char field1[32];
} SCD_Struct_MT41;

typedef struct MTLFunctionData {
	unsigned long long bitCodeOffset;
	unsigned long long bitCodeFileSize;
	unsigned long long publicArgumentsOffset;
	unsigned long long privateArgumentsOffset;
	unsigned short airMajorVersion;
	unsigned short airMinorVersion;
	unsigned short languageMajorVersion;
	unsigned short languageMinorVersion;
	SCD_Struct_MT41 bitcodeHash;
	unsigned char bitcodeType;
	unsigned patchType : 2;
	unsigned controlPointCount : 6;
	NSObject<OS_dispatch_data>* functionInputs;
} MTLFunctionData;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_MT43;

typedef struct {
	double red;
	double green;
	double blue;
	double alpha;
} SCD_Struct_MT44;

typedef struct MTLRenderPassAttachmentDescriptorPrivate {
	<MTLTextureImplementation>* texture;
	unsigned long long level;
	unsigned long long slice;
	unsigned long long depthPlane;
	unsigned long long loadAction;
	unsigned long long storeAction;
	unsigned long long storeActionOptions;
	SCD_Struct_MT44 clearColor;
	double clearDepth;
	unsigned clearStencil;
	<MTLTextureImplementation>* resolveTexture;
	unsigned long long resolveLevel;
	unsigned long long resolveSlice;
	unsigned long long resolveDepthPlane;
	unsigned long long resolveFilter;
	unsigned long long width;
	unsigned long long height;
	BOOL yInvert;
} MTLRenderPassAttachmentDescriptorPrivate;

typedef struct {
	float x;
	float y;
} SCD_Struct_MT46;

typedef struct MTLRenderPassDescriptorPrivate {
	MTLRenderPassColorAttachmentDescriptorArrayInternal* attachments;
	<MTLBuffer>* visibilityResultBuffer;
	unsigned long long renderTargetWidth;
	unsigned long long renderTargetHeight;
	BOOL fineGrainedBackgroundVisibilityEnabled;
	BOOL ditherEnabled;
	BOOL openGLModeEnabled;
	SCD_Struct_MT46 customSamplePositions[4];
	unsigned long long numCustomSamplePositions;
} MTLRenderPassDescriptorPrivate;

typedef struct MTLComputePipelineDescriptorPrivate {
	NSString* label;
	<MTLFunction>* computeFunction;
	BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;
	MTLStageInputOutputDescriptor* stageInputDescriptor;
	NSDictionary* driverCompilerOptions;
	MTLPipelineBufferDescriptorArrayInternal* buffers;
	<MTLPipelineLibrary>* pipelineLibrary;
} MTLComputePipelineDescriptorPrivate;

typedef struct {
	unsigned blendingEnabled : 1;
	unsigned rgbBlendOperation : 3;
	unsigned alphaBlendOperation : 3;
	unsigned sourceRGBBlendFactor : 5;
	unsigned sourceAlphaBlendFactor : 5;
	unsigned destinationRGBBlendFactor : 5;
	unsigned destinationAlphaBlendFactor : 5;
	unsigned writeMask : 4;
	unsigned logicOpEnabled : 1;
	unsigned logicOp : 4;
	unsigned pixelFormat : 28;
} SCD_Struct_MT49;

typedef struct MTLRenderPipelineAttachmentDescriptorPrivate {
	/*function pointer*/void* ;
	SCD_Struct_MT49 ;
	SCD_Struct_MT10) ;
} MTLRenderPipelineAttachmentDescriptorPrivate;

typedef struct {
	unsigned alphaToCoverageEnabled : 1;
	unsigned alphaToOneEnabled : 1;
	unsigned rasterizationEnabled : 1;
	unsigned inputPrimitiveTopology : 2;
	unsigned vertexEnabled : 1;
	unsigned depthStencilWriteDisabled : 1;
	unsigned openGLMode : 1;
	unsigned sampleCoverageInvert : 1;
	unsigned private4 : 1;
	unsigned private5 : 1;
	unsigned pad : 3;
	unsigned pointSmoothEnabled : 1;
	unsigned clipDistanceEnableMask : 8;
	unsigned alphaTestFunc : 3;
	unsigned alphaTestEnabled : 1;
	unsigned logicOp : 4;
	unsigned logicOpEnabled : 1;
} SCD_Struct_MT51;

typedef struct MTLRenderPipelineDescriptorPrivate {
	MTLRenderPipelineColorAttachmentDescriptorArrayInternal* attachments;
	unsigned long long rtBlendDescHash[8];
	unsigned long long depthAttachmentPixelFormat;
	unsigned long long stencilAttachmentPixelFormat;
	unsigned long long tessellationPartitionMode;
	unsigned long long maxTessellationFactor;
	BOOL tessellationFactorScaleEnabled;
	unsigned long long tessellationFactorFormat;
	unsigned long long tessellationControlPointIndexType;
	unsigned long long tessellationFactorStepFunction;
	unsigned long long tessellationOutputWindingOrder;
	unsigned long long postVertexDumpBufferIndex;
	/*function pointer*/void* ;
	unsigned long long sampleCount;
	Q) rasterSampleCount;
	unsigned long long sampleMask;
	/*function pointer*/void* ;
	unsigned sampleCoverageHash;
	f) sampleCoverage;
	/*function pointer*/void* ;
	unsigned miscHash;
	SCD_Struct_MT51) ;
	unsigned vertexDepthCompareClampMask;
	unsigned fragmentDepthCompareClampMask;
	NSString* label;
	<MTLFunction>* vertexFunction;
	<MTLFunction>* fragmentFunction;
	MTLVertexDescriptorInternal* vertexDescriptor;
	MTLPipelineBufferDescriptorArrayInternal* vertexBuffers;
	MTLPipelineBufferDescriptorArrayInternal* fragmentBuffers;
	<MTLPipelineLibrary>* pipelineLibrary;
} MTLRenderPipelineDescriptorPrivate;

typedef struct shmemPoolQueue {
	MTLIOAccelDeviceShmem* tqh_first;
	id tqh_last;
} shmemPoolQueue;

typedef struct MTLIOAccelDeviceShmemPoolPrivate {
	shmemPoolQueue queue;
	os_unfair_lock_s lock;
	int count;
	Class shmemClass;
	MTLIOAccelDevice* device;
	unsigned shmemSize;
} MTLIOAccelDeviceShmemPoolPrivate;

typedef struct {
	unsigned short buckets[64];
	unsigned numEntries;
	unsigned capacity;
	MTLResourceListEntry entries;
	MTLResourceListPool* pool;
	const esourceListQueue entry;
	unsigned long long time_added;
} SCD_Struct_MT55;

typedef struct MTLStencilDescriptorPrivate {
	unsigned long long stencilCompareFunction;
	unsigned long long stencilFailureOperation;
	unsigned long long depthFailureOperation;
	unsigned long long depthStencilPassOperation;
	unsigned readMask;
	unsigned writeMask;
} MTLStencilDescriptorPrivate;

typedef struct MTLDepthStencilDescriptorPrivate {
	MTLStencilDescriptorInternal* frontFaceStencil;
	MTLStencilDescriptorInternal* backFaceStencil;
	unsigned long long depthCompareFunction;
	BOOL depthWriteEnabled;
	NSString* label;
} MTLDepthStencilDescriptorPrivate;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

