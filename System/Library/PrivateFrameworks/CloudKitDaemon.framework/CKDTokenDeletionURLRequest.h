/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

@interface CKDTokenDeletionURLRequest : CKDURLRequest {

	NSData* _apsToken;
	NSString* _apsEnvironmentString;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSData * apsToken;                            //@synthesize apsToken=_apsToken - In the implementation block
@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(NSString *)apsEnvironmentString;
-(BOOL)requiresTokenRegistration;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(NSData *)apsToken;
-(id)initWithApsToken:(id)arg1 apsEnvironmentString:(id)arg2 bundleID:(id)arg3 ;
-(void)setApsToken:(NSData *)arg1 ;
-(int)operationType;
@end

