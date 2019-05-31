/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TIPreferenceDomain : NSObject {

	BOOL _needsGetSync;
	BOOL _needsSetSync;
	NSString* _domain;
	NSString* _notification;
	double _lastSynchronizedTime;

}

@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * notification;                  //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic) BOOL needsGetSync;                        //@synthesize needsGetSync=_needsGetSync - In the implementation block
@property (assign,nonatomic) BOOL needsSetSync;                        //@synthesize needsSetSync=_needsSetSync - In the implementation block
@property (assign,nonatomic) double lastSynchronizedTime;              //@synthesize lastSynchronizedTime=_lastSynchronizedTime - In the implementation block
+(id)domainWithName:(id)arg1 notification:(id)arg2 ;
-(void)setNotification:(NSString *)arg1 ;
-(BOOL)needsGetSync;
-(void)setNeedsGetSync:(BOOL)arg1 ;
-(BOOL)needsSetSync;
-(void)setNeedsSetSync:(BOOL)arg1 ;
-(double)lastSynchronizedTime;
-(void)setLastSynchronizedTime:(double)arg1 ;
-(void)dealloc;
-(NSString *)notification;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
@end

