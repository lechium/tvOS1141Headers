/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSubstitutionCheckingResult.h>

@class NSArray;

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {

	NSArray* _alternativeStrings;

}
+(BOOL)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3 ;
-(unsigned long long)resultType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)alternativeStrings;
@end

