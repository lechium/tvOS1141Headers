/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusTest.h>

@class UIWindow;

@interface _UIFocusSwipeTest : _UIFocusTest {

	unsigned long long _eventCount;
	const SCD_Struct_UI98* _events;
	int _swipeAxis;
	UIWindow* _window;

}

@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) int swipeAxis;                         //@synthesize swipeAxis=_swipeAxis - In the implementation block
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)main;
-(int)swipeAxis;
-(void)setSwipeAxis:(int)arg1 ;
@end

