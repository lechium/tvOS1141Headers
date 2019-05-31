/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPSparseArray;

@interface _MPCAVPlaylistIteration : NSObject <NSSecureCoding> {

	MPSparseArray* _sourceContexts;
	unsigned long long _iterationIndex;
	unsigned long long _count;
	unsigned long long _indexToFaultIn;

}

@property (nonatomic,retain) MPSparseArray * sourceContexts;                 //@synthesize sourceContexts=_sourceContexts - In the implementation block
@property (assign,nonatomic) unsigned long long iterationIndex;              //@synthesize iterationIndex=_iterationIndex - In the implementation block
@property (assign,nonatomic) unsigned long long count;                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long indexToFaultIn;              //@synthesize indexToFaultIn=_indexToFaultIn - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(MPSparseArray *)sourceContexts;
-(void)setSourceContexts:(MPSparseArray *)arg1 ;
-(unsigned long long)indexToFaultIn;
-(void)setIndexToFaultIn:(unsigned long long)arg1 ;
-(unsigned long long)iterationIndex;
-(void)setIterationIndex:(unsigned long long)arg1 ;
@end

