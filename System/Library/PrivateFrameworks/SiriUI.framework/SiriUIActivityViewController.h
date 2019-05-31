/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@protocol SiriUIActivityViewControllerDelegate;
@interface SiriUIActivityViewController : UIActivityViewController {

	id<SiriUIActivityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUIActivityViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIActivityViewControllerDelegate>)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

