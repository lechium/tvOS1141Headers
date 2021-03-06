/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CoreKnowledge.CKSQLConnection : NSObject {

	 _handle;
	 path;
	 queue;
	 queueContext.storage;

}

@property (readonly,nonatomic) void* handle; 
@property (readonly,nonatomic) NSString * path; 
@property (readonly,nonatomic) BOOL readonly; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long changes; 
@property (readonly,nonatomic) long long totalChanges; 
-(void)interrupt;
-(long long)changes;
-(void)closeConnection;
-(void*)handle;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)path;
-(BOOL)readonly;
-(id)initWithReadonlyFlag:(BOOL)arg1 error:(id*)arg2 ;
-(id)init:(id)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(long long)totalChanges;
-(BOOL)execute:(id)arg1 error:(id*)arg2 ;
@end

