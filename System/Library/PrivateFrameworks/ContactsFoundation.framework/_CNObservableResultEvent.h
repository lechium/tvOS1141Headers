/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservableEvent.h>

@interface _CNObservableResultEvent : CNObservableEvent {

	id _result;

}
-(unsigned long long)eventType;
-(id)error;
-(BOOL)hasValue;
-(void)dematerializeWithObserver:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)value;
-(id)initWithResult:(id)arg1 ;
@end

