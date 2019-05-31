/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVCMomentsRequest : NSObject {

	NSString* _transactionID;
	NSString* _initiatorID;
	unsigned char _mediaType;
	id _delegate;
	unsigned char _mode;

}

@property (assign,nonatomic) NSObject*<AVCMomentsRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned char mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSString * transactionID;                                 //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,readonly) unsigned char mediaType;                                  //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) NSString * initiatorID;                                   //@synthesize initiatorID=_initiatorID - In the implementation block
-(NSObject*<AVCMomentsRequestDelegate>)delegate;
-(void)setDelegate:(NSObject*<AVCMomentsRequestDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setMode:(unsigned char)arg1 ;
-(unsigned char)mode;
-(unsigned char)mediaType;
-(BOOL)startWithError:(id*)arg1 ;
-(id)initWithMediaType:(unsigned char)arg1 initiatorID:(id)arg2 transactionID:(id)arg3 ;
-(id)initWithMediaType:(unsigned char)arg1 initiatorID:(id)arg2 ;
-(NSString *)initiatorID;
-(BOOL)endWithError:(id*)arg1 ;
-(BOOL)rejectWithError:(id*)arg1 ;
-(NSString *)transactionID;
-(BOOL)validateWithError:(id*)arg1 ;
@end
