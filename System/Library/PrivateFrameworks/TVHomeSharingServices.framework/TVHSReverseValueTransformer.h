/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSValueTransformer;

@interface TVHSReverseValueTransformer : NSValueTransformer {

	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
+(id)reverseValueTransformerWithValueTransformer:(id)arg1 ;
-(id)init;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(id)initWithValueTransformer:(id)arg1 ;
@end

