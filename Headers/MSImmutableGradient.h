//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableGradient.h"

#import "MSGradient.h"

@class MSPointArray, NSArray, NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableGradient : _MSImmutableGradient <MSGradient>
{
}

+ (id)gradientFromStops:(id)arg1 colorSpace:(id)arg2;
- (struct CGAffineTransform)ellipseTransformInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL hasOpacity;
- (id)NSGradientWithColorSpace:(id)arg1;
- (struct CGGradient *)newCGGradientForColorSpace:(struct CGColorSpace *)arg1;
- (double)conditionedEllipseLength;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;
- (id)stopGenericAtIndex:(unsigned long long)arg1;
- (id)stopAtIndex:(unsigned long long)arg1;
- (BOOL)hasDefaultValues;
- (id)defaultStopsArray;
- (id)NSGradientForContext:(id)arg1;
- (void)drawAngularGradientInRect:(struct CGRect)arg1 context:(id)arg2;
- (void)drawRadialFillInRect:(struct CGRect)arg1 gradient:(struct CGGradient *)arg2 context:(id)arg3;
- (void)drawLinearFillInRect:(struct CGRect)arg1 gradient:(struct CGGradient *)arg2 context:(id)arg3;
- (void)drawFillInRect:(struct CGRect)arg1 forBorderThickness:(double)arg2 context:(id)arg3;
- (id)angularGradientImageInRect:(struct CGRect)arg1 colorSpace:(id)arg2 cache:(id)arg3;
- (id)interpolatedStartAndStopColorForStops:(id)arg1 colorSpace:(id)arg2;
- (struct CGImage *)newAngularGradientImageInRect:(struct CGRect)arg1 stops:(id)arg2 colorSpace:(id)arg3;
- (id)sortedStops;
- (id)angularGradientImageInRect:(struct CGRect)arg1 colorSpace:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double elipseLength;
@property(readonly, nonatomic) struct CGPoint from;
@property(readonly, nonatomic) long long gradientType;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) MSPointArray *points;
@property(readonly, nonatomic) BOOL shouldSmoothenOpacity;
@property(readonly, nonatomic) NSArray *stops;
@property(readonly) Class superclass;
@property(readonly, nonatomic) struct CGPoint to;

@end

