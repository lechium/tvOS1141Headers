/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIViewAccessibility_super.h>

@interface UIViewAccessibility : __UIViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(id)_axFocusedWindowSubviews;
-(void)_accessibilityFinalize;
-(void)willMoveToWindow:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(id)accessibilityPath;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityElementsHidden;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(BOOL)accessibilityElementIsFocused;
-(id)_accessibilityFrameDelegate;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityObscuredScreenAllowedViews;
-(BOOL)_accessibilityViewIsActive;
-(id)_axSubviews;
-(id)_accessibilityAuditIssuesWithOptions:(id)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityIsScannerElement;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(id)_accessibilitySortedElementsWithin;
-(id)_accessibilityRetrieveLabelFromTableViewCell;
-(BOOL)_accessibilityAvoidsMockViewContainers;
-(id)__accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityRetrieveIvarText;
-(BOOL)_accessibilityIsInTableCell;
-(CGRect)_accessibilityBounds;
-(id)_accessibilityViewController;
-(BOOL)_accessibilityServesAsContainingParentForOrdering;
-(CGRect)_accessibilityFrameForView:(id)arg1 ;
-(BOOL)_axHasNoVisibleAxElements;
-(BOOL)_axViewIsOffScreen:(id)arg1 ;
-(BOOL)_accessibilityObscuredScreenAllowsView:(id)arg1 ;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(BOOL)_accessibilityPointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityBlocksInteraction;
-(id)_accessibilityHitTestSubviews;
-(BOOL)_accessibilityIsIgnored;
-(BOOL)_accessibilityViewIsBeingHitTested:(id)arg1 ;
-(BOOL)_accessibilityIsUserInteractionEnabledChain;
-(BOOL)_accessibilityModalViewBlocksView:(id)arg1 blockerView:(id*)arg2 ;
-(double)_accessibilityMaxFuzzyHitTestDistance;
-(id)_accessibilityCheckForAllowedModalView:(CGPoint)arg1 event:(id)arg2 ;
-(BOOL)accessibilityIsWindow;
-(BOOL)_accessibilityShouldHitTestLayers;
-(BOOL)_accessibilityIsUserInteractionEnabled;
-(void)_axPrintSubviews:(long long)arg1 string:(id)arg2 ;
-(id)_axWindowSubviews;
-(BOOL)_accessibilityDidLoadAccessibilityInformation;
-(void)_setAccessibilityDidLoadAccessibilityInformation:(BOOL)arg1 ;
-(void)_accessibilityPostNotification:(id)arg1 ;
-(id)_accessibilityProxyView;
-(id)_accessibilityCirclePathBasedOnBoundsWidth;
-(id)_accessibilityAutomaticIdentifier;
-(long long)_accessibilityHorizontalSizeClass;
-(long long)_accessibilityVerticalSizeClass;
-(id)_superAccessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)_accessibilityViewAlpha;
-(id)_accessibilityChildVendingParent;
-(id)_accessibilitySupportGesturesAttributes;
-(id)_axResponderChain;
@end
