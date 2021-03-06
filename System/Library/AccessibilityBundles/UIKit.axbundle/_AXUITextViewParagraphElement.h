/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementDelegate.h>

@class NSArray, NSString;

@interface _AXUITextViewParagraphElement : UIAccessibilityElement <UIAccessibilityElementDelegate> {

	NSArray* _links;
	NSRange _textRange;

}

@property (nonatomic,readonly) NSRange textRange;                   //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,readonly) NSArray * links;                     //@synthesize links=_links - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)accessibilityFrame;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(NSRange)textRange;
-(NSArray *)links;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityIsScannerElement;
-(id)initWithAccessibilityContainer:(id)arg1 textRange:(NSRange)arg2 links:(id)arg3 ;
-(id)accessibilityLabel:(id)arg1 ;
-(CGRect)accessibilityFrame:(id)arg1 ;
@end

