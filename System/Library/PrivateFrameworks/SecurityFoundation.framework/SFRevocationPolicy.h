/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFRevocationPolicy : NSObject <NSCopying, NSSecureCoding> {

	id _revocationPolicyInternal;

}

@property (assign,nonatomic) unsigned long long revocationMethods; 
@property (assign,nonatomic) long long networkLookup; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)revocationMethods;
-(long long)networkLookup;
-(id)initWithRevocationMethods:(unsigned long long)arg1 networkLookup:(long long)arg2 ;
-(void)setRevocationMethods:(unsigned long long)arg1 ;
-(void)setNetworkLookup:(long long)arg1 ;
@end
