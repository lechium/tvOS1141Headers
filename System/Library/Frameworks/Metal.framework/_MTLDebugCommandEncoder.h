/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLCommandEncoder.h>
#import <libobjc.A.dylib/MTLDebugCommandEncoder.h>

@class NSString;

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)kprintf:(id)arg1 ;
-(void)IOLog:(id)arg1 ;
@end

