/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFunnelNode.h>

@class NSMutableDictionary;

@interface BWParallelJoinerNode : BWFunnelNode {

	int _inputsCount;
	NSMutableDictionary* _receivedBuffers;
	NSMutableDictionary* _sentErrorCountForID;

}
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned)arg2 ;
-(void)dealloc;
@end

