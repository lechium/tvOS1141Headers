//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVSettingsBackgroundAppRefreshSettings : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;	// IMP=0x0000000100027d04
@property(readonly, nonatomic) _Bool allowsBackgroundAppRefresh;
- (void)setAllowsBackgroundAppRefresh:(_Bool)arg1;	// IMP=0x00000001000279d8
- (unsigned long long)hash;	// IMP=0x00000001000278fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100027830
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001000277b0

@end

