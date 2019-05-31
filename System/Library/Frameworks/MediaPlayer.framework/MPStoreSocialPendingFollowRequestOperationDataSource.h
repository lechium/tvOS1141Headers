/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreSocialRequestOperationDataSource.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource> {

	long long _action;
	MPModelSocialPerson* _person;

}

@property (nonatomic,readonly) long long action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) MPModelSocialPerson * person;              //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)queryItems;
-(long long)action;
-(id)initWithAction:(long long)arg1 ;
-(void)setPerson:(MPModelSocialPerson *)arg1 ;
-(MPModelSocialPerson *)person;
-(id)bagKey;
-(id)httpBody;
-(long long)httpBodyType;
-(long long)httpMethod;
-(id)fallbackBagKeys;
-(id)_actionTypeString;
@end

