//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString;

@interface SPTHomeUICardStateStyle : NSObject <GLUEStyle>
{
    double _alpha;
}

+ (id)defaultStyleWithTheme:(id)arg1 state:(unsigned long long)arg2;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
