//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class HBFolderCell, NSString, _UIStackedImageConfiguration;

@interface HBFolderZoomLaunchAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    HBFolderCell *_folderCell;	// 8 = 0x8
    _UIStackedImageConfiguration *_configuration;	// 16 = 0x10
}

@property(retain, nonatomic) _UIStackedImageConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HBFolderCell *folderCell; // @synthesize folderCell=_folderCell;
- (void).cxx_destruct;	// IMP=0x000000010004265c
- (void)animateTransition:(id)arg1;	// IMP=0x0000000100042158
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100042150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

