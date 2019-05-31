/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFResultFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SFResultGradingFeedback : SFResultFeedback <NSCopying> {

	unsigned long long _grade;
	NSString* _textFeedback;

}

@property (nonatomic,readonly) unsigned long long grade;              //@synthesize grade=_grade - In the implementation block
@property (nonatomic,copy) NSString * textFeedback;                   //@synthesize textFeedback=_textFeedback - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)grade;
-(id)initWithResult:(id)arg1 grade:(unsigned long long)arg2 textFeedback:(id)arg3 ;
-(id)initWithResult:(id)arg1 grade:(unsigned long long)arg2 ;
-(NSString *)textFeedback;
-(void)setTextFeedback:(NSString *)arg1 ;
@end
