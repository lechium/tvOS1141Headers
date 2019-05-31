/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBDisplayLayoutTransition : NSObject {

	NSString* _name;
	NSString* _transitionReason;
	long long _displayType;
	BOOL _transitioning;
	long long _interfaceOrientation;
	long long _backlightLevel;

}

@property (nonatomic,readonly) long long displayType;                                  //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning;              //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,copy) NSString * transitionReason;                                //@synthesize transitionReason=_transitionReason - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long backlightLevel;                                 //@synthesize backlightLevel=_backlightLevel - In the implementation block
+(BOOL)isTransitioningForDisplayType:(long long)arg1 ;
+(id)layoutForDisplayType:(long long)arg1 ;
+(void)flushLayoutForDisplayType:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)interfaceOrientation;
-(NSString *)name;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setBacklightLevel:(long long)arg1 ;
-(long long)backlightLevel;
-(BOOL)isTransitioning;
-(long long)displayType;
-(void)beginTransition;
-(void)endTransition;
-(id)initWithDisplayType:(long long)arg1 name:(id)arg2 ;
-(void)setTransitionReason:(NSString *)arg1 ;
-(NSString *)transitionReason;
@end

