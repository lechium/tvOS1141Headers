/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GKBasePlayer : NSObject

@property (nonatomic,retain,readonly) NSString * playerID; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)playerID;
@end

