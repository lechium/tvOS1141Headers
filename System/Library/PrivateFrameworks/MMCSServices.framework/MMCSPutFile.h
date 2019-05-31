/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCSServices/MMCSSimpleFile.h>

@class NSString, NSData;

@interface MMCSPutFile : MMCSSimpleFile {

	/*^block*/id _block;
	/*^block*/id _updateBlock;
	NSString* _protocolVersion;
	NSData* _authRequestData;
	/*^block*/id _registrationBlock;

}

@property (copy) NSString * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (copy) NSData * authRequestData;                //@synthesize authRequestData=_authRequestData - In the implementation block
@property (copy) id completionBlock;                      //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;                  //@synthesize updateBlock=_updateBlock - In the implementation block
@property (copy) id registrationBlock;                    //@synthesize registrationBlock=_registrationBlock - In the implementation block
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setRegistrationBlock:(id)arg1 ;
-(id)registrationBlock;
-(void)setAuthRequestData:(NSData *)arg1 ;
-(NSData *)authRequestData;
-(id)progressUpdateBlock;
-(void)setProgressUpdateBlock:(id)arg1 ;
@end

