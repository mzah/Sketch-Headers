//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableStylePart.h"

@class MSImmutableColor, MSImmutableGradient, MSImmutableGraphicsContextSettings;

@interface _MSImmutableStyleBasicFill : MSImmutableStylePart
{
    unsigned long long _fillType;
    MSImmutableColor *_color;
    MSImmutableGraphicsContextSettings *_contextSettings;
    MSImmutableGradient *_gradient;
}

+ (Class)mutableClass;
@property(retain, nonatomic) MSImmutableGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) MSImmutableGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSImmutableColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long fillType; // @synthesize fillType=_fillType;
- (void).cxx_destruct;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

