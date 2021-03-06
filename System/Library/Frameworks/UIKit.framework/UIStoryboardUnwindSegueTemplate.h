/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@class NSString;

@interface UIStoryboardUnwindSegueTemplate : UIStoryboardSegueTemplate {

	NSString* _action;

}

@property (nonatomic,copy) NSString * action;              //@synthesize action=_action - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)_perform:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)_legacyUnwindExecutorForTarget:(id)arg1 ;
@end

