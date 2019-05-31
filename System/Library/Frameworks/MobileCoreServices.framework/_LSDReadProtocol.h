/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDReadProtocol
@required
-(void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(BOOL)arg5 preferredLocalizations:(id)arg6 validationToken:(id)arg7 completionHandler:(/*^block*/id)arg8;
-(void)getServerStoreWithCompletionHandler:(/*^block*/id)arg1;
-(void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(/*^block*/id)arg1;
-(void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getDiskUsage:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resolveQueries:(id)arg1 legacySPI:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getLocalizationDictionaryForTypeWithIdentifier:(id)arg1 unit:(unsigned)arg2 preferredLocalizations:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)getServerStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)getKernelPackageExtensionsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getURLOverrideForURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(/*^block*/id)arg1;
-(void)bindDocumentProxy:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

