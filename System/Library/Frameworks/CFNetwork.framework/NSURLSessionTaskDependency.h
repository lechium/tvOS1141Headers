/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface NSURLSessionTaskDependency : NSObject

@property (nonatomic,retain) NSURLSessionTaskDependencyDescription * taskDependencyDescription; 
@property (nonatomic,retain,readonly) NSURLSessionTask * parentTask; 
@property (nonatomic,retain,readonly) NSURLSessionTask * mainDocumentTask; 
+(id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(BOOL)arg3 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2 ;
@end

