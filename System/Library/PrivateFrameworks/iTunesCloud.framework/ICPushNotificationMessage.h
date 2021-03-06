/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSArray, NSString;

@interface ICPushNotificationMessage : NSObject {

	NSDictionary* _userInfo;
	NSNumber* _accountDSID;
	long long _actionType;

}

@property (nonatomic,readonly) long long sagaServerRevision; 
@property (nonatomic,copy,readonly) NSArray * sagaUpdatedSubscribedPlaylistIDs; 
@property (nonatomic,readonly) long long jaliscoServerRevision; 
@property (nonatomic,copy,readonly) NSArray * jaliscoChangedMediaTypes; 
@property (nonatomic,copy,readonly) NSString * clientIdentifier; 
@property (nonatomic,readonly) long long moduleIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * accountDSID;                                  //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long actionType;                                         //@synthesize actionType=_actionType - In the implementation block
-(long long)actionType;
-(NSString *)clientIdentifier;
-(NSDictionary *)userInfo;
-(NSNumber *)accountDSID;
-(id)initWithMessageUserInfo:(id)arg1 ;
-(long long)sagaServerRevision;
-(NSArray *)sagaUpdatedSubscribedPlaylistIDs;
-(long long)jaliscoServerRevision;
-(NSArray *)jaliscoChangedMediaTypes;
-(long long)moduleIdentifier;
@end

