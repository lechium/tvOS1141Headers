//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

@interface MTApplication : UIApplication
{
    id <UIApplicationDelegate> _strongDelegate;	// 8 = 0x8
}

+ (_Bool)handleTextViewURL:(id)arg1 interaction:(long long)arg2;	// IMP=0x00000001000472fc
+ (id)appController;	// IMP=0x0000000100047280
+ (id)sharedApplication;	// IMP=0x000000010004724c
@property(retain, nonatomic) id <UIApplicationDelegate> strongDelegate; // @synthesize strongDelegate=_strongDelegate;
- (void).cxx_destruct;	// IMP=0x00000001000476f8
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100047568
- (_Bool)openURL:(id)arg1;	// IMP=0x00000001000474b4
- (_Bool)isRunningInStoreDemoMode;	// IMP=0x000000010004743c
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000473c4
- (id)delegate;	// IMP=0x0000000100047390

@end

