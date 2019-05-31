/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusSoundPlayer;
@interface _UIFocusSoundGenerator : NSObject {

	id<_UIFocusSoundPlayer> _focusSoundPlayer;

}

@property (nonatomic,readonly) id<_UIFocusSoundPlayer> focusSoundPlayer;              //@synthesize focusSoundPlayer=_focusSoundPlayer - In the implementation block
+(id)defaultGenerator;
+(void)registerURL:(id)arg1 forIdentifier:(id)arg2 ;
+(void)_uiktest_unregisterURLForIdentifier:(id)arg1 ;
-(id)initWithFocusSoundPlayer:(id)arg1 ;
-(void)playSoundForFocusUpdateInContext:(id)arg1 ;
-(id<_UIFocusSoundPlayer>)focusSoundPlayer;
@end
