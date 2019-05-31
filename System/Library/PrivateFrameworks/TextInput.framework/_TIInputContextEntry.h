/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface _TIInputContextEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _text;
	NSString* _senderIdentifier;
	NSDate* _timestamp;

}

@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * senderIdentifier;              //@synthesize senderIdentifier=_senderIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSenderIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)senderIdentifier;
@end

