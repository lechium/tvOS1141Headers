//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, TVImageProxy;

@interface TVSettingsLocationItem : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_explanatoryText;	// 16 = 0x10
    TVImageProxy *_image;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
    unsigned long long _accessType;	// 40 = 0x28
    NSArray *_allowedAccessTypes;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    NSDictionary *_info;	// 64 = 0x40
}

+ (id)_imageForInfo:(id)arg1;	// IMP=0x0000000100071888
+ (id)_allowedAccessTypesForInfo:(id)arg1;	// IMP=0x0000000100071720
+ (unsigned long long)_accessTypeForInfo:(id)arg1;	// IMP=0x00000001000716e0
+ (unsigned long long)_itemTypeForInfo:(id)arg1;	// IMP=0x0000000100071698
+ (id)_explanatoryTextForInfo:(id)arg1;	// IMP=0x0000000100071514
+ (id)_titleForIdentifier:(id)arg1 info:(id)arg2;	// IMP=0x0000000100071278
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSArray *allowedAccessTypes; // @synthesize allowedAccessTypes=_allowedAccessTypes;
@property(nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TVImageProxy *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *explanatoryText; // @synthesize explanatoryText=_explanatoryText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x0000000100071960
- (id)initWithInfo:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000100070d94
- (id)init;	// IMP=0x0000000100070d80

@end

