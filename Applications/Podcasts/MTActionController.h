//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMActionController.h"

@class MTColorTheme;

@interface MTActionController : IMActionController
{
    MTColorTheme *_colorTheme;	// 8 = 0x8
}

@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
- (void).cxx_destruct;	// IMP=0x000000010017db3c
- (id)createMoreAction;	// IMP=0x000000010017db18
- (void)setupActions;	// IMP=0x000000010017da08
- (void)setAvailableActions:(id)arg1;	// IMP=0x000000010017d9b8

@end
