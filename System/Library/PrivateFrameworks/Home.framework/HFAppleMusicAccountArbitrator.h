/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSSet, NAFuture;

@interface HFAppleMusicAccountArbitrator : NSObject {

	BOOL _forceLogout;
	ACAccount* _account;
	NSSet* _accessories;
	/*^block*/id _contextGenerator;
	long long _loginType;
	NAFuture* _activeArbitrationFuture;

}

@property (nonatomic,retain) NAFuture * activeArbitrationFuture;              //@synthesize activeArbitrationFuture=_activeArbitrationFuture - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSSet * accessories;                      //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,copy,readonly) id contextGenerator;                      //@synthesize contextGenerator=_contextGenerator - In the implementation block
@property (assign,nonatomic) long long loginType;                             //@synthesize loginType=_loginType - In the implementation block
@property (assign,nonatomic) BOOL forceLogout;                                //@synthesize forceLogout=_forceLogout - In the implementation block
-(id)init;
-(id)pendingArbitrationExecutionFuture;
-(id)initWithAccessories:(id)arg1 account:(id)arg2 contextGenerator:(/*^block*/id)arg3 ;
-(long long)_resolvedLoginType:(id*)arg1 ;
-(id)contextGenerator;
-(BOOL)forceLogout;
-(void)setForceLogout:(BOOL)arg1 ;
-(NAFuture *)activeArbitrationFuture;
-(void)setActiveArbitrationFuture:(NAFuture *)arg1 ;
-(long long)loginType;
-(ACAccount *)account;
-(NSSet *)accessories;
-(void)setLoginType:(long long)arg1 ;
@end

