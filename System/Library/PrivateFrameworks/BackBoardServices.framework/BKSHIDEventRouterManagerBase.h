/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface BKSHIDEventRouterManagerBase : NSObject {

	NSArray* _eventRouters;

}

@property (nonatomic,retain) NSArray * eventRouters;              //@synthesize eventRouters=_eventRouters - In the implementation block
-(void)setEventRouters:(NSArray *)arg1 ;
-(NSArray *)eventRouters;
-(long long)routerDestinationForDescriptor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

