/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeNotifierWrapper.h>

@class NSString;

@interface CNChangeNotifierDarwinWrapper : NSObject <CNChangeNotifierWrapper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postNotification:(id)arg1 ;
-(void)addObserver:(id)arg1 notification:(id)arg2 ;
-(void)removeObserver:(id)arg1 notification:(id)arg2 ;
@end
