/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@class NSArray;

@interface _MFCombineLatestObservable : MFObservable {

	NSArray* _observables;

}

@property (nonatomic,copy) NSArray * observables;              //@synthesize observables=_observables - In the implementation block
-(NSArray *)observables;
-(id)initWithObservables:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(void)setObservables:(NSArray *)arg1 ;
@end

