//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SATVChooseOptionView;

@protocol SATVChooseOptionViewDataSource <NSObject>
- (NSString *)secondOptionButtonTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)firstOptionButtonTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)subtitleTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)titleTextForView:(SATVChooseOptionView *)arg1;

@optional
- (NSString *)secondOptionButtonFooterTextForView:(SATVChooseOptionView *)arg1;
- (NSString *)firstOptionButtonFooterTextForView:(SATVChooseOptionView *)arg1;
@end

