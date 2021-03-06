/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@protocol NSURLAuthenticationChallengeSender;
@class NSString;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {

	long long _failureCount;
	BOOL _hasPassword;
	NSString* _password;
	id<NSURLAuthenticationChallengeSender> _sender;
	NSString* _user;
	BOOL _userNameIsEditable;

}

@property (assign) long long failureCount;                                     //@synthesize failureCount=_failureCount - In the implementation block
@property (assign) BOOL hasPassword;                                           //@synthesize hasPassword=_hasPassword - In the implementation block
@property (retain) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (assign) id<NSURLAuthenticationChallengeSender> sender;              //@synthesize sender=_sender - In the implementation block
@property (retain) NSString * user;                                            //@synthesize user=_user - In the implementation block
@property (assign) BOOL userNameIsEditable;                                    //@synthesize userNameIsEditable=_userNameIsEditable - In the implementation block
-(id)init;
-(void)dealloc;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(void)setSender:(id<NSURLAuthenticationChallengeSender>)arg1 ;
-(NSString *)password;
-(BOOL)hasPassword;
-(long long)failureCount;
-(void)setFailureCount:(long long)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
-(void)setUserNameIsEditable:(BOOL)arg1 ;
-(void)setHasPassword:(BOOL)arg1 ;
-(NSString *)user;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
@end

