/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreRCInterfaceListenerDelegate;
@class NSMutableArray, NSArray;

@interface CoreRCInterfaceListener : NSObject {

	NSMutableArray* _interfaces;
	id<CoreRCInterfaceListenerDelegate> _delegate;

}

@property (assign,nonatomic) id<CoreRCInterfaceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * interfaces;                                    //@synthesize interfaces=_interfaces - In the implementation block
-(id)init;
-(id<CoreRCInterfaceListenerDelegate>)delegate;
-(void)setDelegate:(id<CoreRCInterfaceListenerDelegate>)arg1 ;
-(void)dealloc;
-(void)removeInterface:(id)arg1 ;
-(void)addInterface:(id)arg1 ;
-(NSArray *)interfaces;
-(id)initWithInterfaceController:(id)arg1 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
-(id)firstInterface;
@end
