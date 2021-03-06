/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class IKViewElement, OBPrivacyLinkController;

@interface _TVPrivacyLinkViewController : UIViewController {

	IKViewElement* _viewElement;
	OBPrivacyLinkController* _impl;

}

@property (nonatomic,retain) OBPrivacyLinkController * impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;               //@synthesize viewElement=_viewElement - In the implementation block
-(OBPrivacyLinkController *)impl;
-(void)loadView;
-(void)updateWithViewElement:(id)arg1 ;
-(IKViewElement *)viewElement;
-(void)setImpl:(OBPrivacyLinkController *)arg1 ;
@end

