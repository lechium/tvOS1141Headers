/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLCommandQueueDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned long long maxCommandBufferCount; 
@property (assign,nonatomic) unsigned long long qosClass; 
@property (assign,nonatomic) long long qosRelativePriority; 
+(id)commandQueueDescriptor;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

