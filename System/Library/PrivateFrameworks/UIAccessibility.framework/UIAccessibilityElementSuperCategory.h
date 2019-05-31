/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIAccessibility/__UIAccessibilityElementSuperCategory_super.h>

@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(id)accessibilityPath;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(float)_accessibilityActivationDelay;
-(BOOL)_accessibilitySupportsHandwriting;
-(BOOL)_accessibilityProvidesOwnFrame;
-(BOOL)_accessibilitySupportsActivateAction;
-(void)_accessibilitySetValue:(id)arg1 ;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(id)_accessibilityAutomaticIdentifier;
-(id)_accessibilityUserTestingVisibleAncestor;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
@end
