/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@class MRAudioDataBlock, MRAudioBuffer;

@interface MRSendVoiceInputMessage : MRProtocolMessage {

	MRAudioDataBlock* _dataBlock;

}

@property (nonatomic,readonly) MRAudioBuffer * buffer; 
@property (nonatomic,readonly) SCD_Struct_MR15 time; 
@property (nonatomic,readonly) float gain; 
-(SCD_Struct_MR15)time;
-(unsigned long long)type;
-(unsigned long long)priority;
-(float)gain;
-(void)_initializeDataIfNecessary;
-(id)initWithBuffer:(id)arg1 time:(SCD_Struct_MR15)arg2 gain:(float)arg3 ;
-(MRAudioBuffer *)buffer;
@end
