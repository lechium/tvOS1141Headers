//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class NSDateComponentsFormatter;

@interface TVHDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_hoursMinutesFormatter;	// 8 = 0x8
    NSDateComponentsFormatter *_secondsFormatter;	// 16 = 0x10
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0000000100003f24
+ (Class)transformedValueClass;	// IMP=0x0000000100003f10
+ (void)initialize;	// IMP=0x0000000100003d58
@property(retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *hoursMinutesFormatter; // @synthesize hoursMinutesFormatter=_hoursMinutesFormatter;
- (void).cxx_destruct;	// IMP=0x0000000100004050
- (id)transformedValue:(id)arg1;	// IMP=0x0000000100003f2c
- (id)init;	// IMP=0x0000000100003e00

@end

