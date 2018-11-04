//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class NSArray, NSString;

@interface GLUEGradientStyle : NSObject <GLUEStyle>
{
    NSArray *_colors;
    NSArray *_locations;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)diagonalTopLeftToBottomRightGradientWithColors:(id)arg1;
+ (id)linearTopToBottomGradientWithColors:(id)arg1;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToGradientStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

