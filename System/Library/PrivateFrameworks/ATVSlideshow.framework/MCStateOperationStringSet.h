/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCStateOperation.h>

@class NSString;

@interface MCStateOperationStringSet : MCStateOperation {

	NSString* _string;

}

@property (copy) NSString * string;              //@synthesize string=_string - In the implementation block
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andString:(id)arg3 ;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end
