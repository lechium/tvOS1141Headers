/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFTranscription : NSObject <NSCopying, NSSecureCoding> {

	NSString* _formattedString;
	NSArray* _segments;

}

@property (nonatomic,copy,readonly) NSString * formattedString;              //@synthesize formattedString=_formattedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)segments;
-(NSString *)formattedString;
-(id)_initWithSegments:(id)arg1 formattedString:(id)arg2 ;
@end

