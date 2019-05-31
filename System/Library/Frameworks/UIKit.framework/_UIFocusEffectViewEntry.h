/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIVisualEffectViewEntry.h>

@class _UIFocusEffectSettings;

@interface _UIFocusEffectViewEntry : _UIVisualEffectViewEntry {

	_UIFocusEffectSettings* _settings;

}

@property (nonatomic,copy) _UIFocusEffectSettings * settings;              //@synthesize settings=_settings - In the implementation block
-(id)description;
-(_UIFocusEffectSettings *)settings;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)hasTransform;
-(void)setSettings:(_UIFocusEffectSettings *)arg1 ;
@end
