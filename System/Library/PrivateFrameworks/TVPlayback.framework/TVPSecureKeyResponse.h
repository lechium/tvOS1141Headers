/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate, TVPSecureKeyRequest;

@interface TVPSecureKeyResponse : NSObject {

	NSData* _keyData;
	NSDate* _renewalDate;
	TVPSecureKeyRequest* _request;

}

@property (nonatomic,retain) NSData * keyData;                           //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,retain) NSDate * renewalDate;                       //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,retain) TVPSecureKeyRequest * request;              //@synthesize request=_request - In the implementation block
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(void)setRequest:(TVPSecureKeyRequest *)arg1 ;
-(TVPSecureKeyRequest *)request;
-(NSData *)keyData;
-(void)setKeyData:(NSData *)arg1 ;
@end

