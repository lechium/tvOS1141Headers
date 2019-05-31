//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (MTAdditions)
+ (id)mt_lessVerboseDateFormatter;	// IMP=0x0000000100030314
+ (id)mt_verboseDateFormatter;	// IMP=0x00000001000301fc
+ (id)mt_dateFormatterNoYearAbbrevMonth;	// IMP=0x00000001000300e4
+ (id)mt_dateFormatterNoYear;	// IMP=0x000000010002ffcc
+ (id)mt_dateFormatterShortStyleWithYear;	// IMP=0x000000010002fedc
+ (id)mt_dateFormatterNoDayWithYear;	// IMP=0x000000010002fdc4
+ (id)mt_dateFormatterWithYear;	// IMP=0x000000010002fcac
+ (double)maxWidthForMicroFriendlyDateStringWithFont:(id)arg1;	// IMP=0x000000010002fb6c
+ (id)dayOfWeekFromDate:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x000000010002f2f8
- (id)mt_dateWithDeltaDays:(long long)arg1;	// IMP=0x000000010003053c
- (_Bool)isLessThanWeekOld;	// IMP=0x000000010003042c
- (_Bool)isSameDayOfWeekAs:(id)arg1;	// IMP=0x000000010002fac4
- (_Bool)inSameYearAs:(id)arg1;	// IMP=0x000000010002f9d0
- (_Bool)isThisYear;	// IMP=0x000000010002f970
- (id)timeString;	// IMP=0x000000010002f8a8
- (id)verboseDisplayStringWithoutTime;	// IMP=0x000000010002f844
- (id)lessVerboseDisplayString;	// IMP=0x000000010002f714
- (id)verboseDisplayString;	// IMP=0x000000010002f5e4
- (id)nanoFriendlyDisplayString;	// IMP=0x000000010002f0d4
- (id)microFriendlyDisplayString;	// IMP=0x000000010002eeb0
- (id)abbreviatedFriendlyDisplayString;	// IMP=0x000000010002ec8c
- (id)friendlyDisplayString;	// IMP=0x000000010002ea68
@end
