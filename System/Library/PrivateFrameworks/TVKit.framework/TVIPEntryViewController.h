/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <TVKit/TVIPEntryViewDelegate.h>

@protocol TVIPEntryViewControllerDelegate;
@class TVHeaderView, UILabel, TVIPEntryView, NSString;

@interface TVIPEntryViewController : UIViewController <TVIPEntryViewDelegate> {

	TVHeaderView* _titleView;
	UILabel* _promptLabel;
	TVIPEntryView* _ipEntryView;
	NSString* _prompt;
	id<TVIPEntryViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSString * prompt;                                                  //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy) NSString * ipAddress; 
@property (assign,nonatomic,__weak) id<TVIPEntryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(id<TVIPEntryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVIPEntryViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(id)_ipEntryView;
-(void)ipEntryViewDidFinishEditing:(id)arg1 ;
@end

