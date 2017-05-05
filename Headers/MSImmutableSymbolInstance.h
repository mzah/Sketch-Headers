//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableSymbolInstance.h"

@interface MSImmutableSymbolInstance : _MSImmutableSymbolInstance
{
    unsigned long long _masterRefreshCounter;
}

+ (id)defaultName;
+ (unsigned long long)traits;
@property(readonly, nonatomic) unsigned long long masterRefreshCounter; // @synthesize masterRefreshCounter=_masterRefreshCounter;
- (struct BCEdgePaddings)masterInfluenceEdgePadding;
- (struct CGRect)calculateInfluenceRectForBounds;
- (id)overridesFromGroupForMigration:(id)arg1;
- (void)calculateMasterInfluencePaddingsBetweenRect:(struct CGRect)arg1 andInfluenceRect:(struct CGRect)arg2;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
- (id)keysDifferingFromObject:(id)arg1;
- (id)initWithGroupForMigration:(id)arg1;
- (id)possibleOverridesInDocument:(id)arg1 forSymbolID:(id)arg2 actualOverrides:(id)arg3 skipping:(id)arg4;
- (id)possibleOverridesInDocument:(id)arg1 actualOverrides:(id)arg2 skipping:(id)arg3;
- (id)overridesWithGridIndexRemoved:(id)arg1;
- (void)migratePropertiesFromV89OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV86OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV84OrEarlierWithUnarchiver:(id)arg1;
- (BOOL)differsFromLayer:(id)arg1;
- (void)writeSVGToElement:(id)arg1 withExporter:(id)arg2;

@end

