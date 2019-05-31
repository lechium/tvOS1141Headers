/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNAvatarViewController_Private.h>
#import <libobjc.A.dylib/CNAvatarViewController.h>
@class NSArray;


@protocol CNAvatarViewController <NSObject,CNUIObjectViewController>
@property (nonatomic,copy) NSArray * contacts; 
@required
-(id)initWithSettings:(id)arg1;
-(NSArray *)contacts;
-(void)setContacts:(id)arg1;
-(id)descriptorForRequiredKeys;

@end


@protocol CNUIObjectViewControllerDelegate;
@class CNContactStore, PRPersonaStore, NSArray, NSString, UIView;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController> {

	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
@property (nonatomic,copy) NSArray * contacts; 
+(Class)defaultImplementation;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(id)descriptorForRequiredKeys;
@end

