/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate;

@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding> {

	NSDictionary* _token;
	NSDate* _date;
	long long _resultType;
	BOOL _delete;

}

@property (retain,readonly) NSDictionary * token;              //@synthesize token=_token - In the implementation block
@property (retain,readonly) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (readonly) long long resultType;                     //@synthesize resultType=_resultType - In the implementation block
@property (readonly) BOOL delete;                              //@synthesize delete=_delete - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initForRequest:(id)arg1 ;
-(long long)resultType;
-(BOOL)delete;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSDate *)date;
-(NSDictionary *)token;
@end

