//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HBAppGridView, NSIndexPath;

@protocol HBAppGridViewDelegate <NSObject>
- (NSIndexPath *)preferredFocusIndexPathInAppGridView:(HBAppGridView *)arg1;

@optional
- (void)appGridViewDidEndStableEditing:(HBAppGridView *)arg1;
- (void)appGridViewDidBeginStableEditing:(HBAppGridView *)arg1;
- (void)appGridViewDidStableTouchEndWhileEditing:(HBAppGridView *)arg1;
- (void)appGridViewDidStableTouchBeginWhileEditing:(HBAppGridView *)arg1;
- (void)appGridViewDidScrollCloseEnoughToTop:(HBAppGridView *)arg1;
- (void)appGridViewDidEndDecelerating:(HBAppGridView *)arg1;
- (void)appGridView:(HBAppGridView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)appGridView:(HBAppGridView *)arg1 didLongPressItemAtIndexPath:(NSIndexPath *)arg2;
- (void)appGridView:(HBAppGridView *)arg1 showPressCompleteForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)appGridView:(HBAppGridView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
@end

