//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TVHKAccountSetupViewController;

@protocol TVHKAccountSetupViewControllerDelegate <NSObject>

@optional
- (void)accountSetupViewControllerDidCancel:(TVHKAccountSetupViewController *)arg1;
- (void)accountSetupViewController:(TVHKAccountSetupViewController *)arg1 didSucceedWithAccountName:(NSString *)arg2;
@end

