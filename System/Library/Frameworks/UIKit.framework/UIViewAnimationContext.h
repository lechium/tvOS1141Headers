/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, UITableViewCell;

@interface UIViewAnimationContext : NSObject {

	NSArray* _viewAnimations;
	long long _animationCount;
	/*^block*/id _completionHandler;
	UITableViewCell* _swipeToDeleteCell;

}

@property (nonatomic,retain) NSArray * viewAnimations;                         //@synthesize viewAnimations=_viewAnimations - In the implementation block
@property (assign,nonatomic) long long animationCount;                         //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,readonly) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UITableViewCell * swipeToDeleteCell;              //@synthesize swipeToDeleteCell=_swipeToDeleteCell - In the implementation block
-(id)completionHandler;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setViewAnimations:(NSArray *)arg1 ;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(NSArray *)viewAnimations;
-(UITableViewCell *)swipeToDeleteCell;
-(void)setSwipeToDeleteCell:(UITableViewCell *)arg1 ;
@end

