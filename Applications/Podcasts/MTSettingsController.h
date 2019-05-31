//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableSet;

@interface MTSettingsController : NSObject
{
    NSDictionary *_groups;	// 8 = 0x8
    NSArray *_order;	// 16 = 0x10
    id <MTSettingsControllerDelegate> _delegate;	// 24 = 0x18
    NSMutableSet *_disabledGroups;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableSet *disabledGroups; // @synthesize disabledGroups=_disabledGroups;
@property(nonatomic) __weak id <MTSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *order; // @synthesize order=_order;
@property(copy, nonatomic) NSDictionary *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;	// IMP=0x00000001001237d4
- (void)setValue:(id)arg1 forSettingWithIdentifier:(id)arg2 inGroup:(id)arg3;	// IMP=0x00000001001233f0
- (void)removeSettingAtIndex:(unsigned long long)arg1 fromGroupWithIdentifier:(id)arg2;	// IMP=0x00000001001232d8
- (void)removeGroupWithIdentifier:(id)arg1;	// IMP=0x00000001001231b0
- (void)addGroup:(id)arg1 withIdentifier:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000100123074
- (void)setEnabled:(_Bool)arg1 forGroupWithIdentifier:(id)arg2;	// IMP=0x0000000100122fa4
- (void)reloadGroupWithIdentifier:(id)arg1;	// IMP=0x0000000100122eb4

@end
