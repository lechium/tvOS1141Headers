/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalKit/MetalKit-Structs.h>
#import <libobjc.A.dylib/TXRBuffer.h>

@protocol MTLBuffer;
@class NSString;

@interface MTKTextureIOBuffer : NSObject <TXRBuffer> {

	id<MTLBuffer> _buffer;

}

@property (nonatomic,readonly) id<MTLBuffer> buffer;                //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)map;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<MTLBuffer>)buffer;
-(id)initWithLength:(unsigned long long)arg1 device:(id)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocNotification:(/*^block*/id)arg3 device:(id)arg4 error:(id*)arg5 ;
@end

