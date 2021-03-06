/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSEventFocusObserving.h>
#import <UIKit/_UIFocusSystemDelegate.h>
#import <UIKit/_UIFocusMovementPerformerDelegate.h>

@class UIScreen, UIFocusSystem, _UIFocusScrollManager, NSString;

@interface _UIScreenFocusSystemManager : NSObject <BKSEventFocusObserving, _UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate> {

	BOOL _allowsForwardingFocusMovementActions;
	UIScreen* _screen;
	UIFocusSystem* _focusSystem;
	_UIFocusScrollManager* _scrollManager;

}

@property (assign,setter=_uiktest_setAllowsForwardingFocusMovementActions:,getter=_uiktest_allowsForwardingFocusMovementActions,nonatomic) BOOL allowsForwardingFocusMovementActions;              //@synthesize allowsForwardingFocusMovementActions=_allowsForwardingFocusMovementActions - In the implementation block
@property (nonatomic,__weak,readonly) UIScreen * screen;                                                                                                                                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIFocusSystem * focusSystem;                                                                                                                                        //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,readonly) _UIFocusScrollManager * scrollManager;                                                                                                                              //@synthesize scrollManager=_scrollManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScreen *)screen;
-(void)dealloc;
-(UIFocusSystem *)focusSystem;
-(id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1 ;
-(BOOL)_focusSystem:(id)arg1 prefersDeferralForFocusUpdateInContext:(id)arg2 ;
-(BOOL)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2 ;
-(void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2 ;
-(id)_focusMapContainerForFocusSystem:(id)arg1 ;
-(void)_focusMovementPerformer:(id)arg1 didFailToPerformFocusMovement:(id)arg2 ;
-(id)initWithScreen:(id)arg1 scrollManager:(id)arg2 ;
-(_UIFocusScrollManager *)scrollManager;
-(BOOL)_uiktest_allowsForwardingFocusMovementActions;
-(void)focusedDeferralPropertiesDidChange:(id)arg1 ;
-(void)_uiktest_setAllowsForwardingFocusMovementActions:(BOOL)arg1 ;
@end

