/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSObject, NSString, NSDate;

@interface CKPlaceholderOperation : NSOperation {

	NSObject*<OS_dispatch_group> _group;
	BOOL _isFinished;
	BOOL _isExecuting;
	NSString* _sectionID;
	id _context;
	NSDate* _startDate;
	NSString* _operationID;
	/*^block*/id _daemonInvokeBlock;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                  //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) id context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * operationID;              //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) id daemonInvokeBlock;                //@synthesize daemonInvokeBlock=_daemonInvokeBlock - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                      //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                       //@synthesize isFinished=_isFinished - In the implementation block
-(NSDate *)startDate;
-(void)cancel;
-(id)description;
-(id)context;
-(void)start;
-(NSString *)sectionID;
-(void)main;
-(void)setContext:(id)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithOperation:(id)arg1 daemonInvocationBlock:(/*^block*/id)arg2 ;
-(id)daemonInvokeBlock;
-(void)setStartDate:(NSDate *)arg1 ;
-(BOOL)isConcurrent;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)_setIsFinished:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)operationID;
@end

