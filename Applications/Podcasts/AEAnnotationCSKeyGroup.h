//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEAnnotationCSKeyGroup : NSObject
{
    NSString *_keyPrefix;	// 8 = 0x8
    NSArray *_annotationTypes;	// 16 = 0x10
    long long _index;	// 24 = 0x18
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSArray *annotationTypes; // @synthesize annotationTypes=_annotationTypes;
@property(retain, nonatomic) NSString *keyPrefix; // @synthesize keyPrefix=_keyPrefix;
- (void)dealloc;	// IMP=0x000000010025f74c

@end

