/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSString* _phoneNumber;
	id _underlyingResult;

}

@property (readonly) void* underlyingResult; 
+(BOOL)supportsSecureCoding;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(BOOL)_adjustRangesWithOffset:(long long)arg1 ;
-(void*)underlyingResult;
-(id)initWithRange:(NSRange)arg1 phoneNumber:(id)arg2 ;
-(id)initWithRange:(NSRange)arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3 ;
-(unsigned long long)resultType;
-(id)phoneNumber;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSRange)range;
@end

