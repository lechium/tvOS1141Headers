/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITemplateItemViewController.h>
#import <SiriTVUI/SiriTVUITemplateItemViewControllerDelegate.h>
#import <SiriTVUI/SiriTVUITemplatedViewDelegate.h>

@class SiriTVUITemplateGroupView, SiriTVUIGroupViewTemplateItem, NSString;

@interface SiriTVUITemplateGroupViewController : SiriTVUITemplateItemViewController <SiriTVUITemplateItemViewControllerDelegate, SiriTVUITemplatedViewDelegate>

@property (nonatomic,retain) SiriTVUITemplateGroupView * view; 
@property (nonatomic,retain) SiriTVUIGroupViewTemplateItem * templateItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double fullScreenFraction; 
@property (nonatomic,readonly) UIEdgeInsets contentMargins; 
-(void)loadView;
-(void)viewDidLoad;
-(UIEdgeInsets)contentMargins;
-(UIEdgeInsets)paddingForItemAtIndexPath:(id)arg1 ;
-(void)templateItemViewController:(id)arg1 didHighlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4 ;
-(double)fullScreenFraction;
-(void)templateItemViewController:(id)arg1 highlightTemplateItem:(id)arg2 atIndexPath:(id)arg3 hasStopped:(BOOL)arg4 ;
-(void)templateItemViewController:(id)arg1 performAceCommands:(id)arg2 ;
-(void)templateItemViewController:(id)arg1 selectTemplateItem:(id)arg2 atIndexPath:(id)arg3 ;
@end

