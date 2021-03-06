/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVSceneTaxonomyNode, NSString, NSURL, NSBundle, NSMapTable;

@interface PVSceneTaxonomy : NSObject {

	PVSceneTaxonomyNode* _rootNode;
	NSString* _sha256Hash;
	NSURL* _graphURL;
	NSBundle* _localizationBundle;
	NSString* _tableName;
	NSMapTable* _sceneClassIndex;
	NSMapTable* _nameIndex;

}

@property (copy) NSURL * graphURL;                                //@synthesize graphURL=_graphURL - In the implementation block
@property (retain) NSBundle * localizationBundle;                 //@synthesize localizationBundle=_localizationBundle - In the implementation block
@property (copy) NSString * tableName;                            //@synthesize tableName=_tableName - In the implementation block
@property (retain) NSMapTable * sceneClassIndex;                  //@synthesize sceneClassIndex=_sceneClassIndex - In the implementation block
@property (retain) NSMapTable * nameIndex;                        //@synthesize nameIndex=_nameIndex - In the implementation block
@property (readonly) PVSceneTaxonomyNode * rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
@property (copy,readonly) NSString * sha256Hash;                  //@synthesize sha256Hash=_sha256Hash - In the implementation block
+(id)sharedTaxonomy;
-(PVSceneTaxonomyNode *)rootNode;
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(NSBundle *)localizationBundle;
-(id)initWithGraphURL:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3 ;
-(id)buildNodesFromGraphURL:(id)arg1 sha256Hash:(id*)arg2 ;
-(NSMapTable *)sceneClassIndex;
-(void)putNodeInIndex:(id)arg1 ;
-(NSURL *)graphURL;
-(void)setGraphURL:(NSURL *)arg1 ;
-(void)setLocalizationBundle:(NSBundle *)arg1 ;
-(void)setSceneClassIndex:(NSMapTable *)arg1 ;
-(void)setNameIndex:(NSMapTable *)arg1 ;
-(id)nodeForName:(id)arg1 ;
-(id)nodeForSceneClassId:(unsigned)arg1 ;
-(NSMapTable *)nameIndex;
-(NSString *)sha256Hash;
@end

