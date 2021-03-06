/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMAPSDelegate;
@class NSString;

@interface FMAPSDelegateInfo : NSObject {

	NSString* _topic;
	id<FMAPSDelegate> _delegate;

}

@property (nonatomic,retain) NSString * topic;                               //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic,__weak) id<FMAPSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setTopic:(NSString *)arg1 ;
-(id<FMAPSDelegate>)delegate;
-(void)setDelegate:(id<FMAPSDelegate>)arg1 ;
-(NSString *)topic;
@end

