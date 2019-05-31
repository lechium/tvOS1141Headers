/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSArray, NSString, OBBundle, OBPrivacyFlow;

@interface OBPrivacyLinkController : UIViewController {

	NSArray* _bundles;
	NSArray* _bundleIdentifiers;
	BOOL _displayIcon;
	BOOL _displayLargeIcon;
	BOOL _displayCaptionText;
	BOOL _allowsOpeningSafari;
	NSString* _displayLanguage;

}

@property (readonly) OBBundle * bundle; 
@property (readonly) NSArray * bundles; 
@property (readonly) OBPrivacyFlow * flow; 
@property (assign) BOOL displayIcon;                        //@synthesize displayIcon=_displayIcon - In the implementation block
@property (assign) BOOL displayLargeIcon;                   //@synthesize displayLargeIcon=_displayLargeIcon - In the implementation block
@property (assign) BOOL displayCaptionText;                 //@synthesize displayCaptionText=_displayCaptionText - In the implementation block
@property (retain) NSString * displayLanguage;              //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) BOOL allowsOpeningSafari;                //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
+(id)linkWithBundleIdentifier:(id)arg1 ;
+(Class)_platformSpecificClass;
+(id)linkWithBundleIdentifiers:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(OBBundle *)bundle;
-(OBPrivacyFlow *)flow;
-(void)setDisplayIcon:(BOOL)arg1 ;
-(BOOL)displayIcon;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(NSString *)displayLanguage;
-(BOOL)allowsOpeningSafari;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(id)initWithPrivacyBundle:(id)arg1 ;
-(void)setDisplayLargeIcon:(BOOL)arg1 ;
-(void)setDisplayCaptionText:(BOOL)arg1 ;
-(BOOL)displayLargeIcon;
-(void)linkPressed;
-(void)setLinkEnabled:(BOOL)arg1 ;
-(NSArray *)bundles;
-(BOOL)displayCaptionText;
@end
