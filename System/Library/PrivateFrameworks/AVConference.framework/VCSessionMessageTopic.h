/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSArray, NSString, NSObject;

@interface VCSessionMessageTopic : NSObject {

	NSArray* associatedStrings;
	NSString* topicKey;
	long long latestReceivedTopicMessageNumber;
	BOOL allowConcurrent;
	NSObject*<OS_dispatch_queue> outMessageQueue;
	tagHANDLE* handle;
	unsigned p2pID;
	NSObject*<OS_dispatch_queue> inMessageQueue;
	/*^block*/id receiveBlock;
	long long latestOutgoingMessageIndex;
	BOOL isSendingEnabled;
	BOOL shouldEncodeTopicKeyInMessage;
	NSString* topicPrefix;

}

@property (assign,setter=setIsSendingEnabled:,nonatomic) BOOL isSendingEnabled; 
@property (readonly) NSString * topicKey; 
-(void)dealloc;
-(NSString *)topicKey;
-(BOOL)isStringAssociated:(id)arg1 ;
-(void)passMessage:(id)arg1 sequence:(int)arg2 ;
-(void)setIsSendingEnabled:(BOOL)arg1 ;
-(id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(BOOL)arg3 receiveHandler:(/*^block*/id)arg4 ;
-(void)setP2PID:(unsigned)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 withSequence:(long long)arg2 numRetries:(long long)arg3 ;
-(BOOL)isSendingEnabled;
@end

