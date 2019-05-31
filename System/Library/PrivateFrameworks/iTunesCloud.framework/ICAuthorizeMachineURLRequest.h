/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSString, NSData;

@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest {

	NSString* _keybagPath;
	NSString* _reason;
	NSData* _tokenData;

}

@property (nonatomic,copy) NSString * keybagPath;              //@synthesize keybagPath=_keybagPath - In the implementation block
@property (nonatomic,copy) NSString * reason;                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                 //@synthesize tokenData=_tokenData - In the implementation block
-(NSString *)reason;
-(NSString *)keybagPath;
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSData *)tokenData;
-(void)setKeybagPath:(NSString *)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

