/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
#import <SceneKit/SceneKit-Structs.h>
@class NSString, NSMutableArray, SCNFixedSizePage;

@interface SCNMTLBufferAllocator : NSObject {

	id<MTLDevice> _device;
	unsigned long long _bufferSize;
	unsigned long long _elementSize;
	NSString* _name;
	NSMutableArray* _pages;
	SCNFixedSizePage* _currentAllocatorPage;
	os_unfair_lock_s _allocatorLock;

}

@property (nonatomic,readonly) unsigned long long bufferSize;               //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) unsigned long long elementSize;              //@synthesize elementSize=_elementSize - In the implementation block
-(void)dealloc;
-(id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned long long)arg2 buffersize:(unsigned long long)arg3 name:(id)arg4 ;
-(id)newSubBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 blitEncoder:(id)arg3 ;
-(id)_newSubBuffer;
-(unsigned long long)elementSize;
-(unsigned long long)bufferSize;
@end

