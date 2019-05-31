/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSArray;

@interface SFVisibleSuggestionsFeedback : SFFeedback {

	NSArray* _suggestions;

}

@property (nonatomic,copy) NSArray * suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)suggestions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(id)initWithSuggestions:(id)arg1 ;
@end

