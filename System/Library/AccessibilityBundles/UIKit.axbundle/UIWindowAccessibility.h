/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIWindowAccessibility_super.h>

@interface UIWindowAccessibility : __UIWindowAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_setFirstResponder:(id)arg1 ;
-(void)_orderFrontWithoutMakingKey;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(id)accessibilityAttributeValue:(long long)arg1 ;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityContainer;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityFirstElement;
-(BOOL)accessibilityIsWindow;
-(id)_accessibilityUserTestingParent;
-(void)_axListenForRemoteElement;
-(id)_accessibilityAllRemoteElements;
-(id)_accessibilityRemoteElement;
-(unsigned)_accessibilityWindowContextId;
-(void)_axUpdateForRemoteElement:(id)arg1 ;
-(void)_accessibilitySetAllRemoteElements:(id)arg1 ;
-(void)_axRemoteElementRegistered:(id)arg1 ;
-(int)_accessibilityRemotePid;
-(id)accessibilityRemoteSubstituteChildren:(id)arg1 ;
-(long long)_accessibilityInterfaceOrientationForScreenCoordinates;
@end

