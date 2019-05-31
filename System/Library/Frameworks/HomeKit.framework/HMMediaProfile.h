/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/_HMMediaProfileDelegate.h>
#import <libobjc.A.dylib/HMMediaObject.h>
#import <libobjc.A.dylib/HMAccessorySettingsContainer.h>

@protocol HMMediaProfileDelegate, OS_dispatch_queue;
@class NSString, NSObject, HMMediaSession, HMAccessorySettings, HMHome;

@interface HMMediaProfile : HMAccessoryProfile <_HMMediaProfileDelegate, HMMediaObject, HMAccessorySettingsContainer> {

	NSString* _routeUID;
	id<HMMediaProfileDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSString * routeUID;                                     //@synthesize routeUID=_routeUID - In the implementation block
@property (__weak) id<HMMediaProfileDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings; 
@property (__weak,readonly) HMHome * containerHome; 
-(id)init;
-(id<HMMediaProfileDelegate>)delegate;
-(void)setDelegate:(id<HMMediaProfileDelegate>)arg1 ;
-(HMAccessorySettings *)settings;
-(NSString *)routeUID;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(HMHome *)containerHome;
-(id)initWithAccessoryProfile:(id)arg1 ;
-(void)mediaProfile:(id)arg1 didUpdateMediaSession:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMMediaSession *)mediaSession;
@end

