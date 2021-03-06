/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarButtonActionItemView.h>

@class NSString;

@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView {

	NSString* _timeString;
	BOOL _isInternalInstall;
	BOOL _radarItemEnabled;
	BOOL _currentlyGatheringLogs;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(long long)buttonType;
-(BOOL)canBecomeFocused;
-(double)extraRightPadding;
-(id)contentsImage;
-(id)highlightImage;
-(BOOL)usesAdvancedActions;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)allowsUserInteraction;
-(double)neededSizeForImageSet:(id)arg1 ;
-(double)extraLeftPadding;
-(long long)textStyle;
-(void)_gatheringLogsDidChangeStatusNotification:(id)arg1 ;
-(BOOL)_showRadarButtonForInternalInstalls;
-(id)_timeImageSet;
@end

