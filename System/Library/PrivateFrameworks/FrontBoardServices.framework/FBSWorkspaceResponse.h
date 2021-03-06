/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class FBSSceneMessage, BKSAnimationFenceHandle, NSString;

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {

	FBSSceneMessage* _message;
	BKSAnimationFenceHandle* _animationFence;

}

@property (nonatomic,retain) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (nonatomic,copy) FBSSceneMessage * message;                               //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setAnimationFence:(BKSAnimationFenceHandle *)arg1 ;
-(void)setMessage:(FBSSceneMessage *)arg1 ;
-(BKSAnimationFenceHandle *)animationFence;
-(FBSSceneMessage *)message;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

