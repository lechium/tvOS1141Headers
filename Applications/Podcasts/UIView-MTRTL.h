//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (MTRTL)
- (id)mt_shouldRTLMirrorStackDepth;	// IMP=0x0000000100199010
- (void)mt_setShouldRTLMirrorStackDepth:(id)arg1;	// IMP=0x0000000100199000
@property(nonatomic, getter=mt_enableAutomaticRTLMirroringForSubviews, setter=mt_setEnableAutomaticRTLMirroringForSubviews:) _Bool mt_enableAutomaticRTLMirroringForSubviews;
@property(nonatomic, getter=mt_isExcludedFromAutomaticRTLMirroring, setter=mt_setExcludedFromAutomaticRTLMirroring:) _Bool mt_excludedFromAutomaticRTLMirroring;
- (void)mt_RTLMirrorIfNeeded;	// IMP=0x0000000100198b2c
- (void)mt_setShouldRTLMirror;	// IMP=0x0000000100198a78
@end

