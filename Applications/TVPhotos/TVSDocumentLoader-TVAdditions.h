//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSDocumentLoader.h"

@interface TVSDocumentLoader (TVAdditions)
+ (id)_APIBaseURL;	// IMP=0x0000000100004d98
+ (id)_activeDSID;	// IMP=0x0000000100004c88
+ (_Bool)hasStoreAccount;	// IMP=0x0000000100004814
+ (id)documentLoaderWithAPIEndpoint:(id)arg1 queryParameters:(id)arg2 protocolVersion:(unsigned long long)arg3;	// IMP=0x0000000100004104
+ (id)documentLoaderWithAPIEndpoint:(id)arg1 queryParameters:(id)arg2;	// IMP=0x000000010000409c
+ (id)documentLoaderWithURL:(id)arg1;	// IMP=0x000000010000402c
+ (id)documentLoaderWithURLRequest:(id)arg1;	// IMP=0x0000000100003f98
- (void)loadWithWeakObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004a04
- (void)loadJSONWithReponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004850
@end
