/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVInfoPanelContentViewController.h>

@class AVInfoPanelDescriptionViewController, AVInfoPanelNavigationCollectionViewController, UIVisualEffectView;

@interface AVInfoPanelMetadataViewController : AVInfoPanelContentViewController {

	AVInfoPanelDescriptionViewController* _descriptionViewController;
	AVInfoPanelNavigationCollectionViewController* _navigationViewController;
	UIVisualEffectView* _dividerView;

}

@property (readonly) AVInfoPanelDescriptionViewController * descriptionViewController; 
@property (readonly) AVInfoPanelNavigationCollectionViewController * navigationViewController; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)hasContent;
-(AVInfoPanelDescriptionViewController *)descriptionViewController;
-(AVInfoPanelNavigationCollectionViewController *)navigationViewController;
-(id)_navigationFlowLayout;
@end

