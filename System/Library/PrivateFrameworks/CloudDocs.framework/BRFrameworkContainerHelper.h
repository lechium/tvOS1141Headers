/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRContainerHelper.h>

@class NSString;

@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemIDForURL:(id)arg1 error:(id*)arg2 ;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3 ;
-(id)fetchContainerForURL:(id)arg1 ;
-(id)fetchAllContainersByIDWithError:(id*)arg1 ;
-(BOOL)canFetchAllContainersByID;
@end

