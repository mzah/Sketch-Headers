//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePart.h"

@interface _MSStyleReflection : MSStylePart
{
    double _distance;
    double _strength;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveStrength:(double)arg1;
- (double)primitiveStrength;
- (void)setPrimitiveDistance:(double)arg1;
- (double)primitiveDistance;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

