/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CDPHostInterface.h>

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {

	/*^block*/id _viewServiceTerminationBlock;

}

@property (nonatomic,copy) id viewServiceTerminationBlock;              //@synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)hostKeyboardOffset:(/*^block*/id)arg1 ;
-(double)_keyboardHeightOffset;
-(id)viewServiceTerminationBlock;
-(void)setViewServiceTerminationBlock:(id)arg1 ;
@end

