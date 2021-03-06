/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>

@class NSMutableSet, NSString, NSSet;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	int _phase;
	NSMutableSet* _containerURLs;
	NSMutableSet* _containers;
	int _containerInfoDepth;
	NSString* _appSpecificHomeSetPropNameSpace;
	NSString* _appSpecificHomeSetPropName;

}

@property (assign,nonatomic) int containerInfoDepth;                                                 //@synthesize containerInfoDepth=_containerInfoDepth - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVContainerInfoTaskGroupDelegate> delegate; 
@property (nonatomic,readonly) NSSet * containerURLs;                                                //@synthesize containerURLs=_containerURLs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(int)containerInfoDepth;
-(int)containerInfoDepthForURL:(id)arg1 ;
-(void)setContainerInfoDepth:(int)arg1 ;
-(void)_getContainerTopLevelInfo;
-(void)_getContainerHomeSet;
-(NSSet *)containerURLs;
-(void)startTaskGroup;
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3 ;
-(id)_copyContainerParserMappings;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
@end

