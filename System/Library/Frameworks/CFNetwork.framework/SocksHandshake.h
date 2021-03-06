/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SocksHandshake : NSObject {

	BOOL _finished;
	unsigned short _port;
	NSString* _host;
	NSDictionary* _credentials;

}

@property (assign) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (retain) NSString * host;                         //@synthesize host=_host - In the implementation block
@property (assign) unsigned short port;                     //@synthesize port=_port - In the implementation block
@property (retain) NSDictionary * credentials;              //@synthesize credentials=_credentials - In the implementation block
+(id)socksHadshakeWithVersion:(int)arg1 ;
-(void)setCredentials:(NSDictionary *)arg1 ;
-(BOOL)parse:(const char*)arg1 len:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)finish:(int)arg1 ;
-(BOOL)finished;
-(void)setHost:(NSString *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(NSString *)host;
-(unsigned short)port;
-(NSDictionary *)credentials;
-(void)setPort:(unsigned short)arg1 ;
@end

