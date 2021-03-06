/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer {

	NSArray* _valueTransformers;

}

@property (nonatomic,copy) NSArray * valueTransformers;              //@synthesize valueTransformers=_valueTransformers - In the implementation block
-(id)init;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(NSArray *)valueTransformers;
-(void)setValueTransformers:(NSArray *)arg1 ;
@end

