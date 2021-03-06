/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@class NSMutableIndexSet;

@interface SCNFixedSizePage : NSObject {

	id<MTLBuffer> _buffer;
	unsigned long long _elementSize;
	NSMutableIndexSet* _freeIndices;

}

@property (nonatomic,readonly) id<MTLBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
-(void)dealloc;
-(id<MTLBuffer>)buffer;
-(void)deallocateElementAtOffset:(unsigned long long)arg1 ;
-(unsigned long long)_allocateElement;
-(id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2 ;
-(BOOL)hasFreeElementsLeft;
-(id)newSubBuffer;
-(BOOL)isFull;
@end

