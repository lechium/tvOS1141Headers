/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFanOutNode.h>

@class NSArray, NSMutableDictionary;

@interface BWAttachedMediaSplitNode : BWFanOutNode {

	NSArray* _attachedMediaKeys;
	NSMutableDictionary* _attachedMediaFormatDescriptions;
	int _numOutputs;
	BOOL _emitsNodeErrorsForMissingAttachedMedia;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithAttachedMediaKeys:(id)arg1 ;
-(void)setEmitsNodeErrorsForMissingAttachedMedia:(BOOL)arg1 ;
-(BOOL)emitsNodeErrorsForMissingAttachedMedia;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)dealloc;
@end

