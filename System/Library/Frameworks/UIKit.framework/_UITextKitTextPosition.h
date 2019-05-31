/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextPosition.h>

@interface _UITextKitTextPosition : UITextPosition {

	long long _offset;
	long long _affinity;

}

@property (assign) long long offset;                //@synthesize offset=_offset - In the implementation block
@property (assign) long long affinity;              //@synthesize affinity=_affinity - In the implementation block
+(id)positionWithOffset:(long long)arg1 ;
+(id)positionWithOffset:(long long)arg1 affinity:(long long)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(long long)affinity;
-(void)setAffinity:(long long)arg1 ;
@end

