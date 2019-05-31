/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface VMUScanOverlay : NSObject {

	NSMutableArray* _rules;

}

@property (nonatomic,readonly) NSArray * refinementRules;              //@synthesize rules=_rules - In the implementation block
+(id)defaultOverlayWithScanner:(id)arg1 ;
+(id)defaultOverlay;
-(id)init;
-(void)addMetadataRefinementRule:(/*^block*/id)arg1 ;
-(NSArray *)refinementRules;
@end
