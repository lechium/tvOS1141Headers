/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface VSFailable : NSObject <NSSecureCoding> {

	long long _kind;
	id _object;
	NSError* _error;

}

@property (assign,nonatomic) long long kind;              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) id object;                   //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSError * error;               //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)objectClass;
+(id)failableWithObject:(id)arg1 ;
+(id)failableWithError:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setKind:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)object;
-(void)setObject:(id)arg1 ;
-(long long)kind;
-(id)initWithObject:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)unwrapObject:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
@end
