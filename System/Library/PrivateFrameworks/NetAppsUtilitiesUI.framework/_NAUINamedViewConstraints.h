/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _NAUINamedViewConstraints : NSObject {

	NSString* _name;
	NSArray* _constraints;
	id _stalenessToken;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * constraints;               //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy,readonly) id stalenessToken;              //@synthesize stalenessToken=_stalenessToken - In the implementation block
-(NSString *)name;
-(NSArray *)constraints;
-(id)initWithName:(id)arg1 constraints:(id)arg2 stalenessToken:(id)arg3 ;
-(id)stalenessToken;
@end
