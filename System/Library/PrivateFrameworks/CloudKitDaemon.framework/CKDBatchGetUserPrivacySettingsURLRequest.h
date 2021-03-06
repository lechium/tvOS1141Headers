/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest {

	NSArray* _containerPrivacySettings;

}

@property (nonatomic,retain) NSArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
-(long long)databaseScope;
-(NSArray *)containerPrivacySettings;
-(BOOL)requiresTokenRegistration;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setContainerPrivacySettings:(NSArray *)arg1 ;
-(int)operationType;
@end

