/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TROperation.h>

@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation {

	BOOL _shouldIgnoreAuthFailures;
	BOOL _shouldForceInteractiveAuth;
	NSSet* _targetedServices;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) NSSet * targetedServices;                                 //@synthesize targetedServices=_targetedServices - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreAuthFailures;                            //@synthesize shouldIgnoreAuthFailures=_shouldIgnoreAuthFailures - In the implementation block
@property (assign,nonatomic) BOOL shouldForceInteractiveAuth;                          //@synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(BOOL)shouldForceInteractiveAuth;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)execute;
-(void)setShouldIgnoreAuthFailures:(BOOL)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(NSSet *)targetedServices;
-(BOOL)shouldIgnoreAuthFailures;
-(void)setShouldForceInteractiveAuth:(BOOL)arg1 ;
@end

