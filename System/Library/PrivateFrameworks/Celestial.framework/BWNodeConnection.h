/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BWNodeOutputConsumer.h>

@class BWNodeInput, BWNodeOutput, BWPipelineStage, NSString;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {

	BWNodeInput* _input;
	BWNodeOutput* _output;
	BWPipelineStage* _pipelineStage;

}

@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (readonly) BWPipelineStage * pipelineStage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_requirementsArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 finalAttachedMediaKeyOut:(id*)arg3 ;
+(id)_inputAndRequirementsDebugArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 finalAttachedMediaKeyOut:(id*)arg3 ;
+(void)initialize;
-(void)consumeMessage:(id)arg1 fromOutput:(id)arg2 ;
-(BOOL)_resolveCommonVideoBufferFormatForAttachedMediaKey:(id)arg1 ;
-(id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3 ;
-(BWPipelineStage *)pipelineStage;
-(BOOL)resolveCommonBufferFormat;
-(void)dealloc;
-(BWNodeInput *)input;
-(BOOL)detach;
-(BOOL)attach;
-(BWNodeOutput *)output;
@end

