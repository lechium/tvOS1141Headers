/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface BSAuditHistoryItem : NSObject <BSXPCCoding, NSSecureCoding> {

	NSDate* _date;
	NSString* _description;

}

@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * value;                        //@synthesize description=_description - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)itemWithString:(id)arg1 ;
+(id)itemWithWithFormat:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)itemWithString:(id)arg1 ;
-(id)_timeFormatter;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSDate *)date;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

