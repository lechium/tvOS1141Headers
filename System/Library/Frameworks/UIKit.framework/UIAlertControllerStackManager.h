/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIAlertControllerStackManager : NSObject {

	NSMutableArray* _alertControllerStack;
	NSMutableArray* _hiddenAlertControllers;

}
+(id)sharedStackManager;
-(id)init;
-(void)_alertControllerWillAppear:(id)arg1 ;
-(void)_alertControllerDidAppear:(id)arg1 ;
-(void)_alertControllerWillDisappear:(id)arg1 ;
-(void)_alertControllerDidDisappear:(id)arg1 ;
-(void)_showHiddenStackedAlertControllers;
-(void)_hideStackedAlertControllers;
-(BOOL)_alertControllerShouldBeTrackedInStack:(id)arg1 ;
-(void)_willShowAlertController:(id)arg1 ;
-(void)_addAlertControllerToStack:(id)arg1 ;
-(void)_willHideAlertController:(id)arg1 ;
-(void)_removeAlertControllerFromStack:(id)arg1 ;
-(void)_didHideAlertController:(id)arg1 ;
-(id)_topAlertControllerInStack;
-(long long)_alertControllerStackCount;
@end

