/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@interface _CNOnEmptyObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _nextObservable;
	BOOL _observableIsEmpty;

}

@property (nonatomic,retain) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
-(id)initWithObservable:(id)arg1 nextObservable:(id)arg2 ;
-(id<CNObservable>)observable;
-(void)setObservable:(id<CNObservable>)arg1 ;
-(void)observableDidSendResult;
-(BOOL)isObservableEmpty;
-(id)subscribeNextObservable:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
@end

