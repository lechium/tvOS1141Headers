/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSVector.h>

@interface MPSTemporaryVector : MPSVector {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryVectorWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg1 descriptorList:(id)arg2 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(unsigned long long)readCount;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
@end

