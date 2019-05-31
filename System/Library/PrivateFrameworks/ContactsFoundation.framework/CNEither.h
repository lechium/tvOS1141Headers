/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNPair;

@interface CNEither : NSObject <NSSecureCoding> {

	CNPair* _pair;

}

@property (nonatomic,retain) CNPair * pair;               //@synthesize pair=_pair - In the implementation block
@property (nonatomic,readonly) BOOL isLeft; 
@property (nonatomic,readonly) BOOL isRight; 
@property (nonatomic,readonly) id left; 
@property (nonatomic,readonly) id right; 
+(id)firstLeftInLazyChain:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)eitherWithBlock:(/*^block*/id)arg1 ;
+(id)eitherWithRight:(id)arg1 ;
+(id)eitherWithLeft:(id)arg1 ;
+(id)eitherWithBool:(BOOL)arg1 error:(id)arg2 ;
+(id)eitherWithLeft:(id)arg1 right:(id)arg2 ;
-(CNPair *)pair;
-(id)initWithLeft:(id)arg1 right:(id)arg2 ;
-(BOOL)isRight;
-(void)setPair:(CNPair *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isLeft;
-(id)left;
-(id)right;
@end

