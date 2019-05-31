/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFMessageTransferResult : NSObject {

	unsigned long long _resultCode;
	NSArray* _failedMessages;
	NSArray* _transferedMessages;

}

@property (nonatomic,readonly) unsigned long long resultCode;              //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) NSArray * failedMessages;                   //@synthesize failedMessages=_failedMessages - In the implementation block
@property (nonatomic,readonly) NSArray * transferedMessages;               //@synthesize transferedMessages=_transferedMessages - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(unsigned long long)resultCode;
-(NSArray *)transferedMessages;
-(NSArray *)failedMessages;
-(id)initWithResultCode:(unsigned long long)arg1 failedMessages:(id)arg2 transferedMessage:(id)arg3 ;
@end
