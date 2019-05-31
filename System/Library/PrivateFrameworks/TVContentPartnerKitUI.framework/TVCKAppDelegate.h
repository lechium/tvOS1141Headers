/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVStoreApplicationDelegate.h>
#import <TVContentPartnerKitUI/_TVInterfaceCreatingPrivate.h>
#import <TVContentPartnerKitUI/TVInterfaceCreating.h>

@class NSString;

@interface TVCKAppDelegate : TVStoreApplicationDelegate <_TVInterfaceCreatingPrivate, TVInterfaceCreating>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(void)setupUIFactoryWithBootURL:(id)arg1 defaultBootURL:(id)arg2 ;
+(void)exposeObjectsInJSContext:(id)arg1 ;
+(void)exposeDefaultObjectsInJSContext:(id)arg1 ;
-(id)init;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)_styleSheetURLForTemplate:(id)arg1 ;
-(id)URLForResource:(id)arg1 ;
-(id)imageForResource:(id)arg1 ;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)setupWithBootURL:(id)arg1 ;
-(void)_registerTemplateStyleSheets;
@end

