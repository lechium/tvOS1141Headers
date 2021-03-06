/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer {

	NSString* _sceneID;

}

@property (nonatomic,copy,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(id)_initWithExternalSceneID:(id)arg1 level:(double)arg2 trackingContext:(id)arg3 ;
-(id)initWithExternalSceneID:(id)arg1 level:(double)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2 ;
-(NSString *)sceneID;
@end

