/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSUIApplicationLaunchResponse;

@interface FBSUIApplicationLaunchResponseEvent : FBSWorkspaceEvent {

	FBSUIApplicationLaunchResponse* _response;

}

@property (nonatomic,retain) FBSUIApplicationLaunchResponse * response;              //@synthesize response=_response - In the implementation block
-(void)setResponse:(FBSUIApplicationLaunchResponse *)arg1 ;
-(void)dealloc;
-(FBSUIApplicationLaunchResponse *)response;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end
