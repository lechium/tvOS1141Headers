/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class AVOutputContextCommunicationChannel, AVOutputContext;

@interface MRAVOutputStream : MRAVBufferedOutputStream {

	AVOutputContextCommunicationChannel* _communicationChannel;
	BOOL _channelOpen;
	BOOL _channelIsOpen;
	AVOutputContext* _outputContext;

}

@property (assign,nonatomic) BOOL channelIsOpen;                                                        //@synthesize channelIsOpen=_channelIsOpen - In the implementation block
@property (nonatomic,readonly) AVOutputContext * outputContext;                                         //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * communicationChannel;              //@synthesize communicationChannel=_communicationChannel - In the implementation block
@property (getter=isChannelOpen,nonatomic,readonly) BOOL channelOpen;                                   //@synthesize channelOpen=_channelOpen - In the implementation block
-(id)initWithURL:(id)arg1 append:(BOOL)arg2 ;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(AVOutputContext *)outputContext;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithOutputContext:(id)arg1 ;
-(BOOL)isChannelOpen;
-(void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1 ;
-(id)initWithCommunicationChannel:(id)arg1 ;
-(AVOutputContextCommunicationChannel *)communicationChannel;
-(BOOL)channelIsOpen;
-(void)setChannelIsOpen:(BOOL)arg1 ;
-(id)initToMemory;
@end

