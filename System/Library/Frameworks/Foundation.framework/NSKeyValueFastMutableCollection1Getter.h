/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueNonmutatingCollectionMethodSet, NSKeyValueMutatingCollectionMethodSet;

@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {

	NSKeyValueNonmutatingCollectionMethodSet* _nonmutatingMethods;
	NSKeyValueMutatingCollectionMethodSet* _mutatingMethods;

}
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 nonmutatingMethods:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5 ;
-(id)nonmutatingMethods;
-(id)mutatingMethods;
-(void)dealloc;
@end

