/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface PBSBulletin : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _message;
	NSString* _serviceIdentifier;
	NSString* _viewControllerClassName;

}

@property (nonatomic,copy) NSDictionary * message;                          //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * viewControllerClassName;              //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMessage:(NSDictionary *)arg1 ;
-(NSDictionary *)message;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(NSString *)viewControllerClassName;
-(void)setViewControllerClassName:(NSString *)arg1 ;
@end

