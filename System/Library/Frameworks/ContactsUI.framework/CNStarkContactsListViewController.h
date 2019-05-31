/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactListViewController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNStarkNoContentBannerView, AVExternalDevice, NSString;

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate> {

	BOOL _limitedUI;
	CNStarkNoContentBannerView* _overlayView;
	AVExternalDevice* _externalDevice;

}

@property (nonatomic,retain) CNStarkNoContentBannerView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) AVExternalDevice * externalDevice;                     //@synthesize externalDevice=_externalDevice - In the implementation block
@property (assign,nonatomic) BOOL limitedUI;                                        //@synthesize limitedUI=_limitedUI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CNStarkNoContentBannerView *)overlayView;
-(void)setOverlayView:(CNStarkNoContentBannerView *)arg1 ;
-(BOOL)limitedUI;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(void)limitedUINotification:(id)arg1 ;
-(void)setLimitedUI:(BOOL)arg1 ;
-(void)updateLimitedUI;
-(void)postMessageOverlayIfNecessary;
-(BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(AVExternalDevice *)externalDevice;
@end
