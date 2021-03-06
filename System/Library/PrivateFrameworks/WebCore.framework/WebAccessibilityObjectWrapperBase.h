/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityObjectWrapperBase : NSObject {

	AccessibilityObject* m_object;

}
+(void)accessibilitySetShouldRepostNotifications:(BOOL)arg1 ;
-(id)initWithAccessibilityObject:(AccessibilityObject*)arg1 ;
-(void)accessibilityPostedNotification:(id)arg1 ;
-(id)attachmentView;
-(AccessibilityObject*)accessibilityObject;
-(CGPathRef)convertPathToScreenSpace:(Path*)arg1 ;
-(id)baseAccessibilityDescription;
-(id)baseAccessibilityTitle;
-(id)ariaLandmarkRoleDescription;
-(id)baseAccessibilityHelpText;
-(CGPoint)convertPointToScreenSpace:(FloatPoint*)arg1 ;
-(void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)accessibilityMathPostscriptPairs;
-(id)accessibilityMathPrescriptPairs;
-(BOOL)fileUploadButtonReturnsValueInTitle;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(BOOL)updateObjectBackingStore;
-(BOOL)titleTagShouldBeUsedInDescriptionField;
-(void)detach;
@end

