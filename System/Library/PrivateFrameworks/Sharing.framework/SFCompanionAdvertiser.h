/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFCompanionAdvertiserDelegate;
@class NSString, NSData;

@interface SFCompanionAdvertiser : NSObject {

	BOOL _supportsStreams;
	id<SFCompanionAdvertiserDelegate> _delegate;
	NSString* _serviceType;

}

@property (assign) id<SFCompanionAdvertiserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL supportsStreams;                                    //@synthesize supportsStreams=_supportsStreams - In the implementation block
@property (copy,readonly) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) NSData * serviceEndpointData; 
-(NSString *)serviceType;
-(id<SFCompanionAdvertiserDelegate>)delegate;
-(void)setDelegate:(id<SFCompanionAdvertiserDelegate>)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(BOOL)supportsStreams;
-(void)setSupportsStreams:(BOOL)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(NSData *)serviceEndpointData;
-(void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

