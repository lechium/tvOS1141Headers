/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCMediaStream.h>
#import <libobjc.A.dylib/VCTextSender.h>
#import <libobjc.A.dylib/VCTextReceiverDelegate.h>

@protocol VCTextReceiverDelegate;
@class VCTextReceiver, VCTextTransmitter, NSString;

@interface VCTextStream : VCMediaStream <VCTextSender, VCTextReceiverDelegate> {

	long long _streamToken;
	VCTextReceiver* _textReceiver;
	VCTextTransmitter* _textTransmitter;
	id<VCTextReceiverDelegate> _receiveDelegate;

}

@property (nonatomic,readonly) long long streamToken;                                 //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) id<VCTextReceiverDelegate> receiveDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned)generateStreamToken;
-(void)sendCharacter:(unsigned short)arg1 ;
-(id<VCTextReceiverDelegate>)receiveDelegate;
-(void)didReceiveCharacter:(unsigned short)arg1 ;
-(void)setupRTPPayloads;
-(void)setupTextTransmitter;
-(BOOL)setupTextReceiverWithError:(id*)arg1 ;
-(void)setReceiveDelegate:(id<VCTextReceiverDelegate>)arg1 ;
-(id)supportedPayloads;
-(void)onCallIDChanged;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)onStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onPauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onResumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onRtcpSendIntervalChanged;
-(void)onRtcpEnabledChanged;
-(long long)streamToken;
@end
