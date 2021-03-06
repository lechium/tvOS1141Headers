//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_TVInterfaceCreatingPrivate.h"

@class NSString, TVMusicCloudViewController;

@interface TVMusicInterfaceFactory : NSObject <_TVInterfaceCreatingPrivate>
{
    TVMusicCloudViewController *_musicCloudViewController;	// 8 = 0x8
    id <TVPPlayback> _player;	// 16 = 0x10
}

+ (id)sharedInterfaceFactory;	// IMP=0x0000000100027a94
+ (void)initialize;	// IMP=0x0000000100027a24
+ (_Bool)isDataPrivateForElement:(id)arg1;	// IMP=0x00000001000909e4
+ (id)playlistImgWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000903e0
@property(nonatomic) __weak id <TVPPlayback> player; // @synthesize player=_player;
- (void).cxx_destruct;	// IMP=0x0000000100028844
- (id)_imageProxyForElement:(id)arg1;	// IMP=0x0000000100028518
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x00000001000282e8
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x00000001000281e4
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x0000000100027ffc
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x0000000100027e98
- (void)setup;	// IMP=0x0000000100027b14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

