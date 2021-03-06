/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface GEOClientRequestInfo : NSObject {

	NSString* _clientID;
	NSMutableDictionary* _requests;

}

@property (nonatomic,readonly) NSString * clientID;                  //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) NSDictionary * requests;              //@synthesize requests=_requests - In the implementation block
-(NSDictionary *)requests;
-(id)initWithClientID:(id)arg1 ;
-(unsigned long long)countForRequestType:(unsigned char)arg1 ;
-(void)incrementCountForRequestType:(unsigned char)arg1 ;
-(NSString *)clientID;
-(id)init;
@end

