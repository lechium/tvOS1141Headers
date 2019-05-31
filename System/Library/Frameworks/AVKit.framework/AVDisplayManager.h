/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBSDisplayStateObserver.h>

@class AVDisplayCriteria, NSString;

@interface AVDisplayManager : NSObject <PBSDisplayStateObserver> {

	int _pbDisplayModeSwitchActiveNotification;
	unsigned _numberOfDisplayModeSwitchesInProgress;
	AVDisplayCriteria* _preferredDisplayCriteria;
	long long _displayCriteriaMatchingEnabledValue;
	BOOL _displayModeSwitchInProgress;

}

@property (assign,setter=_setDisplayModeSwitchInProgress:,getter=isDisplayModeSwitchInProgress,nonatomic) BOOL displayModeSwitchInProgress;              //@synthesize displayModeSwitchInProgress=_displayModeSwitchInProgress - In the implementation block
@property (nonatomic,copy) AVDisplayCriteria * preferredDisplayCriteria;                                                                                 //@synthesize preferredDisplayCriteria=_preferredDisplayCriteria - In the implementation block
@property (getter=isDisplayCriteriaMatchingEnabled,nonatomic,readonly) BOOL displayCriteriaMatchingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVDisplayCriteria *)preferredDisplayCriteria;
-(id)init;
-(void)dealloc;
-(void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2 ;
-(id)initPrivate;
-(void)setPreferredDisplayCriteria:(AVDisplayCriteria *)arg1 ;
-(void)considerDisplayModeSwitchFinished;
-(BOOL)isDisplayCriteriaMatchingEnabled;
-(BOOL)isDisplayModeSwitchInProgress;
-(void)_setDisplayModeSwitchInProgress:(BOOL)arg1 ;
@end
